#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/delay.h>
#include <linux/cdev.h>
#include <linux/errno.h>
#include <linux/io.h>
#include <linux/ide.h>
#include <linux/gpio.h>
#include <linux/of_gpio.h>
#include <linux/of.h>
#include <linux/irq.h>
#include <linux/of_irq.h>
#include <linux/semaphore.h>
#include <linux/timer.h>

#include "s32grdb2_led.h"

#define KEY_CNT 1
#define KEY_NAME "key"
unsigned char ledstatus = 0;
EIR
char *key_name[1] = {"key1"};

struct irq_key_t {
    int gpio;
    int irqnum;
    unsigned char keyvalue;
    char name[10];
    unsigned char curkeynum;
    irqreturn_t (*handler)(int, void *);
};

struct irq_dev_t {
    dev_t devid;
    struct cdev cdev;
    struct class *class;
    struct device *device;
    int major;
    int minor;
    struct device_node *nd;
    atomic_t keyvalue;
    atomic_t keyrelease;
    struct irq_key_t irq_key[KEY_CNT];
};

struct irq_dev_t simulate_key;

static irqreturn_t key0_handler(int irq, void *dev_id)
{
    struct irq_dev_t *dev = (struct irq_dev_t *) dev_id;

    ledstatus = ~ledstatus;
    RGB_trigger(0, ledstatus);
   
    return IRQ_RETVAL(IRQ_HANDLED);
}

static int simulatekey_open(struct inode *inode, struct file *filp)
{
    filp->private_data = &simulate_key;
    return 0;
}

static ssize_t simulatekey_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)

{
    return 0;
}

static int simulatekey_release(struct inode *inode, struct file *file)
{
    return 0;
}


static struct file_operations key_fops = {
    .owner = THIS_MODULE,
    .open = simulatekey_open,
    .read = simulatekey_read,
    .release = simulatekey_release,
};

static int irqkey_init(void)
{
    int key_num = 0;
    int ret = 0;
    
    for(key_num=0; key_num<KEY_CNT; key_num++) {
        simulate_key.irq_key[key_num].gpio = of_get_named_gpio(simulate_key.nd, key_name[key_num], 0);       
        if(simulate_key.irq_key[key_num].gpio <0) {
	        printk("can not get \"%s\"\n", key_name[key_num]);
	        return -EINVAL;
	    }   
	printk("%s num = %d\n", key_name[key_num], simulate_key.irq_key[key_num].gpio);
    }

    for(key_num=0; key_num<KEY_CNT; key_num++) {
        memset(simulate_key.irq_key[key_num].name, 0, sizeof(simulate_key.irq_key[key_num].name));
	    sprintf(simulate_key.irq_key[key_num].name, key_name[key_num]);

	    gpio_request(simulate_key.irq_key[key_num].gpio, simulate_key.irq_key[key_num].name);
	    gpio_direction_input(simulate_key.irq_key[key_num].gpio);

	    simulate_key.irq_key[key_num].irqnum = gpio_to_irq(simulate_key.irq_key[key_num].gpio);
	    printk("%s: gpio=%d, irqnum=%d\n", key_name[key_num], simulate_key.irq_key[key_num].gpio, simulate_key.irq_key[key_num].irqnum);
    }
     
    simulate_key.irq_key[0].handler = key0_handler;
    simulate_key.irq_key[0].keyvalue = 0;

    for(key_num=0; key_num<1; key_num++) {
        simulate_key.irq_key[key_num].curkeynum = key_num;
        ret = request_irq(simulate_key.irq_key[key_num].irqnum, simulate_key.irq_key[key_num].handler, IRQF_TRIGGER_FALLING , simulate_key.irq_key[key_num].name, &simulate_key);
        if(ret < 0) {
            printk("irq %d request failed\n", simulate_key.irq_key[key_num].irqnum);
	    return -EFAULT;
        }
    }  
    return 0;
}


static int __init button_init(void)
{
    int ret = 0;
    int key_num = 0;
    
    simulate_key.nd = of_find_compatible_node(NULL, NULL, "s32grdb2,key");
    if(!simulate_key.nd) {
        printk("key-main can not find node compatible with \"s32grdb2,key\"\n");
	return -ENODEV;
    }

    irqkey_init();

    alloc_chrdev_region(&simulate_key.devid, 0, KEY_CNT, KEY_NAME);
    simulate_key.major = MAJOR(simulate_key.devid);

    simulate_key.cdev.owner = THIS_MODULE;
    cdev_init(&simulate_key.cdev, &key_fops);
    cdev_add(&simulate_key.cdev, simulate_key.devid, KEY_CNT);

    simulate_key.class = class_create(simulate_key.cdev.owner, KEY_NAME);

    for(key_num=0; key_num<KEY_CNT; key_num++) {
        simulate_key.devid = MKDEV(simulate_key.major, key_num);
	    simulate_key.device = device_create(simulate_key.class, NULL, simulate_key.devid, NULL, key_name[key_num]);
    }

    return 0;
}

static void __exit button_exit(void)
{
    uint8_t key_num = 0;
    printk("%s\n", __FUNCTION__);

    for(key_num=0; key_num<KEY_CNT; key_num++) {
        free_irq(simulate_key.irq_key[key_num].irqnum, &simulate_key);
        gpio_free(simulate_key.irq_key[key_num].gpio);

    }
   
    cdev_del(&simulate_key.cdev);
    unregister_chrdev_region(MKDEV(simulate_key.major, 0), KEY_CNT);
   
    for(key_num=0; key_num<KEY_CNT; key_num++) {
        device_destroy(simulate_key.class, MKDEV(simulate_key.major, key_num));
    }   
   
    class_destroy(simulate_key.class);
}


module_init(button_init);
module_exit(button_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Frank Zhao");
