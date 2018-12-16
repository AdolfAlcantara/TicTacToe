// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtictactoe__Syms.h"


//======================

void Vtictactoe::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtictactoe* t=(Vtictactoe*)userthis;
    Vtictactoe__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtictactoe::traceChgThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 2U) | (vlTOPp->__Vm_traceActivity 
					  >> 3U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtictactoe::traceChgThis__2(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR),4);
	vcdp->chgBit  (c+2,((1U & (((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
				    >> 3U) ^ ~ ((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						>> 2U)))));
    }
}

void Vtictactoe::traceChgThis__3(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->tictactoe__DOT__board_pos),4);
    }
}

void Vtictactoe::traceChgThis__4(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+4,(vlTOPp->tictactoe__DOT__image_pixel),4);
	vcdp->chgBus  (c+5,(vlTOPp->tictactoe__DOT__image_pixel_x),4);
	vcdp->chgBus  (c+6,(vlTOPp->tictactoe__DOT__image_won),4);
	vcdp->chgBus  (c+7,(((0x57e3U >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
			      ? vlTOPp->tictactoe__DOT__data2__DOT__dat__DOT__rom_content
			     [vlTOPp->tictactoe__DOT__sign_address]
			      : 0U)),4);
	vcdp->chgBus  (c+8,(((0x57e3U >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
			      ? vlTOPp->tictactoe__DOT__data2__DOT__dat2__DOT__rom_content
			     [vlTOPp->tictactoe__DOT__sign_address]
			      : 0U)),4);
    }
}

void Vtictactoe::traceChgThis__5(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+9,(vlTOPp->tictactoe__DOT__color_selector),8);
	vcdp->chgBus  (c+10,(vlTOPp->tictactoe__DOT__counter),27);
	vcdp->chgBit  (c+11,(vlTOPp->tictactoe__DOT__enable));
	vcdp->chgBit  (c+12,(vlTOPp->tictactoe__DOT__getRandom));
    }
}

void Vtictactoe::traceChgThis__6(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+13,(vlTOPp->tictactoe__DOT__board[0]),2);
	vcdp->chgBus  (c+14,(vlTOPp->tictactoe__DOT__board[1]),2);
	vcdp->chgBus  (c+15,(vlTOPp->tictactoe__DOT__board[2]),2);
	vcdp->chgBus  (c+16,(vlTOPp->tictactoe__DOT__board[3]),2);
	vcdp->chgBus  (c+17,(vlTOPp->tictactoe__DOT__board[4]),2);
	vcdp->chgBus  (c+18,(vlTOPp->tictactoe__DOT__board[5]),2);
	vcdp->chgBus  (c+19,(vlTOPp->tictactoe__DOT__board[6]),2);
	vcdp->chgBus  (c+20,(vlTOPp->tictactoe__DOT__board[7]),2);
	vcdp->chgBus  (c+21,(vlTOPp->tictactoe__DOT__board[8]),2);
	vcdp->chgBus  (c+22,(vlTOPp->tictactoe__DOT__board[9]),2);
	vcdp->chgBus  (c+23,(vlTOPp->tictactoe__DOT__board[10]),2);
	vcdp->chgBus  (c+24,(vlTOPp->tictactoe__DOT__board[11]),2);
	vcdp->chgBus  (c+25,(vlTOPp->tictactoe__DOT__board[12]),2);
	vcdp->chgBus  (c+26,(vlTOPp->tictactoe__DOT__board[13]),2);
	vcdp->chgBus  (c+27,(vlTOPp->tictactoe__DOT__board[14]),2);
	vcdp->chgBus  (c+28,(vlTOPp->tictactoe__DOT__board[15]),2);
	vcdp->chgBit  (c+29,(vlTOPp->tictactoe__DOT__won_condition));
    }
}

void Vtictactoe::traceChgThis__7(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+30,(vlTOPp->tictactoe__DOT__hcount),11);
	vcdp->chgBus  (c+31,(vlTOPp->tictactoe__DOT__vcount),10);
	vcdp->chgBus  (c+32,(vlTOPp->tictactoe__DOT__board_address),19);
	vcdp->chgBus  (c+33,(vlTOPp->tictactoe__DOT__sign_address),15);
	vcdp->chgBus  (c+34,(vlTOPp->tictactoe__DOT__win_address),15);
	vcdp->chgBus  (c+35,(vlTOPp->tictactoe__DOT__won_address),17);
	vcdp->chgBus  (c+36,(vlTOPp->tictactoe__DOT__won_word),17);
	vcdp->chgBus  (c+37,(vlTOPp->tictactoe__DOT__board_record[0]),15);
	vcdp->chgBus  (c+38,(vlTOPp->tictactoe__DOT__board_record[1]),15);
	vcdp->chgBus  (c+39,(vlTOPp->tictactoe__DOT__board_record[2]),15);
	vcdp->chgBus  (c+40,(vlTOPp->tictactoe__DOT__board_record[3]),15);
	vcdp->chgBus  (c+41,(vlTOPp->tictactoe__DOT__board_record[4]),15);
	vcdp->chgBus  (c+42,(vlTOPp->tictactoe__DOT__board_record[5]),15);
	vcdp->chgBus  (c+43,(vlTOPp->tictactoe__DOT__board_record[6]),15);
	vcdp->chgBus  (c+44,(vlTOPp->tictactoe__DOT__board_record[7]),15);
	vcdp->chgBus  (c+45,(vlTOPp->tictactoe__DOT__board_record[8]),15);
	vcdp->chgBus  (c+46,(vlTOPp->tictactoe__DOT__flip_ram),4);
	vcdp->chgBus  (c+47,(vlTOPp->tictactoe__DOT__selector),2);
	vcdp->chgBit  (c+48,(vlTOPp->tictactoe__DOT__draw));
	vcdp->chgBus  (c+49,(vlTOPp->tictactoe__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vtictactoe::traceChgThis__8(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+50,(vlTOPp->tictactoe__DOT__winner),2);
    }
}

void Vtictactoe::traceChgThis__9(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+51,(vlTOPp->rst));
	vcdp->chgBit  (c+52,(vlTOPp->clk));
	vcdp->chgBit  (c+53,(vlTOPp->hsync));
	vcdp->chgBit  (c+54,(vlTOPp->vsync));
	vcdp->chgBus  (c+55,(vlTOPp->red),3);
	vcdp->chgBus  (c+56,(vlTOPp->green),3);
	vcdp->chgBus  (c+57,(vlTOPp->blue),2);
    }
}
