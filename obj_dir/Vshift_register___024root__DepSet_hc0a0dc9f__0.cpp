// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register.h for the primary calling header

#include "Vshift_register__pch.h"
#include "Vshift_register__Syms.h"
#include "Vshift_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register___024root___dump_triggers__act(Vshift_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_register___024root___eval_triggers__act(Vshift_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                       | ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshift_register___024root___dump_triggers__act(vlSelf);
    }
#endif
}
