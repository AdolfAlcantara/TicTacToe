module rom_board(
  input [18:0] address,
  output reg [3:0] data
);

reg [3:0] rom_content[0:479999];

always @ (*)
  data = rom_content[address];

initial begin
    $readmemh("/home/furycoder/Documentos/DSL/ProyectoX0_simulation/xo/images/tictactoe_board.mif",rom_content,0,479999);
end

endmodule 