`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:32:13 11/13/2024
// Design Name:   mult
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/ppcpu/mult_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mult_tb;

	// Inputs
	reg reset;
	reg clk;
	reg start;
	reg [3:0] op;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire Busy;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	mult uut (
		.reset(reset), 
		.clk(clk), 
		.start(start), 
		.op(op), 
		.Busy(Busy), 
		.A(A), 
		.B(B), 
		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		start = 0;
		op = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
      start=1;
		op=7;
		A=108;
		B=-20;
		
		#10 start=0;
		// Add stimulus here
	
	end
   always #5 clk=~clk;   
endmodule

