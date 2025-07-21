`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:49:13 11/14/2024
// Design Name:   BE
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/ppcpu/BE_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BE_tb;

	// Inputs
	reg [31:0] Address;
	reg [2:0] MemOpE;
	reg MemWriteE;
	reg [31:0] Mem_data;

	// Outputs
	wire [3:0] m_data_byteen;
	wire [31:0] fixed_Mem_data;

	// Instantiate the Unit Under Test (UUT)
	BE uut (
		.m_data_byteen(m_data_byteen), 
		.Address(Address), 
		.MemOpE(MemOpE), 
		.MemWriteE(MemWriteE),
		.Mem_data(Mem_data),
		.fixed_Mem_data(fixed_Mem_data)
	);

	initial begin
		// Initialize Inputs
		Address = 0;
		MemOpE = 0;
		MemWriteE = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Address = 3;
		MemOpE = 2;
		MemWriteE=1;
		Mem_data=32'h0000007b;
		// Add stimulus here

	end
      
endmodule

