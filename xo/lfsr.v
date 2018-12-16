module test(
    input clk,
    input enable,
    output reg[3:0] out
);
    reg [3:0]rand_numb;

    always @(posedge clk ) begin
      if (enable) begin
        rand_numb <= $urandom%9;
        out = rand_numb; 
      end
      else
        out = rand_numb;
    end
endmodule