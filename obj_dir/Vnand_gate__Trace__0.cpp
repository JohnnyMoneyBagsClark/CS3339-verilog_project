// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnand_gate__Syms.h"


void Vnand_gate___024root__trace_chg_0_sub_0(Vnand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnand_gate___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_gate___024root__trace_chg_0\n"); );
    // Init
    Vnand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnand_gate___024root*>(voidSelf);
    Vnand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnand_gate___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnand_gate___024root__trace_chg_0_sub_0(Vnand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_gate___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.a));
    bufp->chgBit(oldp+1,(vlSelfRef.b));
    bufp->chgBit(oldp+2,(vlSelfRef.y));
}

void Vnand_gate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand_gate___024root__trace_cleanup\n"); );
    // Init
    Vnand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnand_gate___024root*>(voidSelf);
    Vnand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
