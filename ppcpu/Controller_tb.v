`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:44:18 10/30/2024
// Design Name:   Controller
// Module Name:   /home/co-eda/single_cpu/Controller_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Controller_tb;

	// Inputs
	reg [31:0] instr;

	// Outputs
	wire MemWrite;
	wire RegWrite;
	wire ExtOp;
	wire ALUSrc;
	wire RegDst;
	wire MemtoReg;
	wire [1:0] nPC_sel;
	wire [2:0] ALUctr;
	wire ExtHigh;
	wire JAL_PC;

	// Instantiate the Unit Under Test (UUT)
	Controller uut (
		.instr(instr), 
		.MemWrite(MemWrite), 
		.RegWrite(RegWrite), 
		.ExtOp(ExtOp), 
		.ALUSrc(ALUSrc), 
		.RegDst(RegDst), 
		.MemtoReg(MemtoReg), 
		.nPC_sel(nPC_sel), 
		.ALUctr(ALUctr), 
		.ExtHigh(ExtHigh), 
		.JAL_PC(JAL_PC)
	);

	initial begin
		// Initialize Inputs
		instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      instr = 32'h341c0000;
		#100;
		instr = 32'h0c000c01;
		// Add stimulus here

	end
      
endmodule

