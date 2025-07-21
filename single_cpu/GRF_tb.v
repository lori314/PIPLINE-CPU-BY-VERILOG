`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:53 10/29/2024
// Design Name:   GRF
// Module Name:   /home/co-eda/single_cpu/GRF_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GRF_tb;

	// Inputs
	reg reset;
	reg clk;
	reg WE;
	reg [31:0] PC;
	reg [4:0] A1;
	reg [4:0] A2;
	reg [4:0] A3;
	reg [31:0] WD;

	// Outputs
	wire [31:0] R1;
	wire [31:0] R2;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
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

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		WE = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD = 0;
		PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A1=3;
		A2=4;
		A3=5;
		WD=10;
		WE=1;
		#100;
		WE=0;
		A1=5;
		// Add stimulus here

	end
   always #5 clk=~clk;  
endmodule

