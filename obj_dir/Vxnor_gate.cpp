// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vxnor_gate__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vxnor_gate::Vxnor_gate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vxnor_gate__Syms(contextp(), _vcname__, this)}
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

Vxnor_gate::Vxnor_gate(const char* _vcname__)
    : Vxnor_gate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vxnor_gate::~Vxnor_gate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vxnor_gate___024root___eval_debug_assertions(Vxnor_gate___024root* vlSelf);
#endif  // VL_DEBUG
void Vxnor_gate___024root___eval_static(Vxnor_gate___024root* vlSelf);
void Vxnor_gate___024root___eval_initial(Vxnor_gate___024root* vlSelf);
void Vxnor_gate___024root___eval_settle(Vxnor_gate___024root* vlSelf);
void Vxnor_gate___024root___eval(Vxnor_gate___024root* vlSelf);

void Vxnor_gate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxnor_gate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vxnor_gate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vxnor_gate___024root___eval_static(&(vlSymsp->TOP));
        Vxnor_gate___024root___eval_initial(&(vlSymsp->TOP));
        Vxnor_gate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vxnor_gate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vxnor_gate::eventsPending() { return false; }

uint64_t Vxnor_gate::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vxnor_gate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vxnor_gate___024root___eval_final(Vxnor_gate___024root* vlSelf);

VL_ATTR_COLD void Vxnor_gate::final() {
    Vxnor_gate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vxnor_gate::hierName() const { return vlSymsp->name(); }
const char* Vxnor_gate::modelName() const { return "Vxnor_gate"; }
unsigned Vxnor_gate::threads() const { return 1; }
void Vxnor_gate::prepareClone() const { contextp()->prepareClone(); }
void Vxnor_gate::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vxnor_gate::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vxnor_gate___024root__trace_decl_types(VerilatedVcd* tracep);

void Vxnor_gate___024root__trace_init_top(Vxnor_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxnor_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vxnor_gate___024root*>(voidSelf);
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vxnor_gate___024root__trace_decl_types(tracep);
    Vxnor_gate___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vxnor_gate___024root__trace_register(Vxnor_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vxnor_gate::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vxnor_gate::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vxnor_gate___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
