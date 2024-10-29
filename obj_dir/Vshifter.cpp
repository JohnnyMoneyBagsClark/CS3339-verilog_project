// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshifter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshifter::Vshifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshifter__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , shift{vlSymsp->TOP.shift}
    , left_shift{vlSymsp->TOP.left_shift}
    , right_shift{vlSymsp->TOP.right_shift}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vshifter::Vshifter(const char* _vcname__)
    : Vshifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshifter::~Vshifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshifter___024root___eval_debug_assertions(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG
void Vshifter___024root___eval_static(Vshifter___024root* vlSelf);
void Vshifter___024root___eval_initial(Vshifter___024root* vlSelf);
void Vshifter___024root___eval_settle(Vshifter___024root* vlSelf);
void Vshifter___024root___eval(Vshifter___024root* vlSelf);

void Vshifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshifter___024root___eval_static(&(vlSymsp->TOP));
        Vshifter___024root___eval_initial(&(vlSymsp->TOP));
        Vshifter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshifter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshifter::eventsPending() { return false; }

uint64_t Vshifter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshifter___024root___eval_final(Vshifter___024root* vlSelf);

VL_ATTR_COLD void Vshifter::final() {
    Vshifter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshifter::hierName() const { return vlSymsp->name(); }
const char* Vshifter::modelName() const { return "Vshifter"; }
unsigned Vshifter::threads() const { return 1; }
void Vshifter::prepareClone() const { contextp()->prepareClone(); }
void Vshifter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vshifter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vshifter___024root__trace_decl_types(VerilatedVcd* tracep);

void Vshifter___024root__trace_init_top(Vshifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshifter___024root*>(voidSelf);
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vshifter___024root__trace_decl_types(tracep);
    Vshifter___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vshifter___024root__trace_register(Vshifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshifter::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshifter::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshifter___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
