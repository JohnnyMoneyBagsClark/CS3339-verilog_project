// division.v
module division (
    input wire [3:0] numerator,
    input wire [3:0] denominator,
    output wire [3:0] quotient,
    output wire [3:0] remainder
);
    assign quotient = denominator != 0 ? numerator / denominator : 0;
    assign remainder = denominator != 0 ? numerator % denominator : 0;
endmodule
