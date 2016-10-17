#如果已定义KERNELRELEASE，说明是由内核构造系统调用的
#可以利用内建语句
ifneq ($(KERNELRELEASE),) 
	obj-m :=00_module.o
	#此时由内核构造系统调用
else 
	#定义并记录内核源码路径
	KERNELDIR = /work2/hubing/msm/L503-kernel-5.1
	#记录当前工程目录
	PWD := $(shell pwd)

default: 
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules INSTALL_MOD_PATH=$(PWD) INSTALL_MOD_STRIP=1 ARCH=arm CROSS_COMPILE=arm-eabi- modules_install
	@rm -rf *.o .t* .m* .*.cmd *.mod.c *.order *.symvers
	
endif
	
clean:
	rm -rf *.ko *.o .t* .m* .*.cmd *.mod.c *.order *.symvers
