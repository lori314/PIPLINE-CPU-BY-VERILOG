`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:04:04 10/29/2024
// Design Name:   PC_trans
// Module Name:   /home/co-eda/single_cpu/PC_trans_tb.v
// Project Name:  single_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC_trans
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_trans_tb;

	// Inputs
	reg [31:0] PC;
	reg [15:0] sel_PC;
	reg [1:0] nPC_sel;
	reg [25:0] instr_index;

	// Outputs
	wire [31:0] next_PC;

	// Instantiate the Unit Under Test (UUT)
	PC_trans uut (
		.PC(PC), 
		.sel_PC(sel_PC),  
		.nPC_sel(nPC_sel),
		.next_PC(next_PC),
		.instr_index(instr_index)
	);

	initial begin
		// Initialize Inputs
		PC = 0;
		sel_PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
      PC=32'h00003020;
		sel_PC=16'hfffb;
		instr_index={2'b00,24'h000c01};
		nPC_sel=2;
	end
      
endmodule

