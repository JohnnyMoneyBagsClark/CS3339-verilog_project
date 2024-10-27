// subtraction.v

module subtraction (
    input wire [3:0] a,
    input wire [3:0] b,
    output wire [3:0] diff,
    output wire borrow_out
);
    assign {borrow_out, diff} = a - b; // 4-bit subtraction with borrow
endmodule
