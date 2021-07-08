obj-m := s32grdb2-rgb.o
s32grdb2-rgb-y := s32grdb2_led.o

modules:
	$(MAKE) -C $(KDIR) M=$(CURDIR) modules

#modules_install: modules
#	$(MAKE) -C $(KDIR) M=$(CURDIR) INSTALL_MOD_PATH=$(INSTALL_DIR) $@
clean:
	$(MKAE) -C $(KDIR) M=$(CURDIR) clean



