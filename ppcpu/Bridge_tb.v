`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:15:20 11/29/2024
// Design Name:   Bridge
// Module Name:   C:/Users/lenovo/Desktop/codes/verilog/P7/ppcpu/Bridge_tb.v
// Project Name:  pipeline_cpu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Bridge
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Bridge_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] cpu_addr;
	reg [31:0] cpu_writedata;
	reg cpu_we;
	reg [3:0] cpu_be;
	reg [31:0] mem_readdata;
	reg [31:0] timer0_readdata;
	reg [31:0] timer1_readdata;
	reg [31:0] int_readdata;

	// Outputs
	wire [31:0] cpu_readdata;
	wire [31:0] mem_addr;
	wire [31:0] mem_writedata;
	wire mem_we;
	wire [3:0] mem_be;
	wire [31:0] timer0_addr;
	wire [31:0] timer0_writedata;
	wire timer0_we;
	wire [3:0] timer0_be;
	wire [31:0] timer1_addr;
	wire [31:0] timer1_writedata;
	wire timer1_we;
	wire [3:0] timer1_be;
	wire [31:0] int_addr;
	wire [31:0] int_writedata;
	wire int_we;
	wire [3:0] int_be;

	// Instantiate the Unit Under Test (UUT)
	Bridge uut (
		.clk(clk), 
		.reset(reset), 
		.cpu_addr(cpu_addr), 
		.cpu_writedata(cpu_writedata), 
		.cpu_readdata(cpu_readdata), 
		.cpu_we(cpu_we), 
		.cpu_be(cpu_be), 
		.mem_addr(mem_addr), 
		.mem_writedata(mem_writedata), 
		.mem_readdata(mem_readdata), 
		.mem_we(mem_we), 
		.mem_be(mem_be), 
		.timer0_addr(timer0_addr), 
		.timer0_writedata(timer0_writedata), 
		.timer0_readdata(timer0_readdata), 
		.timer0_we(timer0_we), 
		.timer0_be(timer0_be), 
		.timer1_addr(timer1_addr), 
		.timer1_writedata(timer1_writedata), 
		.timer1_readdata(timer1_readdata), 
		.timer1_we(timer1_we), 
		.timer1_be(timer1_be), 
		.int_addr(int_addr), 
		.int_writedata(int_writedata), 
		.int_readdata(int_readdata), 
		.int_we(int_we), 
		.int_be(int_be)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		cpu_addr = 0;
		cpu_writedata = 0;
		cpu_we = 0;
		cpu_be = 0;
		mem_readdata = 0;
		timer0_readdata = 0;
		timer1_readdata = 0;
		int_readdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

