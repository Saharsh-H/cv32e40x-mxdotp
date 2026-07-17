#==============================================================================
# File    : Makefile
# Project : MXDOTP XIF Coprocessor - Verilator Build
#------------------------------------------------------------------------------
# Targets:
#   make / make mxdotp   full system regression (tb_mxdotp_core) - UNCHANGED
#                        workflow from before this reorganization.
#   make fp4             standalone FP4 fused-engine unit test (tb_fp4_unit.sv
#                        driving mxdotp_fp4_fused_engine.sv directly, no core/XIF).
#   make fp8             standalone FP8 fused-engine unit test (tb_fp8_unit.sv
#                        driving mxdotp_fp8_fused_engine.sv directly).
#   make m2              standalone M2XFP4 fused-engine unit test (tb_m2_unit.sv
#                        driving mxdotp_m2xfp4_fused_engine.sv directly). NOTE:
#                        the engine is not yet routed by mxdotp_xif.sv, so this
#                        unit test is currently the ONLY thing exercising it -
#                        `make mxdotp` does not reach it.
#   make units           runs every registered standalone unit test in turn.
#   make clean           removes all build outputs (system + every unit test).
#
# Adding a new standalone unit test (e.g. `make fp8`) once its RTL and
# testbench exist is exactly three lines - see "Standalone unit-engine
# testbenches" below:
#   1. add the engine's RTL source(s) to a new <name>_ENGINE_SRCS variable
#   2. add <name> to UNIT_TESTS
#   3. drop tb_<name>_unit.sv into tb/
# Nothing else in this file needs to change; the template generates the
# `make <name>` target, its build rule, and its `clean` hook automatically.
#==============================================================================

#----------------------------------------------------------------------------
# Verilator
#----------------------------------------------------------------------------

VERILATOR := $(shell which verilator5 || which verilator)
ifeq ($(VERILATOR),)
$(error Verilator not found in PATH)
endif

#----------------------------------------------------------------------------
# Directories
#----------------------------------------------------------------------------

ROOT_DIR      := ..
RTL_DIR       := $(ROOT_DIR)/rtl
TB_DIR        := .
BHV_DIR       := $(ROOT_DIR)/bhv
BUILD_DIR     := obj_dir

MXDOTP_RTL_DIR := $(RTL_DIR)/mxdotp

TOP_MODULE    := tb_mxdotp_core

MANIFEST      := $(ROOT_DIR)/cv32e40x_manifest.flist
VERILATOR_FLIST := $(BUILD_DIR)/verilator.f

#==============================================================================
# make mxdotp (default) - full system regression
#------------------------------------------------------------------------------
# Everything in this section (variable names, flags, recipes) is UNCHANGED
# from before the reorganization - only the target's name (all -> mxdotp,
# with `all` kept as a backward-compatible alias) and its position in this
# file moved.
#==============================================================================

#----------------------------------------------------------------------------
# Testbench
#----------------------------------------------------------------------------

TB_SRCS := \
	$(TB_DIR)/tb_pkg.sv \
	$(TB_DIR)/instr_rom.sv \
	$(TB_DIR)/data_mem_stub.sv \
	$(TB_DIR)/tb_mxdotp_core.sv

#----------------------------------------------------------------------------
# MXDOTP sources
#----------------------------------------------------------------------------

MXDOTP_SRCS := \
	$(MXDOTP_RTL_DIR)/mxdotp_pkg.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_decoder.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_dotp_engine.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_final_engine.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_fp4_fused_engine.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_fp8_fused_engine.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_m2xfp4_fused_engine.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_xif.sv \
	$(MXDOTP_RTL_DIR)/mxdotp_core_top.sv

#----------------------------------------------------------------------------
# C++ harness
#----------------------------------------------------------------------------

CXX_FILES := $(TB_DIR)/verilator_tb.cpp

#----------------------------------------------------------------------------
# Verilator flags
#----------------------------------------------------------------------------

