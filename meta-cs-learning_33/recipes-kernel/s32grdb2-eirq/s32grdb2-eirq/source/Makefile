obj-m := s32grdb2-eirq.o
s32grdb2-eirq-y := eirq-main.o

modules:
	$(MAKE) -C $(KDIR) M=$(CURDIR) modules

#modules_install: modules
#	$(MAKE) -C $(KDIR) M=$(CURDIR) INSTALL_MOD_PATH=$(INSTALL_DIR) $@
clean:
	$(MKAE) -C $(KDIR) M=$(CURDIR) clean
