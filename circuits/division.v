// division.v

module division (
    input wire [3:0] dividend,
    input wire [3:0] divisor,
    output wire [3:0] quotient,
    output wire [3:0] remainder
);
    assign quotient = dividend / divisor;
    assign remainder = dividend % divisor;
endmodule
