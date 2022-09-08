obj-m := dtsled-main.o key-main.o
#s32grdb2-key-led-y := dtsled-main.o key-main.o

modules:
	$(MAKE) -C $(KDIR) M=$(CURDIR) modules

modules_install: modules
	$(MAKE) -C $(KDIR) M=$(CURDIR) INSTALL_MOD_PATH=$(INSTALL_DIR) $@
clean:
	$(MKAE) -C $(KDIR) M=$(CURDIR) clean



