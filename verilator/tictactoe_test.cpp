#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <verilated.h>          // Defines common routines
#include "vga_display.h"
#include "Vtictactoe.h"

#include "verilated_vcd_c.h"


Vtictactoe *uut;                     // Instantiation of module
vluint64_t main_time = 0;       // Current simulation time

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;           // converts to double, to match
    // what SystemC does
}

int main(int argc, char** argv)
{
    //VGA stuff
    int last_clock = 0, last_hsync, last_vsync;
    
    // turn on trace or not?
    bool vcdTrace = false;
    VerilatedVcdC* tfp = NULL;

    if (vga_create_screen() != 0) 
        return 1;
    
    Verilated::commandArgs(argc, argv);   // Remember args
    uut = new Vtictactoe;   // Create instance

    if (vcdTrace) {
        Verilated::traceEverOn(true);

        tfp = new VerilatedVcdC;
        uut->trace(tfp, 99);

        std::string vcdname = argv[0];
        vcdname += ".vcd";
        std::cout << vcdname << std::endl;
        tfp->open(vcdname.c_str());
    }

    uut->clk = 0;
    uut->rst = 0;
    uut->eval();
    
    uut->rst = 1;
    uut->eval();

    last_hsync = uut->hsync;
    last_vsync = uut->vsync;
    uut->rst = 0;    

    while (!Verilated::gotFinish())
    {
        main_time++;
        
        uut->clk = !uut->clk;
        uut->eval();
        
        if (uut->clk == 1) {
            vga_clock_pulse();
            vga_update_display(uut->red, uut->green, uut->blue);
        }
        
        //Check for hsync pulse
        if (last_hsync != uut->hsync) {
            if ((last_hsync == 1) && (uut->hsync == 0)) //Negative pulse
                vga_hsync_pulse();
            
            last_hsync = uut->hsync;
        }
        
        //Check for vsync pulse
        if (last_vsync != uut->vsync) {
            if ((last_vsync == 1) && (uut->vsync == 0)) //Negative pulse
                vga_vsync_pulse();
            
            last_vsync = uut->vsync;
        }

        if (tfp != NULL) {
            tfp->dump (main_time);
        }
 
        if (vga_screen_closed())
            break;
    }

    uut->final();               // Done simulating

    if (tfp != NULL)
    {
        tfp->close();
        delete tfp;
    }

    vga_finish();
    delete uut;

    return 0;
}
