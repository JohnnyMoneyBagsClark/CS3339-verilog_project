// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplication.h for the primary calling header

#include "Vmultiplication__pch.h"
#include "Vmultiplication__Syms.h"
#include "Vmultiplication___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplication___024root___dump_triggers__ico(Vmultiplication___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplication___024root___eval_triggers__ico(Vmultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplication___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplication___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplication___024root___dump_triggers__act(Vmultiplication___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplication___024root___eval_triggers__act(Vmultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplication___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplication___024root___dump_triggers__act(vlSelf);
    }
#endif
}
