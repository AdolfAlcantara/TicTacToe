// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtictactoe__Syms.h"


//======================

void Vtictactoe::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtictactoe::traceInit, &Vtictactoe::traceFull, &Vtictactoe::traceChg, this);
}
void Vtictactoe::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtictactoe* t=(Vtictactoe*)userthis;
    Vtictactoe__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtictactoe::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtictactoe* t=(Vtictactoe*)userthis;
    Vtictactoe__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtictactoe::traceInitThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtictactoe::traceFullThis(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtictactoe::traceInitThis__1(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+51,"rst",-1);
	vcdp->declBit  (c+52,"clk",-1);
	vcdp->declBit  (c+53,"hsync",-1);
	vcdp->declBit  (c+54,"vsync",-1);
	vcdp->declBus  (c+55,"red",-1,2,0);
	vcdp->declBus  (c+56,"green",-1,2,0);
	vcdp->declBus  (c+57,"blue",-1,1,0);
	vcdp->declBit  (c+51,"tictactoe rst",-1);
	vcdp->declBit  (c+52,"tictactoe clk",-1);
	vcdp->declBit  (c+53,"tictactoe hsync",-1);
	vcdp->declBit  (c+54,"tictactoe vsync",-1);
	vcdp->declBus  (c+55,"tictactoe red",-1,2,0);
	vcdp->declBus  (c+56,"tictactoe green",-1,2,0);
	vcdp->declBus  (c+57,"tictactoe blue",-1,1,0);
	vcdp->declBus  (c+31,"tictactoe hcount",-1,10,0);
	vcdp->declBus  (c+32,"tictactoe vcount",-1,9,0);
	vcdp->declBus  (c+33,"tictactoe board_address",-1,18,0);
	vcdp->declBus  (c+34,"tictactoe sign_address",-1,14,0);
	vcdp->declBus  (c+35,"tictactoe win_address",-1,14,0);
	vcdp->declBus  (c+36,"tictactoe won_address",-1,16,0);
	vcdp->declBus  (c+37,"tictactoe won_word",-1,16,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+14+i*1,"tictactoe board",(i+0),1,0);}}
	{int i; for (i=0; i<9; i++) {
		vcdp->declBus  (c+38+i*1,"tictactoe board_record",(i+0),14,0);}}
	vcdp->declBus  (c+47,"tictactoe flip_ram",-1,3,0);
	vcdp->declBit  (c+58,"tictactoe flip",-1);
	vcdp->declBus  (c+48,"tictactoe selector",-1,1,0);
	vcdp->declBus  (c+9,"tictactoe color_selector",-1,7,0);
	vcdp->declBus  (c+10,"tictactoe counter",-1,26,0);
	vcdp->declBus  (c+4,"tictactoe image_pixel",-1,3,0);
	vcdp->declBus  (c+5,"tictactoe image_pixel_x",-1,3,0);
	vcdp->declBus  (c+6,"tictactoe image_won",-1,3,0);
	vcdp->declBus  (c+3,"tictactoe board_pos",-1,3,0);
	vcdp->declBit  (c+11,"tictactoe enable",-1);
	vcdp->declBit  (c+12,"tictactoe getRandom",-1);
	vcdp->declBit  (c+30,"tictactoe won_condition",-1);
	vcdp->declBus  (c+50,"tictactoe winner",-1,1,0);
	vcdp->declBit  (c+13,"tictactoe draw",-1);
	vcdp->declBus  (c+49,"tictactoe unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+33,"tictactoe data address",-1,18,0);
	vcdp->declBus  (c+4,"tictactoe data data",-1,3,0);
	// Tracing: tictactoe data rom_content // Ignored: Wide memory > --trace-max-array ents at ../xo//rom_board.v:6
	vcdp->declBus  (c+34,"tictactoe data2 address",-1,14,0);
	vcdp->declBus  (c+48,"tictactoe data2 selector",-1,1,0);
	vcdp->declBus  (c+5,"tictactoe data2 data",-1,3,0);
	vcdp->declBus  (c+7,"tictactoe data2 info",-1,3,0);
	vcdp->declBus  (c+8,"tictactoe data2 info2",-1,3,0);
	vcdp->declBus  (c+34,"tictactoe data2 dat address",-1,14,0);
	vcdp->declBus  (c+7,"tictactoe data2 dat data",-1,3,0);
	// Tracing: tictactoe data2 dat rom_content // Ignored: Wide memory > --trace-max-array ents at ../xo//rom_x.v:6
	vcdp->declBus  (c+34,"tictactoe data2 dat2 address",-1,14,0);
	vcdp->declBus  (c+8,"tictactoe data2 dat2 data",-1,3,0);
	// Tracing: tictactoe data2 dat2 rom_content // Ignored: Wide memory > --trace-max-array ents at ../xo//rom_o.v:6
	vcdp->declBus  (c+36,"tictactoe data3 address",-1,16,0);
	vcdp->declBus  (c+6,"tictactoe data3 data",-1,3,0);
	// Tracing: tictactoe data3 rom_content // Ignored: Wide memory > --trace-max-array ents at ../xo//rom_won.v:6
	vcdp->declBit  (c+52,"tictactoe numb i_Clk",-1);
	vcdp->declBit  (c+12,"tictactoe numb i_Enable",-1);
	vcdp->declBit  (c+59,"tictactoe numb i_Seed_DV",-1);
	vcdp->declBus  (c+60,"tictactoe numb i_Seed_Data",-1,3,0);
	vcdp->declBus  (c+3,"tictactoe numb o_LFSR_Data",-1,3,0);
	vcdp->declBus  (c+1,"tictactoe numb r_LFSR",-1,4,1);
	vcdp->declBit  (c+2,"tictactoe numb r_XNOR",-1);
    }
}

