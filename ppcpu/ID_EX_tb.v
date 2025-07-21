`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:05:21 11/06/2024
// Design Name:   ID_EX
// Module Name:   /home/co-eda/pipeline_cpu/ID_EX_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID_EX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ID_EX_tb;

	// Inputs
	reg CLR;
	reg MemtoReg;
	reg MemWrite;
	reg RegDst;
	reg RegWrite;
	reg [2:0] ALUctr;
	reg ALUSrc;
	reg PCF;
	reg [31:0] R1;
	reg [31:0] R2;
	reg [31:0] ext_immediate;
	reg clk;
	reg reset;
	reg JAL_PC;
	reg [4:0] RS;
	reg [4:0] RT;
	reg [4:0] RD;

	// Outputs
	wire MemtoRegE;
	wire RegWriteE;
	wire MemWriteE;
	wire RegDstE;
	wire PCD;
	wire [31:0] R1D;
	wire [31:0] R2D;
	wire [31:0] IMD;
	wire JAL_PCE;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;

	// Bidirs
	wire [2:0] ALUctrE;
	wire ALUSrcE;

	// Instantiate the Unit Under Test (UUT)
	ID_EX uut (
		.CLR(CLR), 
		.MemtoReg(MemtoReg), 
		.MemWrite(MemWrite), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUctr(ALUctr), 
		.ALUSrc(ALUSrc), 
		.MemtoRegE(MemtoRegE), 
		.RegWriteE(RegWriteE), 
		.MemWriteE(MemWriteE), 
		.ALUctrE(ALUctrE), 
		.ALUSrcE(ALUSrcE), 
		.RegDstE(RegDstE), 
		.PCF(PCF), 
		.PCD(PCD), 
		.R1(R1), 
		.R2(R2), 
		.R1D(R1D), 
		.R2D(R2D), 
		.ext_immediate(ext_immediate), 
		.IMD(IMD), 
		.clk(clk), 
		.reset(reset), 
		.JAL_PC(JAL_PC), 
		.JAL_PCE(JAL_PCE), 
		.RS(RS), 
		.rs(rs), 
		.RT(RT), 
		.rt(rt), 
		.RD(RD), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		CLR = 0;
		MemtoReg = 0;
		MemWrite = 0;
		RegDst = 0;
		RegWrite = 0;
		ALUctr = 0;
		ALUSrc = 0;
		PCF = 0;
		R1 = 0;
		R2 = 0;
		ext_immediate = 0;
		clk = 0;
		reset = 0;
		JAL_PC = 0;
		RS = 0;
		RT = 0;
		RD = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

