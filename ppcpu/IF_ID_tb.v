`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:39:18 11/06/2024
// Design Name:   IF_ID
// Module Name:   /home/co-eda/pipeline_cpu/IF_ID_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF_ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IF_ID_tb;

	// Inputs
	reg reset;
	reg clk;
	reg [31:0] instr;
	reg [31:0] PC;
	reg [31:0] next_PC;
	reg EN;

	// Outputs
	wire [31:0] next_instr;

	// Instantiate the Unit Under Test (UUT)
	IF_ID uut (
		.reset(reset), 
		.clk(clk), 
		.instr(instr), 
		.PC(PC), 
		.next_instr(next_instr), 
		.next_PC(next_PC), 
		.EN(EN)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		instr = 0;
		PC = 0;
		next_PC = 0;
		EN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

