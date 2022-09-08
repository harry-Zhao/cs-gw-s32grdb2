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
#include "s32grdb2_led.h"

#define LED_CNT 3
#define LED_NAME "dtsled"

#define LEDON  0
#define LEDOFF 1 

uint8_t *rgb_name[3] = {"led-Blue", "led-Red", "led-Green"};

struct gpioled_dev {
    dev_t devid;
    struct cdev cdev;
    struct class *class;
    struct device *device;
    struct device_node *nd;
    int major;
    int minor;
    int led_gpio[3];
};

struct gpioled_dev gpioled;

/**
 * GPIO6 --- Blue
 * GPIO7 --- Red
 * GPIO95 -- Green
 */
static int RGB_init(void)
{
    int ret = 0;
    int led_num = 0;

    for(led_num=0; led_num<LED_CNT; led_num++) {        
        gpioled.led_gpio[led_num] = of_get_named_gpio(gpioled.nd, rgb_name[led_num], 0);
        if(gpioled.led_gpio[led_num] < 0) {
            printk("can not get \"%s\"\n", rgb_name[led_num]);
	    return -EINVAL;
        }
        printk("%s num = %d\n", rgb_name[led_num], gpioled.led_gpio[led_num]);
    }
    
    for(led_num=0; led_num<LED_CNT; led_num++) {
        ret = gpio_direction_output(gpioled.led_gpio[led_num], 1);
	    if(ret < 0) {
	        printk("set gpio %d output failed!\n", gpioled.led_gpio[led_num]);
	        return -EINVAL;
	    }
        gpio_set_value(gpioled.led_gpio[led_num], 1);
    }

    return 0;
}

bool RGB_trigger(uint8_t key, uint8_t status)
{
      gpio_set_value(gpioled.led_gpio[key], status);
      return 0;
}

EXPORT_SYMBOL(RGB_trigger);


static int  led_open(struct inode *inode, struct file *filp)
{
    gpioled.minor = MINOR(inode->i_rdev);
    filp->private_data = &gpioled;
    return 0;
}

static ssize_t led_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
    return 0;
}

static ssize_t led_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
    int ret = 0;
    struct gpioled_dev *dev = filp->private_data;
    int minor = dev->minor;

    uint8_t databuf[1] = {0};

    ret = copy_from_user(databuf, buf, cnt);
    if(ret < 0) {
        printk("kernel write failed!\n");
	return -EFAULT;
    }
    
    gpio_set_value(dev->led_gpio[minor], databuf[0]);
    return 0;
}

static int led_release(struct inode *inode, struct file *file)
{
    return 0;
}

static struct file_operations gpioled_fops = {
    .owner = THIS_MODULE,
    .open = led_open,
    .read = led_read,
    .write = led_write,
    .release = led_release,
};


static int __init led_init(void)
{
    int ret = 0;
    uint8_t led_num = 0;

    printk("%s\n", __FUNCTION__);
    
    gpioled.nd = of_find_compatible_node(NULL, NULL, "s32grdb2,led-rgb");
    if(!gpioled.nd) {
        printk("dtsled-main can not find node compatible with \"s32grdb2,led-rgb\"\n");
	return -ENODEV;
    } 

    RGB_init();
 
    /**
     * 1. Create the number of the device
     */
    if(gpioled.major) {
        gpioled.devid = MKDEV(gpioled.major, 0);
	register_chrdev_region(gpioled.devid, LED_CNT, LED_NAME);
    } 
    else {
        alloc_chrdev_region(&gpioled.devid, 0, LED_CNT, LED_NAME);
	gpioled.major = MAJOR(gpioled.devid);
    }
    printk("gpioled major = %d\n", gpioled.major);

    /*
     *2. init cdev
     */
    gpioled.cdev.owner = THIS_MODULE;
    cdev_init(&gpioled.cdev, &gpioled_fops);
    
    /*
     *3. add cdev
     */
    cdev_add(&gpioled.cdev, gpioled.devid, LED_CNT);

    /*
     *4. create class
     */
    gpioled.class = class_create(gpioled.cdev.owner, LED_NAME);
    if(IS_ERR(gpioled.class)) {
        return PTR_ERR(gpioled.class);
    }

    /*
     *5. create a device
     */
    
    for(led_num=0; led_num<LED_CNT; led_num++) {
	gpioled.devid = MKDEV(gpioled.major, led_num);
        gpioled.device = device_create(gpioled.class, NULL, gpioled.devid, NULL, rgb_name[led_num]);
        if(IS_ERR(gpioled.device)) {
            return PTR_ERR(gpioled.device);
        }
    }

    return 0;
}

static void __exit led_exit(void)
{
    uint8_t led_num = 0;
    printk("%s\n", __FUNCTION__);
   
    cdev_del(&gpioled.cdev);
    unregister_chrdev_region(MKDEV(gpioled.major, 0), LED_CNT);
   
    for(led_num=0; led_num<LED_CNT; led_num++) {
        device_destroy(gpioled.class, MKDEV(gpioled.major, led_num));
    }
   
    class_destroy(gpioled.class);
}

module_init(led_init);
module_exit(led_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Frank Zhao");
