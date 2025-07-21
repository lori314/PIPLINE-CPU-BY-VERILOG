`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:27:56 11/27/2024
// Design Name:   ExcM
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/ExcM_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ExcM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ExcM_tb;

	// Inputs
	reg MemtoRegM;
	reg MemWriteM;
	reg [2:0] MemOpM;
	reg [31:0] Address;
	reg [5:0] ExcCodeM;

	// Outputs
	wire [5:0] ExcCodeW;

	// Instantiate the Unit Under Test (UUT)
	ExcM uut (
		.MemtoRegM(MemtoRegM), 
		.MemWriteM(MemWriteM), 
		.MemOpM(MemOpM), 
		.Address(Address), 
		.ExcCodeM(ExcCodeM), 
		.ExcCodeW(ExcCodeW)
	);

	initial begin
		// Initialize Inputs
		MemtoRegM = 0;
		MemWriteM = 0;
		MemOpM = 0;
		Address = 0;
		ExcCodeM = 0;

		// Wait 100 ns for global reset to finish
		#100;
      MemWriteM = 1;
		MemOpM = 1;
		Address = 32'h0000_7FFF;
		// Add stimulus here

	end
      
endmodule

