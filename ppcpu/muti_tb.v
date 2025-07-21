`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:37:45 11/13/2024
// Design Name:   mult
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/ppcpu/muti_tb.v
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

module muti_tb;

	// Inputs
	reg reset;
	reg clk;
	reg start;
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] op;

	// Outputs
	wire Busy;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	mult uut (
		.reset(reset), 
		.clk(clk), 
		.start(start), 
		.Busy(Busy), 
		.A(A), 
		.B(B), 
		.HI(HI), 
		.LO(LO),
		.op(op)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		start = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A=12;
		B=16;
		start=1;
		op=1;
		
		#10 start=0;
		
		#100;
		A=32'hffffbbbb;
		B=32'h00000010;
		start=1;
		
		#10 start=0;
		// Add stimulus here
		
	end
   always #5 clk=~clk;   
endmodule

