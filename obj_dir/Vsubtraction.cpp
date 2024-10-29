// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsubtraction__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsubtraction::Vsubtraction(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsubtraction__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , carry_in{vlSymsp->TOP.carry_in}
    , difference{vlSymsp->TOP.difference}
    , carry_out{vlSymsp->TOP.carry_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsubtraction::Vsubtraction(const char* _vcname__)
    : Vsubtraction(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsubtraction::~Vsubtraction() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsubtraction___024root___eval_debug_assertions(Vsubtraction___024root* vlSelf);
#endif  // VL_DEBUG
void Vsubtraction___024root___eval_static(Vsubtraction___024root* vlSelf);
void Vsubtraction___024root___eval_initial(Vsubtraction___024root* vlSelf);
void Vsubtraction___024root___eval_settle(Vsubtraction___024root* vlSelf);
void Vsubtraction___024root___eval(Vsubtraction___024root* vlSelf);

void Vsubtraction::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsubtraction::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsubtraction___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsubtraction___024root___eval_static(&(vlSymsp->TOP));
        Vsubtraction___024root___eval_initial(&(vlSymsp->TOP));
        Vsubtraction___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsubtraction___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsubtraction::eventsPending() { return false; }

uint64_t Vsubtraction::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsubtraction::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsubtraction___024root___eval_final(Vsubtraction___024root* vlSelf);

VL_ATTR_COLD void Vsubtraction::final() {
    Vsubtraction___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsubtraction::hierName() const { return vlSymsp->name(); }
const char* Vsubtraction::modelName() const { return "Vsubtraction"; }
unsigned Vsubtraction::threads() const { return 1; }
void Vsubtraction::prepareClone() const { contextp()->prepareClone(); }
void Vsubtraction::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsubtraction::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsubtraction___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsubtraction___024root__trace_init_top(Vsubtraction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsubtraction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubtraction___024root*>(voidSelf);
    Vsubtraction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsubtraction___024root__trace_decl_types(tracep);
    Vsubtraction___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vsubtraction___024root__trace_register(Vsubtraction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsubtraction::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsubtraction::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsubtraction___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
