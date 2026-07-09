#==============================================================================
# File    : Makefile
# Project : MXDOTP XIF Coprocessor - Verilator Build
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

TOP_MODULE    := tb_mxdotp_core

MANIFEST      := $(ROOT_DIR)/cv32e40x_manifest.flist
VERILATOR_FLIST := $(BUILD_DIR)/verilator.f

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
	$(RTL_DIR)/mxdotp/mxdotp_pkg.sv \
	$(RTL_DIR)/mxdotp/mxdotp_decoder.sv \
	$(RTL_DIR)/mxdotp/mxdotp_dotp_engine.sv \
	$(RTL_DIR)/mxdotp/mxdotp_final_engine.sv \
	$(RTL_DIR)/mxdotp/mxdotp_fused_engine.sv \
	$(RTL_DIR)/mxdotp/mxdotp_xif.sv \
	$(RTL_DIR)/mxdotp/mxdotp_core_top.sv

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
	-I$(RTL_DIR)/mxdotp \
	-I$(BHV_DIR) \
	-I$(BHV_DIR)/include

EXECUTABLE := $(BUILD_DIR)/V$(TOP_MODULE)

.DEFAULT_GOAL := all

#==============================================================================
# Build manifest for Verilator
#==============================================================================

$(VERILATOR_FLIST): $(MANIFEST)
	@mkdir -p $(BUILD_DIR)
	@echo "Generating Verilator file list..."
	@sed 's|$${DESIGN_RTL_DIR}|$(abspath $(RTL_DIR))|g' $(MANIFEST) | \
	grep -v "cv32e40x_wrapper.sv" | \
	grep -v "cv32e40x_rvfi.sv" | \
	grep -v "cv32e40x_rvfi_pkg.sv" | \
	grep -v "/sva/" > $@
#==============================================================================
# Build
#==============================================================================

all: $(EXECUTABLE)
	@echo
	@echo "==============================="
	@echo "Running simulation..."
	@echo "==============================="
	$(EXECUTABLE)

$(EXECUTABLE): $(VERILATOR_FLIST) $(MXDOTP_SRCS) $(TB_SRCS) $(CXX_FILES)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		-f $(VERILATOR_FLIST) \
		$(MXDOTP_SRCS) \
		$(TB_SRCS) \
		$(CXX_FILES)

#==============================================================================
# Utilities
#==============================================================================

view:
	gtkwave tb_mxdotp_core.vcd &

clean:
	rm -rf $(BUILD_DIR)
	rm -f *.vcd *.fst

.PHONY: all clean view