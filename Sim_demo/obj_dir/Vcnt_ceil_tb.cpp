// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcnt_ceil_tb.h"
#include "Vcnt_ceil_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcnt_ceil_tb::Vcnt_ceil_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcnt_ceil_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcnt_ceil_tb::Vcnt_ceil_tb(const char* _vcname__)
    : Vcnt_ceil_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcnt_ceil_tb::~Vcnt_ceil_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcnt_ceil_tb___024root___eval_debug_assertions(Vcnt_ceil_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcnt_ceil_tb___024root___eval_static(Vcnt_ceil_tb___024root* vlSelf);
void Vcnt_ceil_tb___024root___eval_initial(Vcnt_ceil_tb___024root* vlSelf);
void Vcnt_ceil_tb___024root___eval_settle(Vcnt_ceil_tb___024root* vlSelf);
void Vcnt_ceil_tb___024root___eval(Vcnt_ceil_tb___024root* vlSelf);

void Vcnt_ceil_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcnt_ceil_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcnt_ceil_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcnt_ceil_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcnt_ceil_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcnt_ceil_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcnt_ceil_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcnt_ceil_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcnt_ceil_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcnt_ceil_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcnt_ceil_tb___024root___eval_final(Vcnt_ceil_tb___024root* vlSelf);

VL_ATTR_COLD void Vcnt_ceil_tb::final() {
    Vcnt_ceil_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcnt_ceil_tb::hierName() const { return vlSymsp->name(); }
const char* Vcnt_ceil_tb::modelName() const { return "Vcnt_ceil_tb"; }
unsigned Vcnt_ceil_tb::threads() const { return 1; }
void Vcnt_ceil_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcnt_ceil_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcnt_ceil_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcnt_ceil_tb___024root__trace_init_top(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcnt_ceil_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnt_ceil_tb___024root*>(voidSelf);
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcnt_ceil_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_register(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcnt_ceil_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcnt_ceil_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcnt_ceil_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
