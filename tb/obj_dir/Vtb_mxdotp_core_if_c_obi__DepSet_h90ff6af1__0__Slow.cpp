// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core_if_c_obi.h"

VL_ATTR_COLD void Vtb_mxdotp_core_if_c_obi___ctor_var_reset(Vtb_mxdotp_core_if_c_obi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_mxdotp_core_if_c_obi___ctor_var_reset\n"); );
    // Body
    vlSelf->s_req = VL_RAND_RESET_I(1);
    vlSelf->req_payload = VL_RAND_RESET_Q(38);
}
