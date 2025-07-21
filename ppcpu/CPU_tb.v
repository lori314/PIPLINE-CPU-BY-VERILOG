`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:51:51 11/29/2024
// Design Name:   CPU
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/CPU_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] i_inst_rdata;
	reg [31:0] m_data_rdata;

	// Outputs
	wire [31:0] i_inst_addr;
	wire [31:0] m_data_addr;
	wire [31:0] m_data_wdata;
	wire [3:0] m_data_byteen;
	wire [31:0] m_inst_addr;
	wire w_grf_we;
	wire [4:0] w_grf_addr;
	wire [31:0] w_grf_wdata;
	wire [31:0] w_inst_addr;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.reset(reset), 
		.i_inst_rdata(i_inst_rdata), 
		.m_data_rdata(m_data_rdata), 
		.i_inst_addr(i_inst_addr), 
		.m_data_addr(m_data_addr), 
		.m_data_wdata(m_data_wdata), 
		.m_data_byteen(m_data_byteen), 
		.m_inst_addr(m_inst_addr), 
		.w_grf_we(w_grf_we), 
		.w_grf_addr(w_grf_addr), 
		.w_grf_wdata(w_grf_wdata), 
		.w_inst_addr(w_inst_addr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		i_inst_rdata = 0;
		m_data_rdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

