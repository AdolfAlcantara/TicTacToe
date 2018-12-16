// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtictactoe__Syms_H_
#define _Vtictactoe__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtictactoe.h"

// SYMS CLASS
class Vtictactoe__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtictactoe*                    TOPp;
    
    // CREATORS
    Vtictactoe__Syms(Vtictactoe* topp, const char* namep);
    ~Vtictactoe__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
