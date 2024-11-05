module f1_fsm (
    input   logic       rst,
    input   logic       en,
    input   logic       clk,
    output  logic [7:0] data_out
);

    typedef enum { S0, S1, S2, S3, S4, S5, S6, S7, S8, S9 } f1_states;
    f1_states state, next_state;
    logic cmd_seq, cmd_delay, clkEn, delayEn;

    always_ff @(posedge clk or posedge rst) begin
        cmd_delay <= 0;
        cmd_seq <= 0;
        if (rst)
            state <= S0;
        else if (en) begin
            if (state == S8) begin
                cmd_delay <= 1;
                state <= next_state;
        end
            if (state == S9) begin
                if (delayEn)
                    state <= next_state;
            end
            else begin 
                cmd_seq <= 1;
                if (clkEn)
                    state <= next_state;
            end
        end
    end

    always_comb 
        case (state)
            S0 : data_out = 8'b00000000; 
            S1 : data_out = 8'b00000001;
            S2 : data_out = 8'b00000011;
            S3 : data_out = 8'b00000111;
            S4 : data_out = 8'b00001111;
            S5 : data_out = 8'b00011111;
            S6 : data_out = 8'b00111111;
            S7 : data_out = 8'b01111111;
            S8 : data_out = 8'b11111111;
            S9 : data_out = 8'b11111111;
            default : data_out = 8'b00000000;
        endcase


    always_comb begin
        case (state)
            S0 : next_state = S1;
            S1 : next_state = S2;
            S2 : next_state = S3;
            S3 : next_state = S4;
            S4 : next_state = S5;
            S5 : next_state = S6;
            S6 : next_state = S7;
            S7 : next_state = S8;
            S8 : next_state = S9;
            S9 : next_state = S0;
            default : next_state = S0;
        endcase
    end

clktick clocktick (
    .clk(clk),
    .rst(rst),
    .N(47),
    .en(cmd_seq),
    .tick(clkEn)
);

delay randdelay (
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .time_out(delayEn)
);

endmodule
