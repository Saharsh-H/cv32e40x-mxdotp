// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mxdotp_core.h for the primary calling header

#ifndef VERILATED_VTB_MXDOTP_CORE_IF_XIF__X3_XF0_XGZ1_H_
#define VERILATED_VTB_MXDOTP_CORE_IF_XIF__X3_XF0_XGZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mxdotp_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mxdotp_core_if_xif__X3_XF0_XGz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__compressed_ready;
    CData/*0:0*/ issue_valid;
    CData/*6:0*/ issue_resp;
    CData/*0:0*/ commit_valid;
    CData/*4:0*/ commit;
    CData/*0:0*/ result_valid;
    CData/*0:0*/ result_ready;
    QData/*32:0*/ __PVT__compressed_resp;
    VlWide<5>/*143:0*/ issue_req;
    QData/*57:0*/ result;

    // INTERNAL VARIABLES
    Vtb_mxdotp_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mxdotp_core_if_xif__X3_XF0_XGz1(Vtb_mxdotp_core__Syms* symsp, const char* v__name);
    ~Vtb_mxdotp_core_if_xif__X3_XF0_XGz1();
    VL_UNCOPYABLE(Vtb_mxdotp_core_if_xif__X3_XF0_XGz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_mxdotp_core_if_xif__X3_XF0_XGz1* obj);

#endif  // guard
