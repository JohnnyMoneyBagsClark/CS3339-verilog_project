// alu.v 

module alu (
    input wire [3:0] a,            // First 4-bit operand
    input wire [3:0] b,            // Second 4-bit operand
    input wire [2:0] opcode,       // Operation code (determines function)
    input wire carry_in,           // Carry-in for add/subtract operations
    output reg [3:0] result,       // 4-bit result
    output reg carry_out,          // Carry-out for add/subtract operations
    output reg [3:0] remainder     // Remainder for division operation
);

    // Internal wires to hold outputs of each operation
    wire [3:0] and_out, or_out, xor_out, xnor_out, nand_out, nor_out, not_out;
    wire [3:0] add_out, sub_out, mul_out, div_out;
    wire add_carry_out, sub_borrow_out;
    wire [3:0] left_shift, right_shift;

    // Instantiate each operation module
    and_gate and_inst (.a(a), .b(b), .y(and_out));
    or_gate or_inst (.a(a), .b(b), .y(or_out));
    xor_gate xor_inst (.a(a), .b(b), .y(xor_out));
    xnor_gate xnor_inst (.a(a), .b(b), .y(xnor_out));
    nand_gate nand_inst (.a(a), .b(b), .y(nand_out));
    nor_gate nor_inst (.a(a), .b(b), .y(nor_out));
    not_gate not_inst (.a(a), .y(not_out));
    
    adder add_inst (.a(a), .b(b), .carry_in(carry_in), .sum(add_out), .carry_out(add_carry_out));
    subtractor sub_inst (.a(a), .b(b), .borrow_in(carry_in), .difference(sub_out), .borrow_out(sub_borrow_out));
    multiplier mul_inst (.a(a), .b(b), .product(mul_out));
    division div_inst (.a(a), .b(b), .quotient(div_out), .remainder(remainder));
    
    shifter shifter_inst (.a(a), .shift(b[1:0]), .left_shift(left_shift), .right_shift(right_shift));

    // ALU Operation based on opcode
    always @(*) begin
        case (opcode)
            3'b000: result = and_out;            // AND
            3'b001: result = or_out;             // OR
            3'b010: result = xor_out;            // XOR
            3'b011: result = xnor_out;           // XNOR
            3'b100: result = nand_out;           // NAND
            3'b101: result = nor_out;            // NOR
            3'b110: result = not_out;            // NOT
            3'b111: begin                        // Addition
                result = add_out;
                carry_out = add_carry_out;
            end
            3'b1000: begin                       // Subtraction
                result = sub_out;
                carry_out = sub_borrow_out;
            end
            3'b1001: result = mul_out;           // Multiplication
            3'b1010: begin                       // Division
                result = div_out;
                remainder = remainder;
            end
            3'b1011: result = left_shift;        // Left shift
            3'b1100: result = right_shift;       // Right shift
            default: result = 4'b0000;           // Default (could be zero or error state)
        endcase
    end
endmodule
