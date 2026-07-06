// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core_if_c_obi.h"

std::string VL_TO_STRING(const Vtb_mxdotp_core_if_c_obi* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_mxdotp_core_if_c_obi::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
