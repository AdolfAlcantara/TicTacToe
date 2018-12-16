module VGA_Test(
    input rst,
    input clk, //40MHz
    output reg hsync,
    output reg vsync,
    output reg [2:0] red,
    output reg [2:0] green,
    output reg [1:0] blue
);

    reg [10:0] hcount;
    reg [9:0] vcount;

    //every 25ns (1/40,000,000 of a second)
    always @(posedge clk ) begin
        if (hcount == 11'd1055) begin
            hcount <= 11'd0;
            if (vcount == 10'd627)
                vcount <= 10'd0;
            else
                vcount <= vcount + 10'd1;
        end
        else
            hcount <= hcount + 11'd1;
    end
    
    always @(*) begin
        if (vcount >= 10'd601 && vcount < 10'd605)
            vsync = 10'd0;
        else
            vsync = 10'd1;
    
        if (hcount >= 11'd840 && hcount < 11'd968)
            hsync = 11'd0;
        else
            hsync = 11'd1;
    end
    
    always @(*) begin
        if (hcount < 11'd800 && vcount < 10'd640) begin
            if (hcount%11'd2 == 11'd0)
                {red,green,blue} = {3'd0,3'd0,2'd3};
            else
                {red,green,blue} = {3'd7,3'd0,2'd0};
        end
		  else
				{red,green,blue} = {3'd0,3'd0,2'd0};
    end

endmodule