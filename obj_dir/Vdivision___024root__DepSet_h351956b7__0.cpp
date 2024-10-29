// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivision.h for the primary calling header

#include "Vdivision__pch.h"
#include "Vdivision___024root.h"

void Vdivision___024root___ico_sequent__TOP__0(Vdivision___024root* vlSelf);

void Vdivision___024root___eval_ico(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdivision___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdivision___024root___ico_sequent__TOP__0(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.denominator))) {
        vlSelfRef.quotient = (0xfU & VL_DIV_III(4, (IData)(vlSelfRef.numerator), (IData)(vlSelfRef.denominator)));
        vlSelfRef.remainder = (0xfU & VL_MODDIV_III(4, (IData)(vlSelfRef.numerator), (IData)(vlSelfRef.denominator)));
    } else {
        vlSelfRef.quotient = 0U;
        vlSelfRef.remainder = 0U;
    }
}

void Vdivision___024root___eval_triggers__ico(Vdivision___024root* vlSelf);

bool Vdivision___024root___eval_phase__ico(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdivision___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdivision___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdivision___024root___eval_act(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdivision___024root___eval_nba(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdivision___024root___eval_triggers__act(Vdivision___024root* vlSelf);

bool Vdivision___024root___eval_phase__act(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdivision___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdivision___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdivision___024root___eval_phase__nba(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdivision___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivision___024root___dump_triggers__ico(Vdivision___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivision___024root___dump_triggers__nba(Vdivision___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivision___024root___dump_triggers__act(Vdivision___024root* vlSelf);
#endif  // VL_DEBUG

void Vdivision___024root___eval(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vdivision___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("circuits/division.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdivision___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdivision___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("circuits/division.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdivision___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("circuits/division.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdivision___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdivision___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdivision___024root___eval_debug_assertions(Vdivision___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdivision__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivision___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.numerator & 0xf0U))) {
        Verilated::overWidthError("numerator");}
    if (VL_UNLIKELY((vlSelfRef.denominator & 0xf0U))) {
        Verilated::overWidthError("denominator");}
}
#endif  // VL_DEBUG
