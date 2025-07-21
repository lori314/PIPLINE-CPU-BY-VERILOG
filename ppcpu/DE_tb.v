`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:24:55 11/14/2024
// Design Name:   DE
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/ppcpu/DE_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DE_tb;

	// Inputs
	reg [31:0] Address;
	reg [31:0] Din;
	reg [2:0] MemOpE;

	// Outputs
	wire [31:0] Dout;

	// Instantiate the Unit Under Test (UUT)
	DE uut (
		.Address(Address), 
		.Din(Din), 
		.MemOpE(MemOpE), 
		.Dout(Dout)
	);

	initial begin
		// Initialize Inputs
		Address = 0;
		Din = 0;
		MemOpE = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Address = 0;
		Din = 32'h0000d999;
		MemOpE = 4;
		// Add stimulus here

	end
      
endmodule

