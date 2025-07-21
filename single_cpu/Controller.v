`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:23:25 10/30/2024 
// Design Name: 
// Module Name:    Controller 
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
`define cal 6'b000000
`define ori 6'b001101
`define sw 6'b101011
`define lw 6'b100011
`define beq 6'b000100
`define lui 6'b001111
`define jal 6'b000011

`define add 6'b100000
`define sub 6'b100010
`define jr  6'b001000

module Controller(
    input [31:0] instr,
    output reg MemWrite,
    output reg RegWrite,
    output reg ExtOp,
    output reg ALUSrc,
    output reg RegDst,
    output reg MemtoReg,
    output reg[1:0] nPC_sel,
    output reg[2:0] ALUctr,
    output reg ExtHigh,
	 output reg JAL_PC
    );

reg[5:0] special;
reg[5:0] func;

initial begin
special=0;
func=0;
end

always @(*) begin
special=instr[31:26];
func=instr[5:0];
case(special)
`ori:begin
MemWrite=0;
RegWrite=1;
ExtOp=0;
ALUSrc=1;
RegDst=0;
MemtoReg=0;
nPC_sel=0;
ALUctr=2;
ExtHigh=0;
JAL_PC=0;
end
`lw:begin
MemWrite=0;
RegWrite=1;
ExtOp=1;
ALUSrc=1;
RegDst=0;
MemtoReg=1;
nPC_sel=0;
ALUctr=0;
ExtHigh=0;
JAL_PC=0;
end
`sw:begin
MemWrite=1;
RegWrite=0;
ExtOp=1;
ALUSrc=1;
RegDst=0;
MemtoReg=0;
nPC_sel=0;
ALUctr=0;
ExtHigh=0;
JAL_PC=0;
end
`beq:begin
MemWrite=0;
RegWrite=0;
ExtOp=0;
ALUSrc=0;
RegDst=0;
MemtoReg=0;
nPC_sel=1;
ALUctr=0;
ExtHigh=0;
JAL_PC=0;
end
`jal:begin
MemWrite=0;
RegWrite=1;
ExtOp=0;
ALUSrc=0;
RegDst=0;
MemtoReg=0;
nPC_sel=2;
ALUctr=0;
ExtHigh=0;
JAL_PC=1;
end
`lui:begin
MemWrite=0;
RegWrite=1;
ExtOp=0;
ALUSrc=1;
RegDst=0;
MemtoReg=0;
nPC_sel=0;
ALUctr=0;
ExtHigh=1;
JAL_PC=0;
end
`cal:begin
	case(func)
	`add:begin
	MemWrite=0;
	RegWrite=1;
	ExtOp=0;
	ALUSrc=0;
	RegDst=1;
	MemtoReg=0;
	nPC_sel=0;
	ALUctr=0;
	ExtHigh=0;
	JAL_PC=0;
	end
	`sub:begin
	MemWrite=0;
	RegWrite=1;
	ExtOp=0;
	ALUSrc=0;
	RegDst=1;
	MemtoReg=0;
	nPC_sel=0;
	ALUctr=1;
	ExtHigh=0;
	JAL_PC=0;
	end
	`jr:begin
	MemWrite=0;
	RegWrite=0;
	ExtOp=0;
	ALUSrc=0;
	RegDst=0;
	MemtoReg=0;
	nPC_sel=3;
	ALUctr=0;
	ExtHigh=0;
	JAL_PC=0;
	end
	default:begin
	MemWrite=0;
	RegWrite=0;
	ExtOp=0;
	ALUSrc=0;
	RegDst=0;
	MemtoReg=0;
	nPC_sel=0;
	ALUctr=0;
	ExtHigh=0;
	JAL_PC=0;
	end
	endcase
	end
default:begin
MemWrite=0;
RegWrite=0;
ExtOp=0;
ALUSrc=0;
RegDst=0;
MemtoReg=0;
nPC_sel=0;
ALUctr=0;
ExtHigh=0;
JAL_PC=0;
end
endcase
end
endmodule
