module rom_master(
  input [14:0] address,
  input [1:0] selector,
  output reg [3:0] data
);

wire [3:0] info;
wire [3:0] info2;
rom_x dat(address,info);
rom_o dat2(address,info2);

always @ (*)
    if(selector==2'd1)
        data = info;
    else
        data = info2;

endmodule 