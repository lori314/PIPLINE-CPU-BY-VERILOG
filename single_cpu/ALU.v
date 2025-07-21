`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:57 10/29/2024 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define ADD 3'b000
`define SUB 3'b001
`define OR 3'b010
module ALU(
    input [31:0] rs,
    input [31:0] rt,
    input [2:0] ALUop,
    output reg[31:0] result,
    output equal
    );
assign equal=(rs==rt)?1:0;

always @(*) begin
case(ALUop)
`ADD:begin
result=rs+rt;
end
`SUB:begin
result=rs-rt;
end
`OR:begin
result=rs|rt;
end
default:result=0;
endcase
end
endmodule
