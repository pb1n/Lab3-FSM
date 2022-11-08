// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsfr.h for the primary calling header

#ifndef VERILATED_VLSFR___024ROOT_H_
#define VERILATED_VLSFR___024ROOT_H_  // guard

#include "verilated.h"

class Vlsfr__Syms;

class Vlsfr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,4,1);
    CData/*3:0*/ lfsr4__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vlsfr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsfr___024root(Vlsfr__Syms* symsp, const char* name);
    ~Vlsfr___024root();
    VL_UNCOPYABLE(Vlsfr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
