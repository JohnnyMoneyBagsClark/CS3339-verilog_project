// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxnor_gate.h for the primary calling header

#include "Vxnor_gate__pch.h"
#include "Vxnor_gate___024root.h"

VL_ATTR_COLD void Vxnor_gate___024root___eval_static(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vxnor_gate___024root___eval_initial(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vxnor_gate___024root___eval_final(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate___024root___dump_triggers__stl(Vxnor_gate___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vxnor_gate___024root___eval_phase__stl(Vxnor_gate___024root* vlSelf);

VL_ATTR_COLD void Vxnor_gate___024root___eval_settle(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vxnor_gate___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("circuits/xnor_gate.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vxnor_gate___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate___024root___dump_triggers__stl(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vxnor_gate___024root___ico_sequent__TOP__0(Vxnor_gate___024root* vlSelf);

VL_ATTR_COLD void Vxnor_gate___024root___eval_stl(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vxnor_gate___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vxnor_gate___024root___eval_triggers__stl(Vxnor_gate___024root* vlSelf);

VL_ATTR_COLD bool Vxnor_gate___024root___eval_phase__stl(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vxnor_gate___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vxnor_gate___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate___024root___dump_triggers__ico(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate___024root___dump_triggers__act(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate___024root___dump_triggers__nba(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vxnor_gate___024root___ctor_var_reset(Vxnor_gate___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vxnor_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->y = VL_RAND_RESET_I(4);
}
