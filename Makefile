######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# Copyright 2003-2018 by Wilson Snyder. This program is free software; you can
# redistribute it and/or modify it under the terms of either the GNU
# Lesser General Public License Version 3 or the Perl Artistic License
# Version 2.0.
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif


TB := sim_top.cpp
TOP := top




OPT_FLAGS ?= -O3 --trace --trace-max-array 128 --unroll-count 128

VERILATOR_OPTS ?= \
	$(OPT_FLAGS) 		\
	-Wall 					\
	-Wno-WIDTH 			\
	-Wno-UNUSED 		\
	-Wno-BLKSEQ 		\
	-Wno-fatal 			\
	--Wno-lint 			\
	--cc 						\
	--autoflush 		\
	--trace



######################################################################

# This is intended to be a minimal example.  Before copying this to start a
# real project, it is better to start with a more complete example,
# e.g. examples/tracing_c.

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package inatall, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).

VERILATOR_ROOT ?= /home/james/verilator
VERILATOR = $(VERILATOR_ROOT)/bin/verilator

default:
	@echo "-- Verilator hello-world simple example"
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_OPTS) --exe $(TOP).sv $(TB)
	@echo "-- COMPILE -----------------"
	$(MAKE) -j 4 -C obj_dir -f V$(TOP).mk
	@echo "-- RUN ---------------------"
	obj_dir/V$(TOP)
	@echo "-- DONE --------------------"
	@echo "Note: Once this example is understood, see examples/tracing_c."
	@echo "Note: Also see the EXAMPLE section in the verilator manpage/document."

######################################################################

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
