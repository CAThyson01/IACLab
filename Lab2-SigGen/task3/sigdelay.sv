module sigdelay#(
    parameter WIDTH = 8
)(
    input logic clk,
    input logic rst,
    input logic wr,
    input logic rd,
    input logic [WIDTH:0] offset,
    input logic [WIDTH-1:0] mic_signal,
    output logic [WIDTH-1:0] delayed_signal
);

reg [8:0] write_addr;

counter addrCounter(
    .clk(clk),
    .rst(rst),
    .en(wr),
    .incr(1),
    .count(write_addr)
);

ram2ports delayRam(
    .clk(clk),
    .ren(rd),
    .wen(wr),
    .wr_addr(write_addr),
    .re_addr(write_addr - offset),
    .din(mic_signal),
    .dout(delayed_signal)
);

endmodule