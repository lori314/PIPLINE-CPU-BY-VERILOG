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
	reg [2:0] nPC_sel;
	reg [15:0] sel_PC;
	reg [31:0] jr_PC;
	reg [25:0] instr_index;
	reg reset;
	reg clk;
	reg EN;

	// Outputs
	wire [31:0] PC;
	wire [5:0] ExcCode;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.nPC_sel(nPC_sel), 
		.sel_PC(sel_PC), 
		.jr_PC(jr_PC), 
		.instr_index(instr_index), 
		.reset(reset), 
		.clk(clk), 
		.PC(PC),
		.EN(EN),
		.ExcCode(ExcCode)
	);

	initial begin
		// Initialize Inputs
		nPC_sel = 0;
		sel_PC = 0;
		jr_PC = 0;
		instr_index = 0;
		reset = 0;
		clk = 0;
		EN = 1;
		
		// Wait 100 ns for global reset to finish
		#100;
		nPC_sel=3;
		jr_PC = 32'h0000_305c;
		// Add stimulus here

	end
   always #5 clk=~clk;  
endmodule

