SRCS := $(wildcard *.c)
# This is a substitution reference. http://www.gnu.org/software/make/manual/make.html#Substitution-Refs
BINS := $(SRCS:%.c=bin/%)

CFLAGS=-Wall -g

# Tell make that the all target has every binary as a prequisite and tell make that it will not create an `all` file (see http://www.gnu.org/software/make/manual/make.html#Phony-Targets).
.PHONY: all
all: $(BINS)

bin:
	mkdir $@

# Tell make that the binaries in the current directory are intermediate files so it doesn't need to care about them directly (and can delete them). http://www.gnu.org/software/make/manual/make.html#index-_002eINTERMEDIATE
# This keeps make from building the binary in the current directory a second time if you run `make; make`.
.INTERMEDIATE: $(notdir $(BINS))

# Tell make that it should delete targets if their recipes error. http://www.gnu.org/software/make/manual/make.html#index-_002eDELETE_005fON_005fERROR 
.DELETE_ON_ERROR:

# This is a static pattern rule to tell make how to handle all the `$(BINS)` files. http://www.gnu.org/software/make/manual/make.html#Static-Pattern
$(BINS) : bin/% : % | bin
	mv $^ $@
