#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/delay.h>
#include <linux/cdev.h>
#include <linux/errno.h>
#include <linux/io.h>
#include <linux/ide.h>

#include "s32g274a_siul2.h"

#define LED_CNT 3
#define LED_NAME "RGB"

#define LEDON  0
#define LEDOFF 1 

#define SIUL2_0 (*p_siul2_0)
#define SIUL2_1 (*p_siul2_1) 

enum {
    led_blue = 0,
    led_red,
    led_green
} led_minor;

uint8_t *rgb_name[3] = {"led-Blue", "led-Red", "led-Green"};

struct chrled_dev {
    dev_t devid;               // 分配到的第一个设备号（起始）
    struct cdev cdev;          // 用于注册字符设备
    struct class *class;       // 用于设备文件的自动创建
    struct device *device;     // 用于设备文件的自动创建
    int major;
    int minor;
};

struct chrled_dev chrled;

/**
 * GPIO6 --- Blue
 * GPIO7 --- Red
 * GPIO95 -- Green
 */

static int led_pad_init(void)
{
    struct SIUL2_0_tag *p_siul2_0 = ioremap_nocache(SIUL2_0_REG_BASE, SIUL2_0_REG_SIZE);

    /*OBE = 1, ODE = 1,  IBE = 0, PUS = 0 pull down   PUE = 1 PULL enable SSS = 0x0*/
    SIUL2_0.MSCR[6].R = 0x303000; 
    SIUL2_0.MSCR[7].R = 0x303000; 
    SIUL2_0.MSCR[95].R = 0x303000;

    iounmap(p_siul2_0);
    
    return 0;
}

static int RGB_init(void)
{
    struct SIUL2_0_tag *p_siul2_0 = ioremap_nocache(SIUL2_0_REG_BASE, SIUL2_0_REG_SIZE);
    
    SIUL2_0.GPDO6.R = LEDOFF;
    SIUL2_0.GPDO7.R = LEDOFF;
    SIUL2_0.GPDO95.R = LEDOFF;

    iounmap(p_siul2_0);

    return 0;
}

static int led_set_value(uint32_t led_minor, uint8_t value)
{
    struct SIUL2_0_tag *p_siul2_0 = ioremap_nocache(SIUL2_0_REG_BASE, SIUL2_0_REG_SIZE);

    switch(led_minor) 
    {
        case led_blue: {
            SIUL2_0.GPDO6.R = value;
            break;
        }
        case led_red: {
            SIUL2_0.GPDO7.R = value;
            break;
        }
        case led_green: {
            SIUL2_0.GPDO95.R = value;
            break;
        }
        default :
            break;
    }

    iounmap(p_siul2_0);
    return 0;
}

static int  led_open(struct inode *inode, struct file *filp)
{
    chrled.minor = MINOR(inode->i_rdev);
    filp->private_data = &chrled;
    return 0;
}

static ssize_t led_read(struct file *filp, char __user *buf, size_t cnt, loff_t *offt)
{
    return 0;
}

static ssize_t led_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offt)
{
    int ret = 0;
    struct chrled_dev *dev = filp->private_data;
    int minor = dev->minor;

    uint8_t databuf[1] = {0};

    ret = copy_from_user(databuf, buf, cnt);
    if(ret < 0) {
        printk("kernel write failed!\n");
	return -EFAULT;
    }
    led_set_value(minor, databuf[0]);

    return 0;
}

static int led_release(struct inode *inode, struct file *file)
{
    return 0;
}

static struct file_operations chrled_fops = {
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
    led_pad_init();
    RGB_init();

    /**
     * 1. Create the number of the device
     */
    chrled.major = 0; // 选择动态申请设备号
    if(chrled.major) {
        chrled.devid = MKDEV(chrled.major, 0);
	    register_chrdev_region(chrled.devid, LED_CNT, LED_NAME);
    } 
    else {
        alloc_chrdev_region(&chrled.devid, 0, LED_CNT, LED_NAME); // 动态申请设备号，次设备号从0开始，分配3个
	    chrled.major = MAJOR(chrled.devid);                       // @chrled.devid： output parameter for first assigned number
    }
    // printk("chrled major = %d\n", chrled.major);

    /*
     *2. initialize cdev 将字符设备(cdev)与文件操作函数(file_operation)关联起来
     */
    chrled.cdev.owner = THIS_MODULE;
    cdev_init(&chrled.cdev, &chrled_fops);
    
    /*
     *3. add cdev 将字符设备注册到内核
     */
    cdev_add(&chrled.cdev, chrled.devid, LED_CNT);

    /*
     *4. create class 为该设备创建一个class
     *   利用udev来实现设备文件的自动创建， 通过class_creat()创建一个类（在/sys/class/目录下创建一个目录，目录名为第2个入参）
     *   类创建成功后，通过device_create()在/dev目录下创建设备节点
     */
    chrled.class = class_create(chrled.cdev.owner, LED_NAME);
    if(IS_ERR(chrled.class)) {
        return PTR_ERR(chrled.class);
    }

    /*
     *5. create device 创建3个led设备
     *    次设备号0： led-Blue 
     *    次设备号1： led-Red
     *    此设备号2： led-Green
     */
    for(led_num=0; led_num<LED_CNT; led_num++) {
        chrled.device = device_create(chrled.class, NULL, MKDEV(chrled.major, led_num), NULL, rgb_name[led_num]);
        if(IS_ERR(chrled.device)) {
            return PTR_ERR(chrled.device);
        }
    }

    return 0;
}

static void __exit led_exit(void)
{
    uint8_t led_num = 0;
    printk("%s\n", __FUNCTION__);
   
    cdev_del(&chrled.cdev);
    unregister_chrdev_region(chrled.devid, LED_CNT);
   
    for(led_num=0; led_num<LED_CNT; led_num++) {
        device_destroy(chrled.class, MKDEV(chrled.major, led_num));
    }
   
    class_destroy(chrled.class);
}

module_init(led_init);
module_exit(led_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Frank Zhao");
