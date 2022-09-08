
#include <linux/interrupt.h>
#include <linux/gpio.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/platform_device.h>
#include <linux/cdev.h>

#define EIRQ_COUNT 32

static int8_t eirq_device[32][10]  = {};

struct eirq_pin_t {
    struct gpio_desc *gpio;
    int32_t Interrupt_number;
    int8_t eirq_name[10];
};

struct eirq_dev_t {
    struct eirq_pin_t eirq[EIRQ_COUNT];
    irqreturn_t (*handler)(int32_t, void*);
    uint8_t eirq_number;
};

struct eirq_dev_t eirq_dev;

static irqreturn_t eirq_handler(int32_t irq, void *dev_id)
{
    // uint64_t flags;
    struct eirq_pin_t* eirq_pin = (struct eirq_pin_t*)dev_id;


    // local_irq_save(flags);

    printk(KERN_NOTICE "nxp: Interrupt [%d] for " "device '%s' was triggered !\n", irq, eirq_pin->eirq_name);

    /* restore hard interrupts */
    // local_irq_restore(flags);

    return IRQ_HANDLED;
}

static int32_t eirq_probe(struct platform_device *pdev)
{
    uint8_t eirq_index;
    struct device *dev = &pdev->dev;
    struct gpio_desc *gpio;

    printk(KERN_DEBUG "gpio eirq is matched\n");

    memset(eirq_device[0], 0, sizeof(eirq_device));
    eirq_dev.eirq_number = 0;

    for(eirq_index=0; eirq_index<EIRQ_COUNT; eirq_index++) {
        sprintf(eirq_device[eirq_index], "EIRQ_%d", eirq_index );
    }

    for(eirq_index=0; eirq_index<EIRQ_COUNT; eirq_index++) {
        gpio = devm_gpiod_get(dev, eirq_device[eirq_index], GPIOD_IN);
        if(IS_ERR(gpio)) {
            continue;
        }
        sprintf(eirq_dev.eirq[eirq_dev.eirq_number].eirq_name, eirq_device[eirq_index]);
        eirq_dev.eirq[eirq_dev.eirq_number].gpio = gpio;
        eirq_dev.eirq_number++;
    };
    
    if(eirq_dev.eirq_number == 0) {
         dev_err(dev, "Failed to get EIRQ pin\n");
         return PTR_ERR(eirq_dev.eirq_number);
    }

    for(eirq_index=0; eirq_index<eirq_dev.eirq_number; eirq_index++) {
        eirq_dev.eirq[eirq_index].Interrupt_number = gpiod_to_irq(eirq_dev.eirq[eirq_index].gpio);
        if (eirq_dev.eirq[eirq_index].Interrupt_number < 0) {
            dev_err(dev, "Could not get gpio interrupt line from descriptor\n");
            return  eirq_dev.eirq[eirq_index].Interrupt_number;
        }
        printk(KERN_DEBUG "%s: gpio Interrupt number is %d\n", eirq_dev.eirq[eirq_index].eirq_name, eirq_dev.eirq[eirq_index].Interrupt_number);
    }

    for(eirq_index=0; eirq_index<eirq_dev.eirq_number ; eirq_index++) {
         eirq_dev.handler = eirq_handler;

         if(devm_request_irq(dev, eirq_dev.eirq[eirq_index].Interrupt_number,
           (irq_handler_t ) eirq_dev.handler,
           IRQF_TRIGGER_FALLING,
           dev_name(dev),
           &eirq_dev.eirq[eirq_index])) {
            dev_err(dev, "Failed to register IRQ %d\n", eirq_dev.eirq[eirq_index].Interrupt_number);
            return EINVAL;
        }
    }

    return 0;
}

static int32_t eirq_release(struct platform_device *pdev)
{
    struct device *dev= &pdev->dev;
    uint8_t device_number;
    
    for(device_number=0; device_number<eirq_dev.eirq_number; device_number++) {
        devm_free_irq(dev, eirq_dev.eirq[device_number].Interrupt_number, &eirq_dev.eirq[device_number]);
    }
  
    return 0;
}

static const struct of_device_id eirq_dev_ids[] = {
    {.compatible = "s32grdb2,eirq"},
    { /*last entry empty*/ },
};

static struct platform_driver eirq_drv = {
    .probe = eirq_probe,
    .remove = eirq_release,
    .driver = {
        .name = "gpio-eirqs",
	    .of_match_table = eirq_dev_ids,
	    .owner = THIS_MODULE,
    },
};

static int s32grdb2_eirq_init(void)
{
    return platform_driver_register(&eirq_drv);
}

static void s32grdb2_eirq_exit(void)
{
    platform_driver_unregister(&eirq_drv);
}

MODULE_AUTHOR("Frank Zhao");
MODULE_LICENSE("GPL");

module_init(s32grdb2_eirq_init);
module_exit(s32grdb2_eirq_exit);
