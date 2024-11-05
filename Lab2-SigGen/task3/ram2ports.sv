module ram2ports #(
    parameter   A_WIDTH = 9,
                D_WIDTH = 8
)(
    input logic clk,
    input logic ren,
    input logic wen,
    input logic [A_WIDTH-1:0] wr_addr,
    input logic [A_WIDTH-1:0] re_addr,
    input logic [D_WIDTH-1:0] din,
    output logic [D_WIDTH-1:0] dout,
);

logic [D_WIDTH-1:0] ram_array [2**A_WIDTH-1:0];

always_ff @(posedge clk) begin
    if (wen) ram_array[wr_addr] <= din;
    if (ren) dout <= ram_array[re_addr];
end

endmodule