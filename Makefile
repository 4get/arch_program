
TARGET = alloc_all_memory1  alloc_all_memory2  datasize mem_a1

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
INCLUDEDIR = $(KERNELDIR)/include
CFLAGS = -O2 -fomit-frame-pointer -Wall -I$(INCLUDEDIR)

all: $(TARGET)

clean:
	rm -f $(TARGET) *~ core

