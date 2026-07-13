#==============================================================================
# File    : Makefile
# Project : MXDOTP XIF Coprocessor - Verilator Build
#------------------------------------------------------------------------------
# Targets:
#   make / make mxdotp   full system regression (tb_mxdotp_core) - UNCHANGED
#                        workflow from before this reorganization.
#   make fp4             standalone FP4 fused-engine unit test (tb_fp4_unit.sv
#                        driving mxdotp_fused_engine.sv directly, no core/XIF).
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
	$(MXDOTP_RTL_DIR)/mxdotp_fused_engine.sv \
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
	-Wno-UNOPTFLAT \
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
# The golden-model Python scripts that generate/check each unit's vectors
# live in verification/ (one level up from tb/) - this Makefile does not
# invoke them; regenerating vectors is a separate, explicit step for now.
#
# TO ADD A NEW ONE: define <name>_ENGINE_SRCS, add <name> to UNIT_TESTS,
# and drop tb_<name>_unit.sv into tb/. That's the entire integration.
#==============================================================================

# --- registered unit tests ---------------------------------------------------

UNIT_TESTS := fp4

fp4_ENGINE_SRCS := $(MXDOTP_RTL_DIR)/mxdotp_fused_engine.sv

# Future targets - uncomment the ENGINE_SRCS line and add the name to
# UNIT_TESTS once both the engine RTL and tb_<name>_unit.sv exist:
#
# fp8_ENGINE_SRCS     := $(MXDOTP_RTL_DIR)/mxdotp_fp8_fused_engine.sv
# fp4r_ENGINE_SRCS    := $(MXDOTP_RTL_DIR)/mxdotp_dotp_engine.sv
# mxfinal_ENGINE_SRCS := $(MXDOTP_RTL_DIR)/mxdotp_final_engine.sv
#
# UNIT_TESTS += fp8 fp4r mxfinal

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

define UNIT_TEST_template

$(1)_TOP        := tb_$(1)_unit
$(1)_BUILD_DIR  := obj_dir_$(1)
$(1)_TB_SRC     := $(TB_DIR)/tb_$(1)_unit.sv
$(1)_EXECUTABLE := $$($(1)_BUILD_DIR)/V$$($(1)_TOP)

.PHONY: $(1)
$(1): $$($(1)_EXECUTABLE)
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
