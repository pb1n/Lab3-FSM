module f1_fsm (
    input logic clk,
    input logic en,
    input logic rst,
    output logic[7:0] dout
);

always_ff @(posedge clk, posedge rst)
if(rst) dout <= 7'b0;
else begin
    if(en) dout <= dout == 255 ? 0 : {dout[6:0], 1'b1};
    else dout <= dout;
end
endmodule
