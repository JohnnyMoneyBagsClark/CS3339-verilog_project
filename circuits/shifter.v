// shifter.v

module shifter (
    input wire [3:0] a,
    input wire [1:0] shift, // Shift amount (0 to 3)
    output wire [3:0] left_shift,
    output wire [3:0] right_shift
);
    assign left_shift = a << shift;
    assign right_shift = a >> shift;
endmodule
