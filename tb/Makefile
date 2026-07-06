#==============================================================================
# File    : Makefile
# Project : MXDOTP XIF Coprocessor - Verilator Build
#------------------------------------------------------------------------------
# Usage:
#   make           # Compile and run
#   make clean     # Clean build artifacts
#   make view-vcd  # Open waveform in GTKWave (if installed)
#
# Requirements:
#   - Verilator 5.x (or 4.x)
#   - SystemVerilog RTL files (cv32e40x_*.sv, if_*.sv, mxdotp_*.sv, tb_*.sv)
#   - C++ compiler (g++ or clang++)
#==============================================================================

# Verilator command - try verilator5 first, fall back to verilator
VERILATOR := $(shell which verilator5 || which verilator)
ifeq ($(VERILATOR),)
    $(error verilator not found in PATH. Install Verilator 5.x)
endif

# Directories
RTL_DIR       := rtl
TB_DIR        := tb
BUILD_DIR     := obj_dir
SRC_DIR       := .

# Top module
TOP_MODULE    := tb_mxdotp_core

# Source files - adjust paths to match your project layout
CV32E40X_SRCS := $(wildcard $(RTL_DIR)/cv32e40x*.sv)
XV32_SRCS     := $(wildcard $(RTL_DIR)/if_*.sv)
MXDOTP_SRCS   := $(wildcard $(RTL_DIR)/mxdotp*.sv)
TB_SRCS       := $(TB_DIR)/tb_pkg.sv \
                 $(TB_DIR)/instr_rom.sv \
                 $(TB_DIR)/data_mem_stub.sv \
                 $(TB_DIR)/tb_mxdotp_core.sv

ALL_SRCS      := $(CV32E40X_SRCS) $(XV32_SRCS) $(MXDOTP_SRCS) $(TB_SRCS)

# Verilator flags
VERILATOR_FLAGS := -Wno-UNOPTFLAT \
                   --top-module $(TOP_MODULE) \
                   --trace \
                   --trace-fst \
                   --cc \
                   --exe \
                   -O3 \
                   --build \
                   -j $(shell nproc)

# C++ files
CXX_FILES     := $(SRC_DIR)/verilator_tb.cpp

# Final executable
EXECUTABLE    := $(BUILD_DIR)/V$(TOP_MODULE)

# Default target
all: $(EXECUTABLE)
	@echo "Build complete. Running simulation..."
	$(EXECUTABLE)

# Verilator compilation
$(EXECUTABLE): $(ALL_SRCS) $(CXX_FILES)
	@mkdir -p $(BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--Mdir $(BUILD_DIR) \
		$(ALL_SRCS) \
		$(CXX_FILES)

# View waveform
view-vcd: tb_mxdotp_core.vcd
	gtkwave tb_mxdotp_core.vcd &

# Clean
clean:
	rm -rf $(BUILD_DIR) tb_mxdotp_core.vcd *.o

.PHONY: all clean view-vcd