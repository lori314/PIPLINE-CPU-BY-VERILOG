`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:21:19 10/30/2024
// Design Name:   Trans
// Module Name:   /home/co-eda/single_cpu/Trans_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Trans
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Trans_tb;

	// Inputs
	reg [31:0] instr;

	// Outputs
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] immediate;
	wire [25:0] instr_index;

	// Instantiate the Unit Under Test (UUT)
	Trans uut (
		.instr(instr), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immediate(immediate), 
		.instr_index(instr_index)
	);

	initial begin
		// Initialize Inputs
		instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      instr=32'h0c000c01; 
		// Add stimulus here

	end
      
endmodule

