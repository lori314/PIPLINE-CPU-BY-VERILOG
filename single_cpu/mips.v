`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:17:13 10/30/2024 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	
	wire[1:0] n_sel;
	wire[15:0] sel_PC;
	wire[31:0] jr_PC;
	wire[25:0] instr_index;
	wire[31:0] instr;
	wire[31:0] PC;
	wire MemWrite;
	wire RegWrite;
	wire ExtOp;
	wire ExtHigh;
	wire ALUSrc;
	wire RegDst;
	wire MemtoReg;
	wire[2:0] ALUctr;
	wire JAL_PC;
	wire[31:0] result;
	wire equal;
	wire[15:0] immediate;
	wire[4:0] rs;
	wire[4:0] rt;
	wire[4:0] rd;
	wire[31:0] Mem_data;
	wire[13:2] Mem_address;
	wire[31:0] Mem_out;
	wire WE;
	
wire [4:0] A1;
wire [4:0] A2;
wire [4:0] A3;
wire [31:0] R1;
wire [31:0] R2;
wire [31:0] WD;
wire [1:0] nPC_sel;
wire [31:0] ext_data;
wire [31:0] A;
wire [31:0] B;

	IFU ifu (
		.nPC_sel(nPC_sel), 
		.sel_PC(sel_PC), 
		.jr_PC(jr_PC), 
		.instr_index(instr_index), 
		.reset(reset), 
		.clk(clk), 
		.instr(instr), 
		.PC(PC)
	);
	
	Controller controller (
		.instr(instr), 
		.MemWrite(MemWrite), 
		.RegWrite(RegWrite), 
		.ExtOp(ExtOp), 
		.ALUSrc(ALUSrc), 
		.RegDst(RegDst), 
		.MemtoReg(MemtoReg), 
		.nPC_sel(n_sel), 
		.ALUctr(ALUctr), 
		.ExtHigh(ExtHigh), 
		.JAL_PC(JAL_PC)
	);
	
	ALU alu (
		.rs(A), 
		.rt(B), 
		.ALUop(ALUctr), 
		.result(result), 
		.equal(equal)
	);
	
	Ext ext (
		.ExtOp(ExtOp), 
		.ExtHigh(ExtHigh), 
		.in(immediate), 
		.out(ext_data)
	);
	
	Trans trans (
		.instr(instr), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immediate(immediate), 
		.instr_index(instr_index)
	);
	
	DM dm (
		.reset(reset), 
		.clk(clk), 
		.pc(PC),
		.MemWrite(MemWrite), 
		.data(Mem_data), 
		.address(Mem_address), 
		.out(Mem_out)
	);
	
	GRF grf (
		.reset(reset), 
		.clk(clk), 
		.WE(WE), 
		.PC(PC),
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.WD(WD), 
		.R1(R1), 
		.R2(R2)
	);

assign sel_PC=immediate;
assign jr_PC=R1;
assign A=R1;
assign B=(ALUSrc==1)?ext_data:R2;
assign Mem_data=R2;
assign Mem_address=result[13:2];
assign WE=RegWrite;
assign A1=rs;
assign A2=rt;
assign A3=(JAL_PC==1)?31
		:(RegDst==0)?rt
		:rd;
assign WD=(MemtoReg)?Mem_out:
		(JAL_PC)?PC+4:
		result; 
assign nPC_sel=(n_sel==1 && equal==0)?0:n_sel;

endmodule
