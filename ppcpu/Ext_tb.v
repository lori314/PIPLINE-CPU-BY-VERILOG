`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:02:51 10/30/2024
// Design Name:   Ext
// Module Name:   /home/co-eda/single_cpu/Ext_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ext_tb;

	// Inputs
	reg ExtOp;
	reg ExtHigh;
	reg [15:0] in;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	Ext uut (
		.ExtOp(ExtOp), 
		.ExtHigh(ExtHigh), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		ExtOp = 0;
		ExtHigh = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      in = 10;
		#100;
		ExtOp = 1;
		in = 16'b1111_0000_0000_0001;
		#100;
		ExtOp=0;
		ExtHigh=1;
		// Add stimulus here

	end
      
endmodule

