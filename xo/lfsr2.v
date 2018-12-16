//-----------------------------------------------------
// Design Name : lfsr
// File Name   : lfsr.v
// Function    : Linear feedback shift register
// Coder       : Deepak Kumar Tala
//-----------------------------------------------------
module lfsr    (
    output reg[3:0] out,    // Output of the counter
    input enable,           // Enable  for counter
    input clk,              // clock input
    input reset              // reset input
);

wire        linear_feedback;
//-------------Code Starts Here-------
assign linear_feedback =  ! (out[3] ^ out[0]);
 
always @(posedge clk)
    if (reset) // active high reset
        out <= 4'd0; 
    else 
        if (enable) begin
            if(out[2] && (out[1]|| out[0]))
                out<={1'd0,(out[3] || out[0]),(out[3] && out[2]),(out[3]^out[1])};
            else
                out<={out[2],out[0],out[1],linear_feedback};
        end
 
endmodule // End Of Module counter