VERILATOR_FLAGS := \
	-sv \
	--cc \
    --Wno-fatal \
	--exe \
	--build \
	--trace \
	--top-module $(TOP_MODULE) \
	--Mdir $(BUILD_DIR) \
	-j 8 \
	-O3 \
    --timing \
	-Wall \
	-Wno-BLKANDNBLK \
	-I$(RTL_DIR)/include \
	-I$(MXDOTP_RTL_DIR) \
	-I$(BHV_DIR) \
	-I$(BHV_DIR)/include

EXECUTABLE := $(BUILD_DIR)/V$(TOP_MODULE)

.DEFAULT_GOAL := mxdotp

#----------------------------------------------------------------------------
# Build manifest for Verilator
#----------------------------------------------------------------------------

$(VERILATOR_FLIST): $(MANIFEST)
	@mkdir -p $(BUILD_DIR)
	@echo "Generating Verilator file list..."
	@sed 's|$${DESIGN_RTL_DIR}|$(abspath $(RTL_DIR))|g' $(MANIFEST) | \
	grep -v "cv32e40x_wrapper.sv" | \
	grep -v "cv32e40x_rvfi.sv" | \
	grep -v "cv32e40x_rvfi_pkg.sv" | \
	grep -v "/sva/" > $@

#----------------------------------------------------------------------------
# Build + run
#----------------------------------------------------------------------------

.PHONY: mxdotp all
mxdotp: $(EXECUTABLE)
	@echo
	@echo "==============================="
	@echo "Running simulation..."
	@echo "==============================="
	$(EXECUTABLE)

# Backward-compatible alias - `make all` behaved exactly like this before.
all: mxdotp

$(EXECUTABLE): $(VERILATOR_FLIST) $(MXDOTP_SRCS) $(TB_SRCS) $(CXX_FILES)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		-f $(VERILATOR_FLIST) \
		$(MXDOTP_SRCS) \
		$(TB_SRCS) \
		$(CXX_FILES)

#==============================================================================
# Standalone unit-engine testbenches (make fp4, make fp8, ...)
#------------------------------------------------------------------------------
# Each unit test drives ONE arithmetic engine directly against
# rtl/mxdotp/mxdotp_pkg.sv - no core, no XIF, no CXX harness (tb_<name>_unit.sv
# is self-contained: it drives its own clock/reset and calls $finish itself,
# same pattern as tb_fp4_unit.sv). Verilator's --binary mode builds and links
# in one step, so no separate CXX_FILES entry is needed per unit test either.
#
# Each gets its own --Mdir (obj_dir_<name>) so unit builds never collide with
# each other or with the system build's obj_dir.
#
# If a unit test has a golden-model Python script (verification/, one level
# up from tb/), setting <name>_GOLDEN to that script's path makes `make
# <name>` automatically run it with --emit-vectors first: the script re-runs
# its full verification sweep and only (re)writes the vector file if every
# check passes, aborting the whole `make <name>` (nothing builds or runs) if
# not. This is optional per test - a unit test with no _GOLDEN variable set
# just skips straight to build+run, same as before.
#
# TO ADD A NEW ONE: define <name>_ENGINE_SRCS (and <name>_GOLDEN, if it has
# a golden-model script), add <name> to UNIT_TESTS, and drop
# tb_<name>_unit.sv into tb/. That's the entire integration.
#==============================================================================

VERIFICATION_DIR := $(ROOT_DIR)/verification

# --- registered unit tests ---------------------------------------------------

UNIT_TESTS := fp4 fp8 m2

fp4_ENGINE_SRCS := $(MXDOTP_RTL_DIR)/mxdotp_fp4_fused_engine.sv
fp4_GOLDEN      := $(VERIFICATION_DIR)/fp4_golden.py

fp8_ENGINE_SRCS := $(MXDOTP_RTL_DIR)/mxdotp_fp8_fused_engine.sv
fp8_GOLDEN      := $(VERIFICATION_DIR)/fp8_golden.py

m2_ENGINE_SRCS  := $(MXDOTP_RTL_DIR)/mxdotp_m2xfp4_fused_engine.sv
m2_GOLDEN       := $(VERIFICATION_DIR)/m2_golden.py

