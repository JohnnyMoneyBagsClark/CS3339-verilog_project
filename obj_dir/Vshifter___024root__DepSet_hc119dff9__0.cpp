// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "Vshifter__pch.h"
#include "Vshifter__Syms.h"
#include "Vshifter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__ico(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vshifter___024root___eval_triggers__ico(Vshifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshifter___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshifter___024root___dump_triggers__act(Vshifter___024root* vlSelf);
#endif  // VL_DEBUG

void Vshifter___024root___eval_triggers__act(Vshifter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshifter___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshifter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
