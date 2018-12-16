module rom_x(
  input [14:0] address,
  output reg [3:0] data
);

reg [3:0] rom_content[0:22499];

always @ (*)
  data = rom_content[address];

initial begin
    $readmemh("/home/furycoder/Documentos/DSL/ProyectoX0_simulation/xo/images/tictactoe_x.mif",rom_content,0,22499);
end

endmodule 