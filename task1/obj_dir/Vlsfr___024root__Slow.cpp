// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr.h for the primary calling header

#include "verilated.h"

#include "Vlsfr__Syms.h"
#include "Vlsfr___024root.h"

void Vlsfr___024root___ctor_var_reset(Vlsfr___024root* vlSelf);

Vlsfr___024root::Vlsfr___024root(Vlsfr__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlsfr___024root___ctor_var_reset(this);
}

void Vlsfr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlsfr___024root::~Vlsfr___024root() {
}
