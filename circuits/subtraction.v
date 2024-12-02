// subtraction.v
module subtraction (
    input wire [3:0] a,
    input wire [3:0] b,
    input wire carry_in,
    output wire [3:0] difference,
    output wire carry_out
);
    assign {carry_out, difference} = a - b - {3'b000, carry_in};  // Extend carry_in to 4 bits
endmodule
