// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfp_wrapper__Syms.h"
#include "Vfp_wrapper.h"
#include "Vfp_wrapper___024unit.h"



// FUNCTIONS
Vfp_wrapper__Syms::Vfp_wrapper__Syms(Vfp_wrapper* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
