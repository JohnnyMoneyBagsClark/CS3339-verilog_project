// multiplication.v
module multiplication (
    input wire [3:0] a,
    input wire [3:0] b,
    output wire [7:0] product  // 8-bit product for multiplication
);
    assign product = a * b;
endmodule
