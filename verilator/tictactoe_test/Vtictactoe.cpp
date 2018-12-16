// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtictactoe.h for the primary calling header

#include "Vtictactoe.h"        // For This
#include "Vtictactoe__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtictactoe) {
    Vtictactoe__Syms* __restrict vlSymsp = __VlSymsp = new Vtictactoe__Syms(this, name());
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtictactoe::__Vconfigure(Vtictactoe__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtictactoe::~Vtictactoe() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtictactoe::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtictactoe::eval\n"); );
    Vtictactoe__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtictactoe::_eval_initial_loop(Vtictactoe__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtictactoe::_initial__TOP__1(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_initial__TOP__1\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,671,0,21);
    VL_SIGW(__Vtemp2,575,0,18);
    VL_SIGW(__Vtemp3,639,0,20);
    VL_SIGW(__Vtemp4,639,0,20);
    // Body
    // INITIAL at ../xo//rom_board.v:11
    __Vtemp1[0U] = 0x2e6d6966U;
    __Vtemp1[1U] = 0x6f617264U;
    __Vtemp1[2U] = 0x6f655f62U;
    __Vtemp1[3U] = 0x74616374U;
    __Vtemp1[4U] = 0x2f746963U;
    __Vtemp1[5U] = 0x61676573U;
    __Vtemp1[6U] = 0x6f2f696dU;
    __Vtemp1[7U] = 0x6f6e2f78U;
    __Vtemp1[8U] = 0x6c617469U;
    __Vtemp1[9U] = 0x73696d75U;
    __Vtemp1[0xaU] = 0x6f58305fU;
    __Vtemp1[0xbU] = 0x79656374U;
    __Vtemp1[0xcU] = 0x2f50726fU;
    __Vtemp1[0xdU] = 0x2f44534cU;
    __Vtemp1[0xeU] = 0x6e746f73U;
    __Vtemp1[0xfU] = 0x63756d65U;
    __Vtemp1[0x10U] = 0x722f446fU;
    __Vtemp1[0x11U] = 0x636f6465U;
    __Vtemp1[0x12U] = 0x66757279U;
    __Vtemp1[0x13U] = 0x6f6d652fU;
    __Vtemp1[0x14U] = 0x2f68U;
    VL_READMEM_W (true,4,480000, 0,21, __Vtemp1, vlTOPp->tictactoe__DOT__data__DOT__rom_content
		  ,0U,0x752ffU);
    // INITIAL at ../xo//rom_won.v:11
    __Vtemp2[0U] = 0x2e6d6966U;
    __Vtemp2[1U] = 0x2f776f6eU;
    __Vtemp2[2U] = 0x61676573U;
    __Vtemp2[3U] = 0x6f2f696dU;
    __Vtemp2[4U] = 0x6f6e2f78U;
    __Vtemp2[5U] = 0x6c617469U;
    __Vtemp2[6U] = 0x73696d75U;
    __Vtemp2[7U] = 0x6f58305fU;
    __Vtemp2[8U] = 0x79656374U;
    __Vtemp2[9U] = 0x2f50726fU;
    __Vtemp2[0xaU] = 0x2f44534cU;
    __Vtemp2[0xbU] = 0x6e746f73U;
    __Vtemp2[0xcU] = 0x63756d65U;
    __Vtemp2[0xdU] = 0x722f446fU;
    __Vtemp2[0xeU] = 0x636f6465U;
    __Vtemp2[0xfU] = 0x66757279U;
    __Vtemp2[0x10U] = 0x6f6d652fU;
    __Vtemp2[0x11U] = 0x2f68U;
    VL_READMEM_W (true,4,67500, 0,18, __Vtemp2, vlTOPp->tictactoe__DOT__data3__DOT__rom_content
		  ,0U,0x107abU);
    // INITIAL at ../xo//rom_x.v:11
    __Vtemp3[0U] = 0x2e6d6966U;
    __Vtemp3[1U] = 0x6f655f78U;
    __Vtemp3[2U] = 0x74616374U;
    __Vtemp3[3U] = 0x2f746963U;
    __Vtemp3[4U] = 0x61676573U;
    __Vtemp3[5U] = 0x6f2f696dU;
    __Vtemp3[6U] = 0x6f6e2f78U;
    __Vtemp3[7U] = 0x6c617469U;
    __Vtemp3[8U] = 0x73696d75U;
    __Vtemp3[9U] = 0x6f58305fU;
    __Vtemp3[0xaU] = 0x79656374U;
    __Vtemp3[0xbU] = 0x2f50726fU;
    __Vtemp3[0xcU] = 0x2f44534cU;
    __Vtemp3[0xdU] = 0x6e746f73U;
    __Vtemp3[0xeU] = 0x63756d65U;
    __Vtemp3[0xfU] = 0x722f446fU;
    __Vtemp3[0x10U] = 0x636f6465U;
    __Vtemp3[0x11U] = 0x66757279U;
    __Vtemp3[0x12U] = 0x6f6d652fU;
    __Vtemp3[0x13U] = 0x2f68U;
    VL_READMEM_W (true,4,22500, 0,20, __Vtemp3, vlTOPp->tictactoe__DOT__data2__DOT__dat__DOT__rom_content
		  ,0U,0x57e3U);
    // INITIAL at ../xo//rom_o.v:11
    __Vtemp4[0U] = 0x2e6d6966U;
    __Vtemp4[1U] = 0x6f655f30U;
    __Vtemp4[2U] = 0x74616374U;
    __Vtemp4[3U] = 0x2f746963U;
    __Vtemp4[4U] = 0x61676573U;
    __Vtemp4[5U] = 0x6f2f696dU;
    __Vtemp4[6U] = 0x6f6e2f78U;
    __Vtemp4[7U] = 0x6c617469U;
    __Vtemp4[8U] = 0x73696d75U;
    __Vtemp4[9U] = 0x6f58305fU;
    __Vtemp4[0xaU] = 0x79656374U;
    __Vtemp4[0xbU] = 0x2f50726fU;
    __Vtemp4[0xcU] = 0x2f44534cU;
    __Vtemp4[0xdU] = 0x6e746f73U;
    __Vtemp4[0xeU] = 0x63756d65U;
    __Vtemp4[0xfU] = 0x722f446fU;
    __Vtemp4[0x10U] = 0x636f6465U;
    __Vtemp4[0x11U] = 0x66757279U;
    __Vtemp4[0x12U] = 0x6f6d652fU;
    __Vtemp4[0x13U] = 0x2f68U;
    VL_READMEM_W (true,4,22500, 0,20, __Vtemp4, vlTOPp->tictactoe__DOT__data2__DOT__dat2__DOT__rom_content
		  ,0U,0x57e3U);
    // INITIAL at ../xo//lfsr_sup.v:14
    vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR = 0U;
}

VL_INLINE_OPT void Vtictactoe::_sequent__TOP__2(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_sequent__TOP__2\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__tictactoe__DOT__numb__DOT__r_LFSR,4,1);
    VL_SIG(__Vdly__tictactoe__DOT__counter,26,0);
    // Body
    __Vdly__tictactoe__DOT__numb__DOT__r_LFSR = vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR;
    vlTOPp->__Vdly__tictactoe__DOT__win_address = vlTOPp->tictactoe__DOT__win_address;
    vlTOPp->__Vdly__tictactoe__DOT__won_word = vlTOPp->tictactoe__DOT__won_word;
    vlTOPp->__Vdly__tictactoe__DOT__won_address = vlTOPp->tictactoe__DOT__won_address;
    vlTOPp->__Vdly__tictactoe__DOT__selector = vlTOPp->tictactoe__DOT__selector;
    vlTOPp->__Vdly__tictactoe__DOT__sign_address = vlTOPp->tictactoe__DOT__sign_address;
    vlTOPp->__Vdly__tictactoe__DOT__flip_ram = vlTOPp->tictactoe__DOT__flip_ram;
    __Vdly__tictactoe__DOT__counter = vlTOPp->tictactoe__DOT__counter;
    vlTOPp->__Vdly__tictactoe__DOT__hcount = vlTOPp->tictactoe__DOT__hcount;
    vlTOPp->__Vdly__tictactoe__DOT__vcount = vlTOPp->tictactoe__DOT__vcount;
    vlTOPp->__Vdly__tictactoe__DOT__board_address = vlTOPp->tictactoe__DOT__board_address;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v0 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v1 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v2 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v3 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v4 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v5 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v6 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v7 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v8 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v9 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v10 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v11 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v12 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v13 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v14 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v15 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v16 = 0U;
    vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v17 = 0U;
    // ALWAYS at ../xo//lfsr_sup.v:20
    if (vlTOPp->tictactoe__DOT__getRandom) {
	__Vdly__tictactoe__DOT__numb__DOT__r_LFSR = 
	    ((0xeU & ((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
		      << 1U)) | (IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_XNOR));
    }
    // ALWAYS at ../xo//../xo/tictactoe.v:48
    if (vlTOPp->rst) {
	vlTOPp->tictactoe__DOT__enable = 0U;
	vlTOPp->tictactoe__DOT__getRandom = 0U;
	vlTOPp->tictactoe__DOT__board_pos = 0U;
	vlTOPp->tictactoe__DOT__draw = 1U;
	vlTOPp->__Vdly__tictactoe__DOT__hcount = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__vcount = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__flip_ram = 2U;
    } else {
	if ((0x41fU == (IData)(vlTOPp->tictactoe__DOT__hcount))) {
	    vlTOPp->__Vdly__tictactoe__DOT__vcount 
		= (0x3ffU & ((0x273U == (IData)(vlTOPp->tictactoe__DOT__vcount))
			      ? 0U : ((IData)(1U) + (IData)(vlTOPp->tictactoe__DOT__vcount))));
	    vlTOPp->__Vdly__tictactoe__DOT__hcount = 0U;
	} else {
	    vlTOPp->__Vdly__tictactoe__DOT__hcount 
		= (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->tictactoe__DOT__hcount)));
	}
	__Vdly__tictactoe__DOT__counter = (0x7ffffffU 
					   & ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__counter));
	if ((0x752ffU <= vlTOPp->tictactoe__DOT__board_address)) {
	    vlTOPp->__Vdly__tictactoe__DOT__board_address = 0U;
	}
	if (vlTOPp->tictactoe__DOT__won_condition) {
	    vlTOPp->tictactoe__DOT__getRandom = 0U;
	    vlTOPp->tictactoe__DOT__enable = 0U;
	    vlTOPp->tictactoe__DOT__draw = 1U;
	    if ((0xdbba0U > vlTOPp->tictactoe__DOT__counter)) {
		vlTOPp->tictactoe__DOT__color_selector = 7U;
	    }
	    if ((0x6ddd0U > vlTOPp->tictactoe__DOT__counter)) {
		vlTOPp->tictactoe__DOT__color_selector 
		    = vlTOPp->tictactoe__DOT__winner;
	    }
	    if ((0xdbba0U == vlTOPp->tictactoe__DOT__counter)) {
		vlTOPp->tictactoe__DOT__color_selector = 7U;
		__Vdly__tictactoe__DOT__counter = 0U;
	    }
	} else {
	    if (VL_UNLIKELY((0xdbba0U == vlTOPp->tictactoe__DOT__counter))) {
		vlTOPp->tictactoe__DOT__getRandom = 1U;
		if (((0xaU < (IData)(vlTOPp->tictactoe__DOT__board_pos)) 
		     | (0U == (IData)(vlTOPp->tictactoe__DOT__board_pos)))) {
		    vlTOPp->tictactoe__DOT__board_pos 
			= (0xfU & VL_MODDIV_III(32, 
						((IData)(0xbU) 
						 + (IData)(vlTOPp->tictactoe__DOT__board_pos)), (IData)(0xaU)));
		}
		__Vdly__tictactoe__DOT__counter = 0U;
		if ((0U == vlTOPp->tictactoe__DOT__board
		     [vlTOPp->tictactoe__DOT__board_pos])) {
		    vlTOPp->__Vdly__tictactoe__DOT__flip_ram 
			= (0xfU & ((IData)(1U) + (IData)(vlTOPp->tictactoe__DOT__flip_ram)));
		    vlTOPp->tictactoe__DOT__enable = 1U;
		}
		VL_WRITEF("board_pos: %2#\n",4,vlTOPp->tictactoe__DOT__board_pos);
		VL_WRITEF("flip ram: %2#\n",4,vlTOPp->tictactoe__DOT__flip_ram);
		VL_WRITEF("getRandom: 1\n");
	    } else {
		vlTOPp->tictactoe__DOT__getRandom = 0U;
		vlTOPp->tictactoe__DOT__enable = 0U;
	    }
	}
    }
    vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR = __Vdly__tictactoe__DOT__numb__DOT__r_LFSR;
    vlTOPp->tictactoe__DOT__counter = __Vdly__tictactoe__DOT__counter;
    // ALWAYS at ../xo//lfsr_sup.v:33
    vlTOPp->tictactoe__DOT__numb__DOT__r_XNOR = (1U 
						 & (((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						     >> 3U) 
						    ^ ~ 
						    ((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						     >> 2U)));
}

void Vtictactoe::_settle__TOP__3(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_settle__TOP__3\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../xo//../xo/tictactoe.v:122
    vlTOPp->vsync = (1U & (~ ((0x259U <= (IData)(vlTOPp->tictactoe__DOT__vcount)) 
			      & (0x25dU > (IData)(vlTOPp->tictactoe__DOT__vcount)))));
    vlTOPp->hsync = (1U & (~ ((0x348U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
			      & (0x3c8U > (IData)(vlTOPp->tictactoe__DOT__hcount)))));
    // ALWAYS at ../xo//rom_board.v:8
    vlTOPp->tictactoe__DOT__image_pixel = ((0x752ffU 
					    >= vlTOPp->tictactoe__DOT__board_address)
					    ? vlTOPp->tictactoe__DOT__data__DOT__rom_content
					   [vlTOPp->tictactoe__DOT__board_address]
					    : 0U);
    // ALWAYS at ../xo//rom_won.v:8
    vlTOPp->tictactoe__DOT__image_won = ((0x107abU 
					  >= vlTOPp->tictactoe__DOT__won_address)
					  ? vlTOPp->tictactoe__DOT__data3__DOT__rom_content
					 [vlTOPp->tictactoe__DOT__won_address]
					  : 0U);
    // ALWAYS at ../xo//rom_master.v:12
    vlTOPp->tictactoe__DOT__image_pixel_x = ((1U == (IData)(vlTOPp->tictactoe__DOT__selector))
					      ? ((0x57e3U 
						  >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
						  ? 
						 vlTOPp->tictactoe__DOT__data2__DOT__dat__DOT__rom_content
						 [vlTOPp->tictactoe__DOT__sign_address]
						  : 0U)
					      : ((0x57e3U 
						  >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
						  ? 
						 vlTOPp->tictactoe__DOT__data2__DOT__dat2__DOT__rom_content
						 [vlTOPp->tictactoe__DOT__sign_address]
						  : 0U));
    // ALWAYS at ../xo//lfsr_sup.v:33
    vlTOPp->tictactoe__DOT__numb__DOT__r_XNOR = (1U 
						 & (((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						     >> 3U) 
						    ^ ~ 
						    ((IData)(vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR) 
						     >> 2U)));
    vlTOPp->tictactoe__DOT__board_pos = vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR;
}

VL_INLINE_OPT void Vtictactoe::_sequent__TOP__5(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_sequent__TOP__5\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__tictactoe__DOT__winner = vlTOPp->tictactoe__DOT__winner;
}

VL_INLINE_OPT void Vtictactoe::_sequent__TOP__6(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_sequent__TOP__6\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../xo//../xo/tictactoe.v:143
    vlTOPp->tictactoe__DOT__board[vlTOPp->tictactoe__DOT__board_pos] 
	= ((0U == VL_MODDIV_III(32, (IData)(vlTOPp->tictactoe__DOT__flip_ram), (IData)(2U)))
	    ? 1U : 2U);
    if ((0xaU > (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
	if ((8U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
	    if ((4U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
		vlTOPp->tictactoe__DOT__won_condition = 0U;
	    } else {
		if ((2U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
		    vlTOPp->tictactoe__DOT__won_condition = 0U;
		} else {
		    if ((1U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
			if (((((vlTOPp->tictactoe__DOT__board
				[(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					  - (IData)(1U)))] 
				== vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos]) 
			       & (vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					    - (IData)(2U)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos])) 
			      | ((vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					    - (IData)(3U)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos]) 
				 & (vlTOPp->tictactoe__DOT__board
				    [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					      - (IData)(6U)))] 
				    == vlTOPp->tictactoe__DOT__board
				    [vlTOPp->tictactoe__DOT__board_pos]))) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(4U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					     - (IData)(8U)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    } else {
			if ((((vlTOPp->tictactoe__DOT__board
			       [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					 - (IData)(1U)))] 
			       == vlTOPp->tictactoe__DOT__board
			       [vlTOPp->tictactoe__DOT__board_pos]) 
			      & (vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(1U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos])) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(3U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					     - (IData)(6U)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    }
		}
	    }
	} else {
	    if ((4U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
		if ((2U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
		    if ((1U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
			if (((((vlTOPp->tictactoe__DOT__board
				[(0xfU & ((IData)(1U) 
					  + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				== vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos]) 
			       & (vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(2U) 
					    + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos])) 
			      | ((vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					    - (IData)(3U)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos]) 
				 & (vlTOPp->tictactoe__DOT__board
				    [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					      - (IData)(6U)))] 
				    == vlTOPp->tictactoe__DOT__board
				    [vlTOPp->tictactoe__DOT__board_pos]))) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(2U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					     - (IData)(4U)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    } else {
			if ((((vlTOPp->tictactoe__DOT__board
			       [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					 - (IData)(1U)))] 
			       == vlTOPp->tictactoe__DOT__board
			       [vlTOPp->tictactoe__DOT__board_pos]) 
			      & (vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(2U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos])) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(3U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(3U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
			if ((((((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(1U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(1U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])) 
			       | ((vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					     - (IData)(3U)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos]) 
				  & (vlTOPp->tictactoe__DOT__board
				     [(0xfU & ((IData)(3U) 
					       + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				     == vlTOPp->tictactoe__DOT__board
				     [vlTOPp->tictactoe__DOT__board_pos]))) 
			      | ((vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					    - (IData)(4U)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos]) 
				 & (vlTOPp->tictactoe__DOT__board
				    [(0xfU & ((IData)(4U) 
					      + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				    == vlTOPp->tictactoe__DOT__board
				    [vlTOPp->tictactoe__DOT__board_pos]))) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(2U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(2U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    } else {
			if ((((vlTOPp->tictactoe__DOT__board
			       [(0xfU & ((IData)(1U) 
					 + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
			       == vlTOPp->tictactoe__DOT__board
			       [vlTOPp->tictactoe__DOT__board_pos]) 
			      & (vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(2U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos])) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					   - (IData)(3U)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(3U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    }
		}
	    } else {
		if ((2U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
		    if ((1U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
			if (((((vlTOPp->tictactoe__DOT__board
				[(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					  - (IData)(1U)))] 
				== vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos]) 
			       & (vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					    - (IData)(2U)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos])) 
			      | ((vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(3U) 
					    + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos]) 
				 & (vlTOPp->tictactoe__DOT__board
				    [(0xfU & ((IData)(6U) 
					      + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				    == vlTOPp->tictactoe__DOT__board
				    [vlTOPp->tictactoe__DOT__board_pos]))) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(2U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(4U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    } else {
			if ((((vlTOPp->tictactoe__DOT__board
			       [(0xfU & ((IData)(vlTOPp->tictactoe__DOT__board_pos) 
					 - (IData)(1U)))] 
			       == vlTOPp->tictactoe__DOT__board
			       [vlTOPp->tictactoe__DOT__board_pos]) 
			      & (vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(1U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos])) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(3U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(6U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->tictactoe__DOT__board_pos))) {
			if (((((vlTOPp->tictactoe__DOT__board
				[(0xfU & ((IData)(1U) 
					  + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				== vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos]) 
			       & (vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(2U) 
					    + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos])) 
			      | ((vlTOPp->tictactoe__DOT__board
				  [(0xfU & ((IData)(3U) 
					    + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				  == vlTOPp->tictactoe__DOT__board
				  [vlTOPp->tictactoe__DOT__board_pos]) 
				 & (vlTOPp->tictactoe__DOT__board
				    [(0xfU & ((IData)(6U) 
					      + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				    == vlTOPp->tictactoe__DOT__board
				    [vlTOPp->tictactoe__DOT__board_pos]))) 
			     | ((vlTOPp->tictactoe__DOT__board
				 [(0xfU & ((IData)(4U) 
					   + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				 == vlTOPp->tictactoe__DOT__board
				 [vlTOPp->tictactoe__DOT__board_pos]) 
				& (vlTOPp->tictactoe__DOT__board
				   [(0xfU & ((IData)(8U) 
					     + (IData)(vlTOPp->tictactoe__DOT__board_pos)))] 
				   == vlTOPp->tictactoe__DOT__board
				   [vlTOPp->tictactoe__DOT__board_pos])))) {
			    vlTOPp->tictactoe__DOT__won_condition = 1U;
			    vlTOPp->__Vdly__tictactoe__DOT__winner 
				= vlTOPp->tictactoe__DOT__board
				[vlTOPp->tictactoe__DOT__board_pos];
			}
		    } else {
			vlTOPp->tictactoe__DOT__won_condition = 0U;
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void Vtictactoe::_sequent__TOP__7(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_sequent__TOP__7\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v9,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v10,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v11,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v12,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v13,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v14,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v15,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v16,14,0);
    VL_SIG16(__Vdlyvval__tictactoe__DOT__board_record__v17,14,0);
    // Body
    // ALWAYS at ../xo//../xo/tictactoe.v:257
    if (vlTOPp->rst) {
	vlTOPp->tictactoe__DOT__won_condition = 0U;
	vlTOPp->tictactoe__DOT__board[0U] = 0U;
	vlTOPp->tictactoe__DOT__unnamedblk1__DOT__i = 0xaU;
	vlTOPp->__Vdly__tictactoe__DOT__board_address = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__sign_address = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__win_address = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__won_address = 0U;
	vlTOPp->tictactoe__DOT__board[1U] = 0U;
	vlTOPp->__Vdly__tictactoe__DOT__winner = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v0 = 1U;
	vlTOPp->tictactoe__DOT__board[2U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v1 = 1U;
	vlTOPp->tictactoe__DOT__board[3U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v2 = 1U;
	vlTOPp->tictactoe__DOT__board[4U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v3 = 1U;
	vlTOPp->tictactoe__DOT__board[5U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v4 = 1U;
	vlTOPp->tictactoe__DOT__board[6U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v5 = 1U;
	vlTOPp->tictactoe__DOT__board[7U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v6 = 1U;
	vlTOPp->tictactoe__DOT__board[8U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v7 = 1U;
	vlTOPp->tictactoe__DOT__board[9U] = 0U;
	vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v8 = 1U;
    } else {
	if (vlTOPp->tictactoe__DOT__draw) {
	    vlTOPp->red = 0U;
	    vlTOPp->green = 0U;
	    vlTOPp->blue = 0U;
	    if (((((0x64U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		   & (0xfaU > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		  & (0xe1U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		 & (0x177U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__color_selector) 
				     * (1U & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
					      >> 2U))));
		vlTOPp->__Vdly__tictactoe__DOT__selector 
		    = vlTOPp->tictactoe__DOT__winner;
		vlTOPp->__Vdly__tictactoe__DOT__sign_address 
		    = vlTOPp->tictactoe__DOT__win_address;
		vlTOPp->green = (7U & ((IData)(7U) 
				       * (1U & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						>> 1U))));
		vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__color_selector) 
				      * (1U & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
		vlTOPp->__Vdly__tictactoe__DOT__win_address 
		    = (0x7fffU & ((0x57e3U == (IData)(vlTOPp->tictactoe__DOT__win_address))
				   ? 0U : ((IData)(1U) 
					   + (IData)(vlTOPp->tictactoe__DOT__win_address))));
	    }
	    if (((((0xfaU <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		   & (0x2bcU > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		  & (0xe1U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		 & (0x177U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__color_selector) 
				     * (1U & ((IData)(vlTOPp->tictactoe__DOT__image_won) 
					      >> 2U))));
		vlTOPp->__Vdly__tictactoe__DOT__won_address 
		    = vlTOPp->tictactoe__DOT__won_word;
		vlTOPp->green = (7U & ((IData)(7U) 
				       * (1U & ((IData)(vlTOPp->tictactoe__DOT__image_won) 
						>> 1U))));
		vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__color_selector) 
				      * (1U & (IData)(vlTOPp->tictactoe__DOT__image_won))));
		vlTOPp->__Vdly__tictactoe__DOT__won_word 
		    = (0x1ffffU & ((0x107abU == vlTOPp->tictactoe__DOT__won_word)
				    ? 0U : ((IData)(1U) 
					    + vlTOPp->tictactoe__DOT__won_word)));
	    }
	} else {
	    if (((0x320U > (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		 & (0x258U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		vlTOPp->__Vdly__tictactoe__DOT__board_address 
		    = (0x7ffffU & ((IData)(1U) + vlTOPp->tictactoe__DOT__board_address));
		vlTOPp->red = (7U & ((IData)(7U) * 
				     (1U & ((IData)(vlTOPp->tictactoe__DOT__image_pixel) 
					    >> 2U))));
		vlTOPp->green = (1U & ((IData)(vlTOPp->tictactoe__DOT__image_pixel) 
				       >> 1U));
		vlTOPp->blue = (1U & (IData)(vlTOPp->tictactoe__DOT__image_pixel));
		if (((((0x3cU <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0xd2U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x28U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0xbeU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [1U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [0U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v9 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [0U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [0U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v9 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [1U];
		    }
		}
		if (((((0x136U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x1ccU > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x28U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0xbeU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [2U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [1U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v10 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [1U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [1U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v10 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [2U];
		    }
		}
		if (((((0x230U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x2c6U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x28U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0xbeU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [3U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [2U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v11 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [2U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [2U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v11 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [3U];
		    }
		}
		if (((((0x3cU <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0xd2U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0xdcU <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x172U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [4U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [3U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v12 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [3U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [3U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v12 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [4U];
		    }
		}
		if (((((0x136U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x1ccU > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0xdcU <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x172U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [5U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [4U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v13 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [4U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [4U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v13 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [5U];
		    }
		}
		if (((((0x230U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x2c6U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0xdcU <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x172U > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [6U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [5U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v14 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [5U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [5U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v14 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [6U];
		    }
		}
		if (((((0x3cU <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0xd2U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x1b8U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x24eU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [7U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [6U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v15 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [6U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [6U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v15 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [7U];
		    }
		}
		if (((((0x136U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x1ccU > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x1b8U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x24eU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [8U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [7U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v16 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [7U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [7U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v16 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [8U];
		    }
		}
		if (((((0x230U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
		       & (0x2c6U > (IData)(vlTOPp->tictactoe__DOT__hcount))) 
		      & (0x1b8U <= (IData)(vlTOPp->tictactoe__DOT__vcount))) 
		     & (0x24eU > (IData)(vlTOPp->tictactoe__DOT__vcount)))) {
		    if ((0U != vlTOPp->tictactoe__DOT__board
			 [9U])) {
			vlTOPp->red = (7U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					     * (1U 
						& ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						   >> 2U))));
			vlTOPp->__Vdly__tictactoe__DOT__sign_address 
			    = vlTOPp->tictactoe__DOT__board_record
			    [8U];
			vlTOPp->green = (7U & ((IData)(7U) 
					       * (1U 
						  & ((IData)(vlTOPp->tictactoe__DOT__image_pixel_x) 
						     >> 1U))));
			vlTOPp->blue = (3U & ((IData)(vlTOPp->tictactoe__DOT__selector) 
					      * (1U 
						 & (IData)(vlTOPp->tictactoe__DOT__image_pixel_x))));
			__Vdlyvval__tictactoe__DOT__board_record__v17 
			    = (0x7fffU & ((0x57e3U 
					   == vlTOPp->tictactoe__DOT__board_record
					   [8U]) ? 0U
					   : ((IData)(1U) 
					      + vlTOPp->tictactoe__DOT__board_record
					      [8U])));
			vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v17 = 1U;
			vlTOPp->__Vdly__tictactoe__DOT__selector 
			    = vlTOPp->tictactoe__DOT__board
			    [9U];
		    }
		}
	    } else {
		vlTOPp->red = 0U;
		vlTOPp->green = 0U;
		vlTOPp->blue = 0U;
	    }
	}
    }
    vlTOPp->tictactoe__DOT__flip_ram = vlTOPp->__Vdly__tictactoe__DOT__flip_ram;
    vlTOPp->tictactoe__DOT__board_pos = vlTOPp->tictactoe__DOT__numb__DOT__r_LFSR;
    vlTOPp->tictactoe__DOT__win_address = vlTOPp->__Vdly__tictactoe__DOT__win_address;
    vlTOPp->tictactoe__DOT__won_word = vlTOPp->__Vdly__tictactoe__DOT__won_word;
    vlTOPp->tictactoe__DOT__won_address = vlTOPp->__Vdly__tictactoe__DOT__won_address;
    vlTOPp->tictactoe__DOT__board_address = vlTOPp->__Vdly__tictactoe__DOT__board_address;
    vlTOPp->tictactoe__DOT__selector = vlTOPp->__Vdly__tictactoe__DOT__selector;
    vlTOPp->tictactoe__DOT__sign_address = vlTOPp->__Vdly__tictactoe__DOT__sign_address;
    vlTOPp->tictactoe__DOT__hcount = vlTOPp->__Vdly__tictactoe__DOT__hcount;
    vlTOPp->tictactoe__DOT__vcount = vlTOPp->__Vdly__tictactoe__DOT__vcount;
    // ALWAYSPOST at ../xo//../xo/tictactoe.v:268
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v0) {
	vlTOPp->tictactoe__DOT__board_record[1U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v1) {
	vlTOPp->tictactoe__DOT__board_record[2U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v2) {
	vlTOPp->tictactoe__DOT__board_record[3U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v3) {
	vlTOPp->tictactoe__DOT__board_record[4U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v4) {
	vlTOPp->tictactoe__DOT__board_record[5U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v5) {
	vlTOPp->tictactoe__DOT__board_record[6U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v6) {
	vlTOPp->tictactoe__DOT__board_record[7U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v7) {
	vlTOPp->tictactoe__DOT__board_record[8U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v8) {
	vlTOPp->tictactoe__DOT__board_record[0U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v9) {
	vlTOPp->tictactoe__DOT__board_record[0U] = __Vdlyvval__tictactoe__DOT__board_record__v9;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v10) {
	vlTOPp->tictactoe__DOT__board_record[1U] = __Vdlyvval__tictactoe__DOT__board_record__v10;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v11) {
	vlTOPp->tictactoe__DOT__board_record[2U] = __Vdlyvval__tictactoe__DOT__board_record__v11;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v12) {
	vlTOPp->tictactoe__DOT__board_record[3U] = __Vdlyvval__tictactoe__DOT__board_record__v12;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v13) {
	vlTOPp->tictactoe__DOT__board_record[4U] = __Vdlyvval__tictactoe__DOT__board_record__v13;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v14) {
	vlTOPp->tictactoe__DOT__board_record[5U] = __Vdlyvval__tictactoe__DOT__board_record__v14;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v15) {
	vlTOPp->tictactoe__DOT__board_record[6U] = __Vdlyvval__tictactoe__DOT__board_record__v15;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v16) {
	vlTOPp->tictactoe__DOT__board_record[7U] = __Vdlyvval__tictactoe__DOT__board_record__v16;
    }
    if (vlTOPp->__Vdlyvset__tictactoe__DOT__board_record__v17) {
	vlTOPp->tictactoe__DOT__board_record[8U] = __Vdlyvval__tictactoe__DOT__board_record__v17;
    }
    // ALWAYS at ../xo//rom_won.v:8
    vlTOPp->tictactoe__DOT__image_won = ((0x107abU 
					  >= vlTOPp->tictactoe__DOT__won_address)
					  ? vlTOPp->tictactoe__DOT__data3__DOT__rom_content
					 [vlTOPp->tictactoe__DOT__won_address]
					  : 0U);
    // ALWAYS at ../xo//rom_board.v:8
    vlTOPp->tictactoe__DOT__image_pixel = ((0x752ffU 
					    >= vlTOPp->tictactoe__DOT__board_address)
					    ? vlTOPp->tictactoe__DOT__data__DOT__rom_content
					   [vlTOPp->tictactoe__DOT__board_address]
					    : 0U);
    // ALWAYS at ../xo//rom_master.v:12
    vlTOPp->tictactoe__DOT__image_pixel_x = ((1U == (IData)(vlTOPp->tictactoe__DOT__selector))
					      ? ((0x57e3U 
						  >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
						  ? 
						 vlTOPp->tictactoe__DOT__data2__DOT__dat__DOT__rom_content
						 [vlTOPp->tictactoe__DOT__sign_address]
						  : 0U)
					      : ((0x57e3U 
						  >= (IData)(vlTOPp->tictactoe__DOT__sign_address))
						  ? 
						 vlTOPp->tictactoe__DOT__data2__DOT__dat2__DOT__rom_content
						 [vlTOPp->tictactoe__DOT__sign_address]
						  : 0U));
    // ALWAYS at ../xo//../xo/tictactoe.v:122
    vlTOPp->vsync = (1U & (~ ((0x259U <= (IData)(vlTOPp->tictactoe__DOT__vcount)) 
			      & (0x25dU > (IData)(vlTOPp->tictactoe__DOT__vcount)))));
    vlTOPp->hsync = (1U & (~ ((0x348U <= (IData)(vlTOPp->tictactoe__DOT__hcount)) 
			      & (0x3c8U > (IData)(vlTOPp->tictactoe__DOT__hcount)))));
}

VL_INLINE_OPT void Vtictactoe::_sequent__TOP__8(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_sequent__TOP__8\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tictactoe__DOT__winner = vlTOPp->__Vdly__tictactoe__DOT__winner;
}

void Vtictactoe::_eval(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_eval\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->tictactoe__DOT__enable) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__tictactoe__DOT__enable))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->tictactoe__DOT__enable) & 
	 (~ (IData)(vlTOPp->__Vclklast__TOP__tictactoe__DOT__enable)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->tictactoe__DOT__enable) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__tictactoe__DOT__enable))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__tictactoe__DOT__enable 
	= vlTOPp->tictactoe__DOT__enable;
}

void Vtictactoe::_eval_initial(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_eval_initial\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vtictactoe::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::final\n"); );
    // Variables
    Vtictactoe__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtictactoe::_eval_settle(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_eval_settle\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtictactoe::_change_request(Vtictactoe__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_change_request\n"); );
    Vtictactoe* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtictactoe::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((rst & 0xfeU))) {
	Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG

void Vtictactoe::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtictactoe::_ctor_var_reset\n"); );
    // Body
    rst = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    hsync = VL_RAND_RESET_I(1);
    vsync = VL_RAND_RESET_I(1);
    red = VL_RAND_RESET_I(3);
    green = VL_RAND_RESET_I(3);
    blue = VL_RAND_RESET_I(2);
    tictactoe__DOT__hcount = VL_RAND_RESET_I(11);
    tictactoe__DOT__vcount = VL_RAND_RESET_I(10);
    tictactoe__DOT__board_address = VL_RAND_RESET_I(19);
    tictactoe__DOT__sign_address = VL_RAND_RESET_I(15);
    tictactoe__DOT__win_address = VL_RAND_RESET_I(15);
    tictactoe__DOT__won_address = VL_RAND_RESET_I(17);
    tictactoe__DOT__won_word = VL_RAND_RESET_I(17);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    tictactoe__DOT__board[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
	    tictactoe__DOT__board_record[__Vi0] = VL_RAND_RESET_I(15);
    }}
    tictactoe__DOT__flip_ram = VL_RAND_RESET_I(4);
    tictactoe__DOT__flip = VL_RAND_RESET_I(1);
    tictactoe__DOT__selector = VL_RAND_RESET_I(2);
    tictactoe__DOT__color_selector = VL_RAND_RESET_I(8);
    tictactoe__DOT__counter = VL_RAND_RESET_I(27);
    tictactoe__DOT__image_pixel = VL_RAND_RESET_I(4);
    tictactoe__DOT__image_pixel_x = VL_RAND_RESET_I(4);
    tictactoe__DOT__image_won = VL_RAND_RESET_I(4);
    tictactoe__DOT__board_pos = VL_RAND_RESET_I(4);
    tictactoe__DOT__enable = VL_RAND_RESET_I(1);
    tictactoe__DOT__getRandom = VL_RAND_RESET_I(1);
    tictactoe__DOT__won_condition = VL_RAND_RESET_I(1);
    tictactoe__DOT__winner = VL_RAND_RESET_I(2);
    tictactoe__DOT__draw = VL_RAND_RESET_I(1);
    tictactoe__DOT__unnamedblk1__DOT__i = 0;
    { int __Vi0=0; for (; __Vi0<480000; ++__Vi0) {
	    tictactoe__DOT__data__DOT__rom_content[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<22500; ++__Vi0) {
	    tictactoe__DOT__data2__DOT__dat__DOT__rom_content[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<22500; ++__Vi0) {
	    tictactoe__DOT__data2__DOT__dat2__DOT__rom_content[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<67500; ++__Vi0) {
	    tictactoe__DOT__data3__DOT__rom_content[__Vi0] = VL_RAND_RESET_I(4);
    }}
    tictactoe__DOT__numb__DOT__r_LFSR = VL_RAND_RESET_I(4);
    tictactoe__DOT__numb__DOT__r_XNOR = VL_RAND_RESET_I(1);
    __Vdly__tictactoe__DOT__hcount = VL_RAND_RESET_I(11);
    __Vdly__tictactoe__DOT__vcount = VL_RAND_RESET_I(10);
    __Vdly__tictactoe__DOT__flip_ram = VL_RAND_RESET_I(4);
    __Vdly__tictactoe__DOT__board_address = VL_RAND_RESET_I(19);
    __Vdly__tictactoe__DOT__sign_address = VL_RAND_RESET_I(15);
    __Vdly__tictactoe__DOT__win_address = VL_RAND_RESET_I(15);
    __Vdly__tictactoe__DOT__won_address = VL_RAND_RESET_I(17);
    __Vdly__tictactoe__DOT__winner = VL_RAND_RESET_I(2);
    __Vdlyvset__tictactoe__DOT__board_record__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v1 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v2 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v3 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v4 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v5 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v6 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v7 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v8 = VL_RAND_RESET_I(1);
    __Vdly__tictactoe__DOT__selector = VL_RAND_RESET_I(2);
    __Vdly__tictactoe__DOT__won_word = VL_RAND_RESET_I(17);
    __Vdlyvset__tictactoe__DOT__board_record__v9 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v10 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v11 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v12 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v13 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v14 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v15 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v16 = VL_RAND_RESET_I(1);
    __Vdlyvset__tictactoe__DOT__board_record__v17 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__tictactoe__DOT__enable = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
