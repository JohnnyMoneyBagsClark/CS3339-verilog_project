// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsubtraction__Syms.h"


void Vsubtraction___024root__trace_chg_0_sub_0(Vsubtraction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsubtraction___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtraction___024root__trace_chg_0\n"); );
    // Init
    Vsubtraction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubtraction___024root*>(voidSelf);
    Vsubtraction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsubtraction___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsubtraction___024root__trace_chg_0_sub_0(Vsubtraction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsubtraction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtraction___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.b),4);
    bufp->chgBit(oldp+2,(vlSelfRef.carry_in));
    bufp->chgCData(oldp+3,(vlSelfRef.difference),4);
    bufp->chgBit(oldp+4,(vlSelfRef.carry_out));
}

void Vsubtraction___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtraction___024root__trace_cleanup\n"); );
    // Init
    Vsubtraction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsubtraction___024root*>(voidSelf);
    Vsubtraction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
