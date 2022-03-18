YACC ?= bison -y

EXT_CFLAGS := -g -O2 -Wall -I$(CURDIR)

SRCS_C := \
	ledAPP_main.c

OBJS_C := $(SRCS_C:.c=.o)

ledAPP: $(OBJS_ASM) $(OBJS_C) $(OBJS_CXX)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	$(RM) -r d *.o *.d

ifeq ($(findstring clean, $(MAKECMDGOALS)),)
-include $(SRCS_C:.c=.d)
endif

%.tab.c %.tab.h : %.yacc
	$(YACC) -d -b $* $<

$(OBJS_C): %.o : %.c
	$(CC) -c -MD $(CFLAGS) $(EXT_CFLAGS) $< -o $@
