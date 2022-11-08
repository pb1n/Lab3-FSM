module lfsr4 (
    input logic         clk,        // clock
    input logic         rst,        // reset
    input logic         en,         // enable
    output logic [4:1]  data_out    // psuedo-random output
);

logic [4:1] sreg;

always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 4'b1;
    else
        sreg <= en ? {sreg[3:1], (sreg[3] & sreg[4]) ^ sreg[3]} : sreg;

assign data_out = sreg;
endmodule
