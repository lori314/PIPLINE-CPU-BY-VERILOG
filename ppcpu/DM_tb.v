`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:18:50 10/29/2024
// Design Name:   DM
// Module Name:   /home/co-eda/single_cpu/DM_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DM_tb;

	// Inputs
	reg reset;
	reg clk;
	reg [31:0] pc;
	reg MemWrite;
	reg [31:0] data;
	reg [13:2] address;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.reset(reset), 
		.clk(clk), 
		.pc(pc),
		.MemWrite(MemWrite), 
		.data(data), 
		.address(address), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 0;
		MemWrite = 0;
		data = 0;
		address = 0;
		pc=0;

		// Wait 100 ns for global reset to finish
		#100;
		reset=0;
      address = 50;
		data = 50;
		MemWrite = 1;
		
		#100;
		address=3071;
		// Add stimulus here

	end
   always #5 clk=~clk;   
endmodule

