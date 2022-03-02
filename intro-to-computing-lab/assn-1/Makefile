SRC := $(wildcard *.c)
BINS := $(SRCS:%.c=bin/%)

CFLAGS=-Wall -g

.PHONY: all
all: $(BINS)

bin:
	mkdir $@

.INTERMEDIATE: $(nodir $(BINS))

.DELETE_ON_ERROR:

$(BINS) : bins/% : % | bin
	mv $^ $@
