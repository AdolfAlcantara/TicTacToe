module lfsr_sup
  (
   input i_Clk,
   input i_Enable,
 
   // Optional Seed Value
   input i_Seed_DV,
   input [3:0] i_Seed_Data,
 
   output [3:0] o_LFSR_Data
  //  output o_LFSR_Done
   );
 
  reg [4:1] r_LFSR = 0;
  reg              r_XNOR;
 
 
  // Purpose: Load up LFSR with Seed if Data Valid (DV) pulse is detected.
  // Othewise just run LFSR when enabled.
  always @(posedge i_Clk)
    begin
      if (i_Enable == 1'b1)
        begin
          if (i_Seed_DV == 1'b1)
            r_LFSR <= i_Seed_Data;
          else
            r_LFSR <= {r_LFSR[4-1:1], r_XNOR};
        end
    end
 
  // Create Feedback Polynomials.  Based on Application Note:
  // http://www.xilinx.com/support/documentation/application_notes/xapp052.pdf
  always @(*)
    begin
      r_XNOR = r_LFSR[4] ^~ r_LFSR[3];
    end // always @ (*)
 
 
  assign o_LFSR_Data = r_LFSR[4:1];
 
  // // Conditional Assignment (?)
  // assign o_LFSR_Done = (r_LFSR[4:1] == i_Seed_Data) ? 1'b1 : 1'b0;
 
endmodule // LFSR