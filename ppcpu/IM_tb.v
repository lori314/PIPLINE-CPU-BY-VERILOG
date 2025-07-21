`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:52:35 10/29/2024
// Design Name:   IM
// Module Name:   /home/co-eda/single_cpu/IM_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IM_tb;

	// Inputs
	reg [31:0] PC;

	// Outputs
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.PC(PC), 
		.instr(instr)
	);

	initial begin
		// Initialize Inputs
		PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
      PC=PC+4;  
		// Add stimulus here

	end
      
endmodule

