`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:10:09 10/31/2024
// Design Name:   IFU
// Module Name:   /home/co-eda/single_cpu/IFU_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IFU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IFU_tb;

	// Inputs
	reg [1:0] nPC_sel;
	reg [15:0] sel_PC;
	reg [31:0] jr_PC;
	reg [25:0] instr_index;
	reg reset;
	reg clk;

	// Outputs
	wire [31:0] instr;
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.nPC_sel(nPC_sel), 
		.sel_PC(sel_PC), 
		.jr_PC(jr_PC), 
		.instr_index(instr_index), 
		.reset(reset), 
		.clk(clk), 
		.instr(instr), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		nPC_sel = 0;
		sel_PC = 0;
		jr_PC = 0;
		instr_index = 0;
		reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
      nPC_sel=2;
		instr_index = {2'b00,24'h000c01};
		// Add stimulus here

	end
   always #5 clk=~clk;  
endmodule

