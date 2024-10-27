// and_gate.v

module and_gate (
    input wire [3:0] a,
    input wire [3:0] b,
    output wire [3:0] y
);
    assign y = a & b; // 4-bit AND operation
endmodule
