// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfp_wrapper.h for the primary calling header

#ifndef _VFP_WRAPPER___024UNIT_H_
#define _VFP_WRAPPER___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vfp_wrapper__Syms;
class Vfp_wrapper_VerilatedVcd;


//----------

VL_MODULE(Vfp_wrapper___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vfp_wrapper__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfp_wrapper___024unit);  ///< Copying not allowed
  public:
    Vfp_wrapper___024unit(const char* name = "TOP");
    ~Vfp_wrapper___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vfp_wrapper__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
