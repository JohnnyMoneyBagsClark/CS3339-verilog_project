// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vor_gate__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vor_gate::Vor_gate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vor_gate__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vor_gate::Vor_gate(const char* _vcname__)
    : Vor_gate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vor_gate::~Vor_gate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vor_gate___024root___eval_debug_assertions(Vor_gate___024root* vlSelf);
#endif  // VL_DEBUG
void Vor_gate___024root___eval_static(Vor_gate___024root* vlSelf);
void Vor_gate___024root___eval_initial(Vor_gate___024root* vlSelf);
void Vor_gate___024root___eval_settle(Vor_gate___024root* vlSelf);
void Vor_gate___024root___eval(Vor_gate___024root* vlSelf);

void Vor_gate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vor_gate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vor_gate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vor_gate___024root___eval_static(&(vlSymsp->TOP));
        Vor_gate___024root___eval_initial(&(vlSymsp->TOP));
        Vor_gate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vor_gate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vor_gate::eventsPending() { return false; }

uint64_t Vor_gate::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vor_gate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vor_gate___024root___eval_final(Vor_gate___024root* vlSelf);

VL_ATTR_COLD void Vor_gate::final() {
    Vor_gate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vor_gate::hierName() const { return vlSymsp->name(); }
const char* Vor_gate::modelName() const { return "Vor_gate"; }
unsigned Vor_gate::threads() const { return 1; }
void Vor_gate::prepareClone() const { contextp()->prepareClone(); }
void Vor_gate::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vor_gate::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vor_gate___024root__trace_decl_types(VerilatedVcd* tracep);

void Vor_gate___024root__trace_init_top(Vor_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vor_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vor_gate___024root*>(voidSelf);
    Vor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vor_gate___024root__trace_decl_types(tracep);
    Vor_gate___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vor_gate___024root__trace_register(Vor_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vor_gate::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vor_gate::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vor_gate___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
