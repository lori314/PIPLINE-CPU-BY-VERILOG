`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:49:11 10/29/2024
// Design Name:   ALU
// Module Name:   /home/co-eda/single_cpu/ALU_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] rs;
	reg [31:0] rt;
	reg [2:0] ALUop;

	// Outputs
	wire [31:0] result;
	wire equal;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.rs(rs), 
		.rt(rt), 
		.ALUop(ALUop), 
		.result(result), 
		.equal(equal)
	);

	initial begin
		// Initialize Inputs
		rs = 0;
		rt = 0;
		ALUop = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rs = 20;
		rt = 10;
		ALUop = 0;
		// Add stimulus here
		#100 ALUop=1;
		#100
		ALUop = 2;
		rs = 1;
		rt = 2;
	end
      
endmodule

