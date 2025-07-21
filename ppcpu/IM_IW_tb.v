`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:40:10 11/06/2024
// Design Name:   IM_IW
// Module Name:   /home/co-eda/pipeline_cpu/IM_IW_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM_IW
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IM_IW_tb;

	// Inputs
	reg reset;
	reg clk;
	reg MemtoRegM;
	reg RegWriteM;
	reg [31:0] out;
	reg [31:0] AOE;
	reg [4:0] WAE;
	reg [31:0] PCE;

	// Outputs
	wire MemtoRegW;
	wire RegWriteW;
	wire [31:0] MDM;
	wire [31:0] AOM;
	wire [4:0] WAM;
	wire [31:0] PCM;

	// Instantiate the Unit Under Test (UUT)
	IM_IW uut (
		.reset(reset), 
		.clk(clk), 
		.MemtoRegM(MemtoRegM), 
		.RegWriteM(RegWriteM), 
		.MemtoRegW(MemtoRegW), 
		.RegWriteW(RegWriteW), 
		.out(out), 
		.MDM(MDM), 
		.AOE(AOE), 
		.AOM(AOM), 
		.WAE(WAE), 
		.WAM(WAM), 
		.PCE(PCE), 
		.PCM(PCM)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		MemtoRegM = 0;
		RegWriteM = 0;
		out = 0;
		AOE = 0;
		WAE = 0;
		PCE = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

