# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_mxdotp_core.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_mxdotp_core \
	Vtb_mxdotp_core___024root__DepSet_h23914da0__0 \
	Vtb_mxdotp_core___024root__DepSet_h23914da0__1 \
	Vtb_mxdotp_core___024root__DepSet_h588e887b__0 \
	Vtb_mxdotp_core_if_c_obi__DepSet_h90ff6af1__0 \
	Vtb_mxdotp_core_if_xif__X3_XF0_XGz1__DepSet_haf6d6002__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_mxdotp_core__ConstPool_0 \
	Vtb_mxdotp_core___024root__Slow \
	Vtb_mxdotp_core___024root__DepSet_h23914da0__0__Slow \
	Vtb_mxdotp_core___024root__DepSet_h23914da0__1__Slow \
	Vtb_mxdotp_core___024root__DepSet_h588e887b__0__Slow \
	Vtb_mxdotp_core_if_c_obi__Slow \
	Vtb_mxdotp_core_if_c_obi__DepSet_h90ff6af1__0__Slow \
	Vtb_mxdotp_core_if_xif__X3_XF0_XGz1__Slow \
	Vtb_mxdotp_core_if_xif__X3_XF0_XGz1__DepSet_haf6d6002__0__Slow \
	Vtb_mxdotp_core___024unit__Slow \
	Vtb_mxdotp_core___024unit__DepSet_heafc738d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_mxdotp_core__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_mxdotp_core__Syms \
	Vtb_mxdotp_core__Trace__0__Slow \
	Vtb_mxdotp_core__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
