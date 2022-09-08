obj-m := s32grdb2-dtsled.o
s32grdb2-dtsled-y := dtsled-main.o

modules:
	$(MAKE) -C $(KDIR) M=$(CURDIR) modules

#modules_install: modules
#	$(MAKE) -C $(KDIR) M=$(CURDIR) INSTALL_MOD_PATH=$(INSTALL_DIR) $@
clean:
	$(MKAE) -C $(KDIR) M=$(CURDIR) clean