# Future targets - uncomment the ENGINE_SRCS line (and _GOLDEN, once each has
# its own golden-model script) and add the name to UNIT_TESTS once both the
# engine RTL and tb_<name>_unit.sv exist:
#
# fp4r_ENGINE_SRCS    := $(MXDOTP_RTL_DIR)/mxdotp_dotp_engine.sv
# fp4r_GOLDEN         := $(VERIFICATION_DIR)/fp4r_golden.py
# mxfinal_ENGINE_SRCS := $(MXDOTP_RTL_DIR)/mxdotp_final_engine.sv
# mxfinal_GOLDEN      := $(VERIFICATION_DIR)/mxfinal_golden.py
#
# UNIT_TESTS += fp4r mxfinal

# --- shared flags for every unit test ----------------------------------------

UNIT_VERILATOR_FLAGS := \
	-sv \
	--binary \
	--Wno-fatal \
	-O3 \
	--timing \
	-Wall \
	-Wno-UNOPTFLAT \
	-Wno-BLKANDNBLK \
	-I$(RTL_DIR)/include \
	-I$(MXDOTP_RTL_DIR)

# --- per-test target template ------------------------------------------------
# $(1) is the unit test name (e.g. "fp4"). Every variable/target it defines
# is namespaced by $(1), so instantiating it once per registered test (via
# the $(foreach)/$(eval) below) never collides across tests.
#
# $(1)-vectors is always a prerequisite of $(1): when $(1)_GOLDEN is set it
# regenerates+verifies the vector file (aborting on failure); when unset it's
# a harmless no-op. Vector regeneration doesn't affect what gets compiled
# (Verilator has no vector-file dependency; tb_$(1)_unit.sv reads it at
# SIMULATION run time via $$readmemh), so $(1)-vectors and the executable
# build are independent and Make is free to satisfy either first - the only
# thing guaranteed, which is the only thing that matters here, is that both
# complete successfully before $(1)'s own recipe (which runs the binary)
# starts.

define UNIT_TEST_template

$(1)_TOP        := tb_$(1)_unit
$(1)_BUILD_DIR  := obj_dir_$(1)
$(1)_TB_SRC     := $(TB_DIR)/tb_$(1)_unit.sv
$(1)_EXECUTABLE := $$($(1)_BUILD_DIR)/V$$($(1)_TOP)

.PHONY: $(1) $(1)-vectors
ifneq ($$($(1)_GOLDEN),)
$(1)-vectors:
	@cd $(TB_DIR) && python3 $$($(1)_GOLDEN) --emit-vectors
else
$(1)-vectors:
	@:
endif

$(1): $(1)-vectors $$($(1)_EXECUTABLE)
	@echo
	@echo "==============================="
	@echo "Running $(1) unit testbench ($$($(1)_TOP))..."
	@echo "==============================="
	@cd $(TB_DIR) && ./$$($(1)_EXECUTABLE)

# Run from $(TB_DIR) (where the Makefile itself lives) so any relative
# $$readmemh path in tb_$(1)_unit.sv (e.g. fp4_unit_vectors.hex) resolves
# against tb/ without warnings, regardless of where `make` was invoked from.
$$($(1)_EXECUTABLE): $(MXDOTP_RTL_DIR)/mxdotp_pkg.sv $$($(1)_ENGINE_SRCS) $$($(1)_TB_SRC)
	$(VERILATOR) $(UNIT_VERILATOR_FLAGS) \
		--top-module $$($(1)_TOP) \
		--Mdir $$($(1)_BUILD_DIR) \
		$(MXDOTP_RTL_DIR)/mxdotp_pkg.sv $$($(1)_ENGINE_SRCS) $$($(1)_TB_SRC)

endef

$(foreach t,$(UNIT_TESTS),$(eval $(call UNIT_TEST_template,$(t))))

# --- run every registered unit test in one shot ------------------------------

.PHONY: units
units: $(UNIT_TESTS)

#==============================================================================
# Utilities
#==============================================================================

view:
	gtkwave tb_mxdotp_core.vcd &

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(addprefix obj_dir_,$(UNIT_TESTS))
	rm -f *.vcd *.fst

.PHONY: clean view