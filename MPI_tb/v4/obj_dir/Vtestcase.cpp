// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestcase.h"
#include "Vtestcase__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtestcase::Vtestcase(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestcase__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestcase::Vtestcase(const char* _vcname__)
    : Vtestcase(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestcase::~Vtestcase() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestcase___024root___eval_debug_assertions(Vtestcase___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestcase___024root___eval_static(Vtestcase___024root* vlSelf);
void Vtestcase___024root___eval_initial(Vtestcase___024root* vlSelf);
void Vtestcase___024root___eval_settle(Vtestcase___024root* vlSelf);
void Vtestcase___024root___eval(Vtestcase___024root* vlSelf);

void Vtestcase::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestcase::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestcase___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestcase___024root___eval_static(&(vlSymsp->TOP));
        Vtestcase___024root___eval_initial(&(vlSymsp->TOP));
        Vtestcase___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestcase___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestcase::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestcase::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestcase::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestcase___024root___eval_final(Vtestcase___024root* vlSelf);

VL_ATTR_COLD void Vtestcase::final() {
    Vtestcase___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestcase::hierName() const { return vlSymsp->name(); }
const char* Vtestcase::modelName() const { return "Vtestcase"; }
unsigned Vtestcase::threads() const { return 1; }
void Vtestcase::prepareClone() const { contextp()->prepareClone(); }
void Vtestcase::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtestcase::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtestcase___024root__trace_init_top(Vtestcase___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtestcase___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestcase___024root*>(voidSelf);
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtestcase___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtestcase___024root__trace_register(Vtestcase___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtestcase::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestcase::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtestcase___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
