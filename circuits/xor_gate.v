// xor_gate.v
module xor_gate (
    input wire [3:0] a,
    input wire [3:0] b,
    output wire [3:0] y
);
    assign y = a ^ b;  // Perform bitwise XOR operation
endmodule

