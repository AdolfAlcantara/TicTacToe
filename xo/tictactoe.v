module tictactoe(
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
    
    reg [18:0] board_address;   //address for board in rom_board.v
    wire [14:0] sign_address;    //address for signs in rom_x and rom_o\
    reg [14:0] win_address;
    wire [16:0] won_address;
    reg [16:0] won_word;
    
    reg [1:0] board[0:15];             //arreglo unidimensional de las 9 posiciones de la tabla
    reg [14:0] board_record[0:8];

    reg [3:0]flip_ram;
    wire flip;                     //x0 selector
    wire [1:0] selector;                //value stored to know if is x or 0
    wire [7:0] color_selector;

    reg [26:0] counter;         //contador para cada 2 segundos enviar se;al

    wire [3:0] image_pixel;    //data output in rom_unitec_logo.v
    wire [3:0] image_pixel_x;
    wire [3:0] image_won;
    wire [3:0] board_pos;
    wire enable;
    wire getRandom;
    reg won_condition;
    reg [1:0] winner;
    reg draw;
 

    rom_board data(board_address,image_pixel);
    rom_master data2(sign_address,selector,image_pixel_x);
    rom_won data3(won_address,image_won);

    lfsr_sup numb(clk,getRandom,1'd0,4'd0,board_pos);
    //every 25ns (1/40,000,000 of a second)

    always @(posedge clk) begin
        if(rst) begin
            hcount<=11'd0;
            vcount<=10'd0;
            enable=1'd0;
            getRandom=1'd0;
            flip_ram <=4'd2;
            board_pos=4'd0;
            draw=1'd1;
        end
        else begin
            if (hcount == 11'd1055) begin
                hcount <= 11'd0;
            
                if (vcount == 10'd627)
                    vcount <= 10'd0;
                else
                    vcount <= vcount + 10'd1;
            end
            else
                hcount <= hcount + 11'd1;
            
            // for (int i=0;i<9;i=i+1) begin
            //     if(board_record[i] == 15'd22499) begin
            //         $display("board_record[%d]: %d",i,board_record[i]);
            //         board_record[i] <= 15'd0;
            //     end
            // end
            
            if(board_address >= 19'd479999)
                board_address <=19'd0;

            counter <= counter + 27'd1;
            if(won_condition) begin
                getRandom = 1'd0;
                enable=1'd0;
                draw=1'd1;
                if(counter<27'd900000)
                    color_selector = 8'd7;
                if(counter<27'd450000)
                    color_selector = winner;
                if(counter==27'd900000)begin
                    color_selector = 8'd7;
                    counter<=27'd0;
                    
                end
                // $display("counter: %d",counter);
            end
            else begin
                if(counter == 27'd900000) begin;
                    counter <= 27'd0;
                    // $display("counter: %d",counter);
                    getRandom=1'd1;
                    if(board_pos>4'd10||board_pos==4'd0) begin
                        board_pos = (board_pos+4'd11)%10;
                    end
                    if (board[board_pos]==2'd0) begin
                        enable = 1'd1;
                        flip_ram <= flip_ram + 4'd1;
                        // $display("board_pos: %d",board_pos);
                    end
                    $display("board_pos: %d",board_pos);
                    $display("flip ram: %d",flip_ram);
                    $display("getRandom: %d",getRandom);
                end
                else begin
                    getRandom = 1'd0;
                    enable=1'd0;
                end
            end
            // $display("%d",counter);
        end
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

    // always @(enable) begin
    //     if(board_pos < 4'd10) begin
    //         if (board[board_pos]==2'd0) begin
    //             flip_ram<=flip_ram+4'd1;
    //         end
    //         $display("%d",board_pos);
    //     end
    // end

    always @(posedge enable) begin
        
        if(flip_ram%2==0)
            board[board_pos] = 2'd1;
        else
            board[board_pos] = 2'd2;

        if(board_pos<4'd10)
            case(board_pos)
                4'd1:
                begin
                    if(
                        ((board[board_pos+4'd1] == board[board_pos]) && (board[board_pos+4'd2] == board[board_pos]))
                        || (((board[board_pos+4'd3]) == board[board_pos]) && ((board[board_pos+4'd6]) == board[board_pos]))
                        || (((board[board_pos+4'd4]) == board[board_pos]) && ((board[board_pos+4'd8]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd2:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos+4'd1] == board[board_pos]))
                        || (((board[board_pos+4'd3]) == board[board_pos]) && ((board[board_pos+4'd6]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd3:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos-4'd2] == board[board_pos]))
                        || (((board[board_pos+4'd3]) == board[board_pos]) && ((board[board_pos+4'd6]) == board[board_pos]))
                        || (((board[board_pos+4'd2]) == board[board_pos]) && ((board[board_pos+4'd4]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd4:
                begin
                    if(
                        ((board[board_pos+4'd1] == board[board_pos]) && (board[board_pos+4'd2] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos+4'd3]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd5:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos+4'd1] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos+4'd3]) == board[board_pos]))
                        || (((board[board_pos-4'd4]) == board[board_pos]) && ((board[board_pos+4'd4]) == board[board_pos]))
                        || (((board[board_pos-4'd2]) == board[board_pos]) && ((board[board_pos+4'd2]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd6:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos-4'd2] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos+4'd3]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd7:
                begin
                    if(
                        ((board[board_pos+4'd1] == board[board_pos]) && (board[board_pos+4'd2] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos-4'd6]) == board[board_pos]))
                        || (((board[board_pos-4'd2]) == board[board_pos]) && ((board[board_pos-4'd4]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd8:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos+4'd1] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos-4'd6]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                4'd9:
                begin
                    if(
                        ((board[board_pos-4'd1] == board[board_pos]) && (board[board_pos-4'd2] == board[board_pos]))
                        || (((board[board_pos-4'd3]) == board[board_pos]) && ((board[board_pos-4'd6]) == board[board_pos]))
                        || (((board[board_pos-4'd4]) == board[board_pos]) && ((board[board_pos-4'd8]) == board[board_pos]))
                    )begin
                        won_condition = 1'd1;
                        winner <= board[board_pos];
                    end
                end
                default:
                    won_condition = 1'd0;
            endcase
        // $display("board: %d",board[board_pos]);
        // $display("board+1: %d",board[board_pos+4'd1]);    
        // $display("board_pos: %d",board_pos+4'd1);
        // $display("won condition: %d",won_condition);
    end
    
    always @(posedge clk) begin
        if(rst) begin
            board_address <= 19'd0;
            sign_address <= 15'd0;
            win_address <= 15'd0;
            won_address <=17'd0;
            won_condition=1'd0;
            for (int i=0;i<10;i=i+1) begin
                board[i] = 2'd0;
            end
            winner <= 2'd0;
            board_record[1] <= 15'd0;
            board_record[2] <= 15'd0;
            board_record[3] <= 15'd0;
            board_record[4] <= 15'd0;
            board_record[5] <= 15'd0;
            board_record[6] <= 15'd0;
            board_record[7] <= 15'd0;
            board_record[8] <= 15'd0;
            board_record[0] <= 15'd0;
        end
        else begin
            if(draw) begin
                {red,green,blue} = {3'd0,3'd0,2'd0};
                if(hcount >= 11'd100 && hcount<11'd250 && vcount >= 10'd225 && vcount < 10'd375) begin
                    selector <= winner;
                    sign_address <= win_address;
                    red = (color_selector*image_pixel_x[2]);
                    green = (7*image_pixel_x[1]);
                    blue = (color_selector*image_pixel_x[0]);
                    if(win_address == 15'd22499)
                        win_address<=15'd0;
                    else
                        win_address <= win_address + 15'd1;
                end
                if(hcount >= 11'd250 && hcount<11'd700 && vcount >= 10'd225 && vcount < 10'd375) begin
                    won_address <= won_word;
                    red = (color_selector*image_won[2]);
                    green = (7*image_won[1]);
                    blue = (color_selector*image_won[0]);
                    if(won_word == 17'd67499)
                        won_word<=17'd0;
                    else
                        won_word <= won_word + 17'd1;
                end
            end
            else begin
                if (hcount < 11'd800 && vcount < 10'd600) begin
                    red = (7*image_pixel[2]);
                    green = (1*image_pixel[1]);
                    blue = (1*image_pixel[0]);

                    if(hcount >= 11'd60 && hcount<11'd210 && vcount >= 10'd40 && vcount < 10'd190) begin
                        if(board[1]!= 2'd0) begin
                            selector <= board[1];
                            sign_address <= board_record[0];
                            // $display("%d",board_record[0]);
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[0]==15'd22499)
                                board_record[0] <= 15'd0;
                            else    
                                board_record[0] <= board_record[0] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd310 && hcount<11'd460 && vcount >= 10'd40 && vcount < 10'd190) begin
                        if(board[2]!= 2'd0) begin
                            selector <= board[2];
                            sign_address <= board_record[1];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[1]==15'd22499)
                                board_record[1] <= 15'd0;
                            else    
                                board_record[1] <= board_record[1] + 15'd1;
                        end
                    end 
                    if(hcount >= 11'd560 && hcount<11'd710 && vcount >= 10'd40 && vcount < 10'd190) begin
                        if(board[3]!= 2'd0) begin
                            selector <= board[3];
                            sign_address <= board_record[2];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[2]==15'd22499)
                                board_record[2] <= 15'd0;
                            else    
                                board_record[2] <= board_record[2] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd60 && hcount<11'd210 && vcount >= 10'd220 && vcount < 10'd370) begin
                        if(board[4]!= 2'd0) begin
                            selector <= board[4];
                            sign_address <= board_record[3];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[3]==15'd22499)
                                board_record[3] <= 15'd0;
                            else    
                                board_record[3] <= board_record[3] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd310 && hcount<11'd460 && vcount >= 10'd220 && vcount < 10'd370) begin
                        if(board[5]!= 2'd0) begin
                            selector <= board[5];
                            sign_address <= board_record[4];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[4]==15'd22499)
                                board_record[4] <= 15'd0;
                            else    
                                board_record[4] <= board_record[4] + 15'd1;
                    
                        end
                    end
                    if(hcount >= 11'd560 && hcount<11'd710 && vcount >= 10'd220 && vcount < 10'd370) begin
                        if(board[6]!= 2'd0) begin
                            selector <= board[6];
                            sign_address <= board_record[5];
                            // $display("%d",board_record[5]);
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[5]==15'd22499)
                                board_record[5] <= 15'd0;
                            else    
                                board_record[5] <= board_record[5] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd60 && hcount<11'd210 && vcount >= 10'd440 && vcount < 10'd590) begin
                        if(board[7]!= 2'd0) begin
                            selector <= board[7];
                            sign_address <= board_record[6];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[6]==15'd22499)
                                board_record[6] <= 15'd0;
                            else    
                                board_record[6] <= board_record[6] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd310 && hcount<11'd460 && vcount >= 10'd440 && vcount < 10'd590) begin
                        if(board[8]!= 2'd0) begin
                            selector <= board[8];
                            sign_address <= board_record[7];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[7]==15'd22499)
                                board_record[7] <= 15'd0;
                            else    
                                board_record[7] <= board_record[7] + 15'd1;
                        end
                    end
                    if(hcount >= 11'd560 && hcount<11'd710 && vcount >= 10'd440 && vcount < 10'd590) begin
                        if(board[9]!= 2'd0) begin
                            selector <= board[9];
                            sign_address <= board_record[8];
                            red = (selector*image_pixel_x[2]);
                            green = (7*image_pixel_x[1]);
                            blue = (selector*image_pixel_x[0]);
                            if(board_record[8]==15'd22499)
                                board_record[8] <= 15'd0;
                            else    
                                board_record[8] <= board_record[8] + 15'd1;
                        end
                    end
                board_address <= board_address + 19'd1;
                end
                else
                    {red,green,blue} = {3'd0,3'd0,2'd0};
            end
        end
    end

endmodule