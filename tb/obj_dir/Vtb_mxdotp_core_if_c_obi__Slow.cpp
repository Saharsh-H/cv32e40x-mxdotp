// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core__Syms.h"
#include "Vtb_mxdotp_core_if_c_obi.h"

void Vtb_mxdotp_core_if_c_obi___ctor_var_reset(Vtb_mxdotp_core_if_c_obi* vlSelf);

Vtb_mxdotp_core_if_c_obi::Vtb_mxdotp_core_if_c_obi(Vtb_mxdotp_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mxdotp_core_if_c_obi___ctor_var_reset(this);
}

void Vtb_mxdotp_core_if_c_obi::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mxdotp_core_if_c_obi::~Vtb_mxdotp_core_if_c_obi() {
}
