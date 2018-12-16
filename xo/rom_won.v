module rom_won(
  input [16:0] address,
  output reg [3:0] data
);

reg [3:0] rom_content[0:67499];

always @ (*)
  data = rom_content[address];

initial begin
    $readmemh("/home/furycoder/Documentos/DSL/ProyectoX0_simulation/xo/images/won.mif",rom_content,0,67499);
end

endmodule 