module counter 
#(parameter WIDTH = 8)
(input logic clk,
input logic rst,
input logic en,
output logic [WIDTH-1:0] count);

always_ff @ (posedge clk)
    if (rst) count <= {WIDTH{1'b0}};
    else count <= count + {{WIDTH - 1{1'b0}}, (en + en - 1)}; // 'en' decides whether to "+1", '{WIDTH - 1{1'b0}}' used to complement the neede bits

endmodule
