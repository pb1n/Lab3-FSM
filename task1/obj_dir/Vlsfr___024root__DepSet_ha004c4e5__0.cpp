// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr.h for the primary calling header

#include "verilated.h"

#include "Vlsfr___024root.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vlsfr__ConstPool__TABLE_hf2ced9c4_0;

VL_INLINE_OPT void Vlsfr___024root___sequent__TOP__0(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->lfsr4__DOT__sreg) 
                     << 2U) | (((IData)(vlSelf->en) 
                                << 1U) | (IData)(vlSelf->rst)));
    vlSelf->lfsr4__DOT__sreg = Vlsfr__ConstPool__TABLE_hf2ced9c4_0
        [__Vtableidx1];
    vlSelf->data_out = vlSelf->lfsr4__DOT__sreg;
}

void Vlsfr___024root___eval(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlsfr___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlsfr___024root___eval_debug_assertions(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
