module alu (
    input wire [3:0] a,
    input wire [3:0] b,
    input wire [3:0] op_code,
    input wire carry_in,
    output reg [3:0] result,
    output reg carry_out = 0
);
    wire [3:0] add_out, sub_out, div_out, div_rem;
    wire [3:0] and_out, or_out, xor_out, nand_out, nor_out, xnor_out;
    wire [7:0] mul_out;  // 8-bit result for multiplication
    wire [3:0] unused_mul_bits;  // Dummy wire for unused bits
    wire add_carry, sub_carry;

    // Assign unused higher bits of mul_out
    assign unused_mul_bits = mul_out[7:4];  // Explicitly assign unused bits

    // Arithmetic modules
    addition add(.a(a), .b(b), .carry_in(carry_in), .sum(add_out), .carry_out(add_carry));
    subtraction sub(.a(a), .b(b), .carry_in(carry_in), .difference(sub_out), .carry_out(sub_carry));
    multiplication mul(.a(a), .b(b), .product(mul_out));
    division div(.numerator(a), .denominator(b), .quotient(div_out), .remainder(div_rem));

    // Logic modules
    and_gate and_gate_instance(.a(a), .b(b), .y(and_out));
    or_gate or_gate_instance(.a(a), .b(b), .y(or_out));
    xor_gate xor_gate_instance(.a(a), .b(b), .y(xor_out));
    nand_gate nand_gate_instance(.a(a), .b(b), .y(nand_out));
    nor_gate nor_gate_instance(.a(a), .b(b), .y(nor_out));
    xnor_gate xnor_gate_instance(.a(a), .b(b), .y(xnor_out));

    always @(*) begin
        carry_out = 0;
        case (op_code[3:2])
            2'b00:
                case (op_code[1:0])
                    2'b00: {carry_out, result} = {add_carry, add_out};
                    2'b01: {carry_out, result} = {sub_carry, sub_out};
                    2'b10: result = mul_out[3:0];  // Using only lower 4 bits
                    2'b11: result = div_out;
                endcase
            2'b01:
                case (op_code[1:0])
                    2'b00: result = and_out;
                    2'b01: result = or_out;
                    2'b10: result = xor_out;
                    2'b11: result = nand_out;
                endcase
            2'b10:
                case (op_code[1:0])
                    2'b00: result = nor_out;
                    2'b01: result = xnor_out;
                    2'b10: result = div_rem;
                    2'b11: result = 4'b0000;  // Placeholder for unused operation
                endcase
            default: result = 4'b0000;  // Safety default
        endcase
    end
endmodule
