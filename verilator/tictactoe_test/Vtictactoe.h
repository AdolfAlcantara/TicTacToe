// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtictactoe_H_
#define _Vtictactoe_H_

#include "verilated_heavy.h"

class Vtictactoe__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtictactoe) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(red,2,0);
    VL_OUT8(green,2,0);
    VL_OUT8(blue,1,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(tictactoe__DOT__enable,0,0);
    VL_SIG8(tictactoe__DOT__flip_ram,3,0);
    VL_SIG8(tictactoe__DOT__flip,0,0);
    VL_SIG8(tictactoe__DOT__selector,1,0);
    VL_SIG8(tictactoe__DOT__color_selector,7,0);
    VL_SIG8(tictactoe__DOT__image_pixel,3,0);
    VL_SIG8(tictactoe__DOT__image_pixel_x,3,0);
    VL_SIG8(tictactoe__DOT__image_won,3,0);
    VL_SIG8(tictactoe__DOT__board_pos,3,0);
    VL_SIG8(tictactoe__DOT__getRandom,0,0);
    VL_SIG8(tictactoe__DOT__won_condition,0,0);
    VL_SIG8(tictactoe__DOT__winner,1,0);
    VL_SIG8(tictactoe__DOT__draw,0,0);
    VL_SIG8(tictactoe__DOT__numb__DOT__r_LFSR,4,1);
    VL_SIG8(tictactoe__DOT__numb__DOT__r_XNOR,0,0);
    VL_SIG16(tictactoe__DOT__hcount,10,0);
    VL_SIG16(tictactoe__DOT__vcount,9,0);
    VL_SIG16(tictactoe__DOT__sign_address,14,0);
    VL_SIG16(tictactoe__DOT__win_address,14,0);
    VL_SIG(tictactoe__DOT__board_address,18,0);
    VL_SIG(tictactoe__DOT__won_address,16,0);
    VL_SIG(tictactoe__DOT__won_word,16,0);
    VL_SIG(tictactoe__DOT__counter,26,0);
    VL_SIG(tictactoe__DOT__unnamedblk1__DOT__i,31,0);
    VL_SIG8(tictactoe__DOT__board[16],1,0);
    VL_SIG16(tictactoe__DOT__board_record[9],14,0);
    VL_SIG8(tictactoe__DOT__data__DOT__rom_content[480000],3,0);
    VL_SIG8(tictactoe__DOT__data2__DOT__dat__DOT__rom_content[22500],3,0);
    VL_SIG8(tictactoe__DOT__data2__DOT__dat2__DOT__rom_content[22500],3,0);
    VL_SIG8(tictactoe__DOT__data3__DOT__rom_content[67500],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__tictactoe__DOT__flip_ram,3,0);
    VL_SIG8(__Vdly__tictactoe__DOT__winner,1,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v0,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v1,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v2,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v3,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v4,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v5,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v6,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v7,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v8,0,0);
    VL_SIG8(__Vdly__tictactoe__DOT__selector,1,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v9,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v10,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v11,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v12,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v13,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v14,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v15,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v16,0,0);
    VL_SIG8(__Vdlyvset__tictactoe__DOT__board_record__v17,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__tictactoe__DOT__enable,0,0);
    VL_SIG16(__Vdly__tictactoe__DOT__hcount,10,0);
    VL_SIG16(__Vdly__tictactoe__DOT__vcount,9,0);
    VL_SIG16(__Vdly__tictactoe__DOT__sign_address,14,0);
    VL_SIG16(__Vdly__tictactoe__DOT__win_address,14,0);
    VL_SIG(__Vdly__tictactoe__DOT__board_address,18,0);
    VL_SIG(__Vdly__tictactoe__DOT__won_address,16,0);
    VL_SIG(__Vdly__tictactoe__DOT__won_word,16,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtictactoe__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtictactoe& operator= (const Vtictactoe&);  ///< Copying not allowed
    Vtictactoe(const Vtictactoe&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtictactoe(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtictactoe();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtictactoe__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtictactoe__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtictactoe__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vtictactoe__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtictactoe__Syms* __restrict vlSymsp);
    static void _eval_settle(Vtictactoe__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vtictactoe__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtictactoe__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtictactoe__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtictactoe__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtictactoe__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vtictactoe__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtictactoe__Syms* __restrict vlSymsp);
    static void traceChgThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
