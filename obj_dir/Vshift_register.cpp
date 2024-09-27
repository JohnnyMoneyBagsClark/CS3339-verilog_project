// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_register__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshift_register::Vshift_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshift_register__Syms(contextp(), _vcname__, this)}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vshift_register::Vshift_register(const char* _vcname__)
    : Vshift_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshift_register::~Vshift_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshift_register___024root___eval_debug_assertions(Vshift_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift_register___024root___eval_static(Vshift_register___024root* vlSelf);
void Vshift_register___024root___eval_initial(Vshift_register___024root* vlSelf);
void Vshift_register___024root___eval_settle(Vshift_register___024root* vlSelf);
void Vshift_register___024root___eval(Vshift_register___024root* vlSelf);

void Vshift_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshift_register___024root___eval_static(&(vlSymsp->TOP));
        Vshift_register___024root___eval_initial(&(vlSymsp->TOP));
        Vshift_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshift_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshift_register::eventsPending() { return false; }

uint64_t Vshift_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshift_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshift_register___024root___eval_final(Vshift_register___024root* vlSelf);

VL_ATTR_COLD void Vshift_register::final() {
    Vshift_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshift_register::hierName() const { return vlSymsp->name(); }
const char* Vshift_register::modelName() const { return "Vshift_register"; }
unsigned Vshift_register::threads() const { return 1; }
void Vshift_register::prepareClone() const { contextp()->prepareClone(); }
void Vshift_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vshift_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vshift_register___024root__trace_decl_types(VerilatedVcd* tracep);

void Vshift_register___024root__trace_init_top(Vshift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register___024root*>(voidSelf);
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vshift_register___024root__trace_decl_types(tracep);
    Vshift_register___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vshift_register___024root__trace_register(Vshift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshift_register::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshift_register::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshift_register___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
