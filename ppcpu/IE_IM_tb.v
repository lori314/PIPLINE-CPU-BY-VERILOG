`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:19:46 11/06/2024
// Design Name:   IE_IM
// Module Name:   /home/co-eda/pipeline_cpu/IE_IM_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IE_IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IE_IM_tb;

	// Inputs
	reg reset;
	reg clk;
	reg MemtoRegE;
	reg MemWriteE;
	reg RegWriteE;
	reg [31:0] result;
	reg [31:0] WDD;
	reg [4:0] WAD;
	reg [31:0] PCD;

	// Outputs
	wire MemtoRegM;
	wire RegWriteM;
	wire MemWriteM;
	wire [31:0] AOE;
	wire [31:0] WDE;
	wire [4:0] WAE;
	wire [31:0] PCE;

	// Instantiate the Unit Under Test (UUT)
	IE_IM uut (
		.reset(reset), 
		.clk(clk), 
		.MemtoRegE(MemtoRegE), 
		.MemWriteE(MemWriteE), 
		.RegWriteE(RegWriteE), 
		.result(result), 
		.WDD(WDD), 
		.WAD(WAD), 
		.MemtoRegM(MemtoRegM), 
		.RegWriteM(RegWriteM), 
		.MemWriteM(MemWriteM), 
		.AOE(AOE), 
		.WDE(WDE), 
		.WAE(WAE), 
		.PCD(PCD), 
		.PCE(PCE)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		MemtoRegE = 0;
		MemWriteE = 0;
		RegWriteE = 0;
		result = 0;
		WDD = 0;
		WAD = 0;
		PCD = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

