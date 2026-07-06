// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core.h"
#include "Vtb_mxdotp_core___024root.h"
#include "Vtb_mxdotp_core_if_c_obi.h"
#include "Vtb_mxdotp_core_if_xif__X3_XF0_XGz1.h"
#include "Vtb_mxdotp_core___024unit.h"

// FUNCTIONS
Vtb_mxdotp_core__Syms::~Vtb_mxdotp_core__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_mxdotp_core__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_mxdotp_core__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_mxdotp_core__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_mxdotp_core__Syms::Vtb_mxdotp_core__Syms(VerilatedContext* contextp, const char* namep, Vtb_mxdotp_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if{this, Verilated::catName(namep, "tb_mxdotp_core.dut.core_i.m_c_obi_instr_if")}
    , TOP__tb_mxdotp_core__DOT__dut__DOT__xif{this, Verilated::catName(namep, "tb_mxdotp_core.dut.xif")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if = &TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if;
    TOP.__PVT__tb_mxdotp_core__DOT__dut__DOT__xif = &TOP__tb_mxdotp_core__DOT__dut__DOT__xif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.__Vconfigure(true);
    TOP__tb_mxdotp_core__DOT__dut__DOT__xif.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_mxdotp_core.configure(this, name(), "tb_mxdotp_core", "tb_mxdotp_core", -9, VerilatedScope::SCOPE_OTHER);
}
