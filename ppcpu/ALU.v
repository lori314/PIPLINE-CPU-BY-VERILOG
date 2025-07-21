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
`define AND 3'b011
`define SLT 3'b100
`define SLTU 3'b101
`define ADDO 3'b110

module ALU(
    input [31:0] rs,
    input [31:0] rt,
    input [2:0] ALUop,
	 input [4:0] ExcCodeA,
	 input MemWriteE,
	 input MemtoRegE,
    output reg[31:0] result,
	 output reg[4:0] ExcCodeE
    );


always @(*) begin
case(ALUop)
`ADD:begin
result=rs+rt;
ExcCodeE=ExcCodeA;
end
`ADDO:begin
result=rs+rt;
if(rs[31]==rt[31]&&rs[31]!=result[31]) begin
	if(MemWriteE) ExcCodeE=5;
	else if(MemtoRegE) ExcCodeE=4;
	else ExcCodeE=12;
end
else ExcCodeE=ExcCodeA;
end
`SUB:begin
result=rs-rt;
if(rs[31]!=rt[31]&&rs[31]!=result[31]) begin
	if(MemWriteE) ExcCodeE=5;
	else if(MemtoRegE) ExcCodeE=4;
	else ExcCodeE=12;
end
else ExcCodeE=ExcCodeA;
end
`OR:begin
result=rs|rt;
ExcCodeE=ExcCodeA;
end
`AND:begin
result=rs&rt;
ExcCodeE=ExcCodeA;
end
`SLT:begin
result=($signed(rs)<$signed(rt))?1:0;
ExcCodeE=ExcCodeA;
end
`SLTU:begin
result=({0,rs[31:0]}<{0,rt[31:0]})?1:0;
ExcCodeE=ExcCodeA;
end
default:begin
result=0;
ExcCodeE=ExcCodeA;
end
endcase
end
endmodule
