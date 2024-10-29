// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdivision__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdivision::Vdivision(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdivision__Syms(contextp(), _vcname__, this)}
    , numerator{vlSymsp->TOP.numerator}
    , denominator{vlSymsp->TOP.denominator}
    , quotient{vlSymsp->TOP.quotient}
    , remainder{vlSymsp->TOP.remainder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdivision::Vdivision(const char* _vcname__)
    : Vdivision(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdivision::~Vdivision() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdivision___024root___eval_debug_assertions(Vdivision___024root* vlSelf);
#endif  // VL_DEBUG
void Vdivision___024root___eval_static(Vdivision___024root* vlSelf);
void Vdivision___024root___eval_initial(Vdivision___024root* vlSelf);
void Vdivision___024root___eval_settle(Vdivision___024root* vlSelf);
void Vdivision___024root___eval(Vdivision___024root* vlSelf);

void Vdivision::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdivision::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdivision___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdivision___024root___eval_static(&(vlSymsp->TOP));
        Vdivision___024root___eval_initial(&(vlSymsp->TOP));
        Vdivision___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdivision___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdivision::eventsPending() { return false; }

uint64_t Vdivision::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdivision::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdivision___024root___eval_final(Vdivision___024root* vlSelf);

VL_ATTR_COLD void Vdivision::final() {
    Vdivision___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdivision::hierName() const { return vlSymsp->name(); }
const char* Vdivision::modelName() const { return "Vdivision"; }
unsigned Vdivision::threads() const { return 1; }
void Vdivision::prepareClone() const { contextp()->prepareClone(); }
void Vdivision::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdivision::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdivision___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdivision___024root__trace_init_top(Vdivision___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdivision___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivision___024root*>(voidSelf);
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdivision___024root__trace_decl_types(tracep);
    Vdivision___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vdivision___024root__trace_register(Vdivision___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdivision::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdivision::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdivision___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
