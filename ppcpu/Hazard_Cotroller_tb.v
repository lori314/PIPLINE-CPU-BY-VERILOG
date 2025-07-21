`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:51:22 11/06/2024
// Design Name:   Hazard_Cotroller
// Module Name:   /home/co-eda/pipeline_cpu/Hazard_Cotroller_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Hazard_Cotroller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Hazard_Cotroller_tb;

	// Inputs
	reg [4:0] RS;
	reg [4:0] RT;
	reg [4:0] rt;
	reg [4:0] rs;
	reg [4:0] WAE;
	reg [4:0] WAM;
	reg MemtoRegE;
	reg RegWriteM;
	reg RegWriteW;

	// Outputs
	wire StallPC;
	wire StallF;
	wire CLRD;
	wire [1:0] ForwardA;
	wire [1:0] ForwardB;

	// Instantiate the Unit Under Test (UUT)
	Hazard_Cotroller uut (
		.RS(RS), 
		.RT(RT), 
		.rt(rt), 
		.rs(rs), 
		.WAE(WAE), 
		.WAM(WAM), 
		.MemtoRegE(MemtoRegE), 
		.RegWriteM(RegWriteM), 
		.RegWriteW(RegWriteW), 
		.StallPC(StallPC), 
		.StallF(StallF), 
		.CLRD(CLRD), 
		.ForwardA(ForwardA), 
		.ForwardB(ForwardB)
	);

	initial begin
		// Initialize Inputs
		RS = 0;
		RT = 0;
		rt = 0;
		rs = 0;
		WAE = 0;
		WAM = 0;
		MemtoRegE = 0;
		RegWriteM = 0;
		RegWriteW = 0;

		// Wait 100 ns for global reset to finish
		#100;
      RS=2;
		WAE=2;
		RegWriteM=1;
		
		#100;
		MemtoRegE=1;
		// Add stimulus here

	end
      
endmodule