void Vtictactoe::traceFullThis__1(Vtictactoe__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR),4);
	vcdp->fullBit  (c+2,((1U & (((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
				     >> 3U) ^ ~ ((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						 >> 2U)))));
	vcdp->fullBus  (c+3,(vlTOPp->tictactoe__DOT__board_pos),4);
	vcdp->fullBus  (c+4,(vlTOPp->tictactoe__DOT__image_pixel),4);
	vcdp->fullBus  (c+5,(vlTOPp->tictactoe__DOT__image_pixel_x),4);
	vcdp->fullBus  (c+6,(vlTOPp->tictactoe__DOT__image_won),4);
	vcdp->fullBus  (c+7,(((0x57e3U >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
			       ? vlTOPp->tictactoe__DOT__data2__DOT__dat__DOT__rom_content
			      [vlTOPp->tictactoe__DOT__sign_address]
			       : 0U)),4);
	vcdp->fullBus  (c+8,(((0x57e3U >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
			       ? vlTOPp->tictactoe__DOT__data2__DOT__dat2__DOT__rom_content
			      [vlTOPp->tictactoe__DOT__sign_address]
			       : 0U)),4);
	vcdp->fullBus  (c+9,(vlTOPp->tictactoe__DOT__color_selector),8);
	vcdp->fullBus  (c+10,(vlTOPp->tictactoe__DOT__counter),27);
	vcdp->fullBit  (c+11,(vlTOPp->tictactoe__DOT__enable));
	vcdp->fullBit  (c+12,(vlTOPp->tictactoe__DOT__getRandom));
	vcdp->fullBit  (c+13,(vlTOPp->tictactoe__DOT__draw));
	vcdp->fullBus  (c+14,(vlTOPp->tictactoe__DOT__board[0]),2);
	vcdp->fullBus  (c+15,(vlTOPp->tictactoe__DOT__board[1]),2);
	vcdp->fullBus  (c+16,(vlTOPp->tictactoe__DOT__board[2]),2);
	vcdp->fullBus  (c+17,(vlTOPp->tictactoe__DOT__board[3]),2);
	vcdp->fullBus  (c+18,(vlTOPp->tictactoe__DOT__board[4]),2);
	vcdp->fullBus  (c+19,(vlTOPp->tictactoe__DOT__board[5]),2);
	vcdp->fullBus  (c+20,(vlTOPp->tictactoe__DOT__board[6]),2);
	vcdp->fullBus  (c+21,(vlTOPp->tictactoe__DOT__board[7]),2);
	vcdp->fullBus  (c+22,(vlTOPp->tictactoe__DOT__board[8]),2);
	vcdp->fullBus  (c+23,(vlTOPp->tictactoe__DOT__board[9]),2);
	vcdp->fullBus  (c+24,(vlTOPp->tictactoe__DOT__board[10]),2);
	vcdp->fullBus  (c+25,(vlTOPp->tictactoe__DOT__board[11]),2);
	vcdp->fullBus  (c+26,(vlTOPp->tictactoe__DOT__board[12]),2);
	vcdp->fullBus  (c+27,(vlTOPp->tictactoe__DOT__board[13]),2);
	vcdp->fullBus  (c+28,(vlTOPp->tictactoe__DOT__board[14]),2);
	vcdp->fullBus  (c+29,(vlTOPp->tictactoe__DOT__board[15]),2);
	vcdp->fullBit  (c+30,(vlTOPp->tictactoe__DOT__won_condition));
	vcdp->fullBus  (c+31,(vlTOPp->tictactoe__DOT__hcount),11);
	vcdp->fullBus  (c+32,(vlTOPp->tictactoe__DOT__vcount),10);
	vcdp->fullBus  (c+33,(vlTOPp->tictactoe__DOT__board_address),19);
	vcdp->fullBus  (c+34,(vlTOPp->tictactoe__DOT__sign_address),15);
	vcdp->fullBus  (c+35,(vlTOPp->tictactoe__DOT__win_address),15);
	vcdp->fullBus  (c+36,(vlTOPp->tictactoe__DOT__won_address),17);
	vcdp->fullBus  (c+37,(vlTOPp->tictactoe__DOT__won_word),17);
	vcdp->fullBus  (c+38,(vlTOPp->tictactoe__DOT__board_record[0]),15);
	vcdp->fullBus  (c+39,(vlTOPp->tictactoe__DOT__board_record[1]),15);
	vcdp->fullBus  (c+40,(vlTOPp->tictactoe__DOT__board_record[2]),15);
	vcdp->fullBus  (c+41,(vlTOPp->tictactoe__DOT__board_record[3]),15);
	vcdp->fullBus  (c+42,(vlTOPp->tictactoe__DOT__board_record[4]),15);
	vcdp->fullBus  (c+43,(vlTOPp->tictactoe__DOT__board_record[5]),15);
	vcdp->fullBus  (c+44,(vlTOPp->tictactoe__DOT__board_record[6]),15);
	vcdp->fullBus  (c+45,(vlTOPp->tictactoe__DOT__board_record[7]),15);
	vcdp->fullBus  (c+46,(vlTOPp->tictactoe__DOT__board_record[8]),15);
	vcdp->fullBus  (c+47,(vlTOPp->tictactoe__DOT__flip_ram),4);
	vcdp->fullBus  (c+48,(vlTOPp->tictactoe__DOT__selector),2);
	vcdp->fullBus  (c+49,(vlTOPp->tictactoe__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus  (c+50,(vlTOPp->tictactoe__DOT__winner),2);
	vcdp->fullBit  (c+51,(vlTOPp->rst));
	vcdp->fullBit  (c+52,(vlTOPp->clk));
	vcdp->fullBit  (c+53,(vlTOPp->hsync));
	vcdp->fullBit  (c+54,(vlTOPp->vsync));
	vcdp->fullBus  (c+55,(vlTOPp->red),3);
	vcdp->fullBus  (c+56,(vlTOPp->green),3);
	vcdp->fullBus  (c+57,(vlTOPp->blue),2);
	vcdp->fullBit  (c+58,(vlTOPp->tictactoe__DOT__flip));
	vcdp->fullBit  (c+59,(0U));
	vcdp->fullBus  (c+60,(0U),4);
    }
}
