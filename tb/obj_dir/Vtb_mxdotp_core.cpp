// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mxdotp_core__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_mxdotp_core::Vtb_mxdotp_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mxdotp_core__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__tb_mxdotp_core__DOT__dut__DOT__xif{vlSymsp->TOP.__PVT__tb_mxdotp_core__DOT__dut__DOT__xif}
    , __PVT__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if{vlSymsp->TOP.__PVT__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mxdotp_core::Vtb_mxdotp_core(const char* _vcname__)
    : Vtb_mxdotp_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mxdotp_core::~Vtb_mxdotp_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mxdotp_core___024root___eval_debug_assertions(Vtb_mxdotp_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mxdotp_core___024root___eval_static(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___eval_initial(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___eval_settle(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___eval(Vtb_mxdotp_core___024root* vlSelf);

void Vtb_mxdotp_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mxdotp_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mxdotp_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mxdotp_core___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mxdotp_core___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mxdotp_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mxdotp_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_mxdotp_core::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_mxdotp_core::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_mxdotp_core::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_mxdotp_core::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mxdotp_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mxdotp_core___024root___eval_final(Vtb_mxdotp_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_mxdotp_core::final() {
    Vtb_mxdotp_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mxdotp_core::hierName() const { return vlSymsp->name(); }
const char* Vtb_mxdotp_core::modelName() const { return "Vtb_mxdotp_core"; }
unsigned Vtb_mxdotp_core::threads() const { return 1; }
void Vtb_mxdotp_core::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mxdotp_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_mxdotp_core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_mxdotp_core___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_mxdotp_core___024root__trace_init_top(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_mxdotp_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mxdotp_core___024root*>(voidSelf);
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_mxdotp_core___024root__trace_decl_types(tracep);
    Vtb_mxdotp_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_register(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_mxdotp_core::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_mxdotp_core::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_mxdotp_core___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
