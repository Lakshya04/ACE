# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-644/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 10 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Display_NavDisplay_idl_gen Display_NavDisplay_stub Display_NavDisplay_lem_gen Display_NavDisplay_exec Display_NavDisplay_svnt

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_idl_gen $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_stub $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_lem_gen $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_exec $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_svnt $(@)

.PHONY: Display_NavDisplay_idl_gen
Display_NavDisplay_idl_gen:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_idl_gen all

.PHONY: Display_NavDisplay_stub
Display_NavDisplay_stub: Display_NavDisplay_idl_gen
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_stub all

.PHONY: Display_NavDisplay_lem_gen
Display_NavDisplay_lem_gen: Display_NavDisplay_idl_gen
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_lem_gen all

.PHONY: Display_NavDisplay_exec
Display_NavDisplay_exec: Display_NavDisplay_stub Display_NavDisplay_lem_gen
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_exec all

.PHONY: Display_NavDisplay_svnt
Display_NavDisplay_svnt: Display_NavDisplay_exec
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Display_NavDisplay_svnt all

project_name_list:
	@echo Display_NavDisplay_exec
	@echo Display_NavDisplay_idl_gen
	@echo Display_NavDisplay_lem_gen
	@echo Display_NavDisplay_stub
	@echo Display_NavDisplay_svnt
