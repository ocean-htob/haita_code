/* ************************************************************************
 *       Filename:  00-module.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年10月17日 14时04分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
	printk(KERN_ERR "hello driver word init!\n");
}

static int __exit hello_exit(void)
{
	printk(KERN_ERR "hello driver word exit!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("haita ice");

