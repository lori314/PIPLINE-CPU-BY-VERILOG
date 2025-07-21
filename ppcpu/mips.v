`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:13:29 11/29/2024 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,                    // 时钟信号
    input reset,                  // 同步复位信号
    input interrupt,              // 外部中断信号
    output [31:0] macroscopic_pc, // 宏观 PC

    output [31:0] i_inst_addr,    // IM 读取地址（取指 PC）
    input  [31:0] i_inst_rdata,   // IM 读取数据

    output [31:0] m_data_addr,    // DM 读写地址
    input  [31:0] m_data_rdata,   // DM 读取数据
    output [31:0] m_data_wdata,   // DM 待写入数据
    output [3 :0] m_data_byteen,  // DM 字节使能信号

    output [31:0] m_int_addr,     // 中断发生器待写入地址
    output [3 :0] m_int_byteen,   // 中断发生器字节使能信号

    output [31:0] m_inst_addr,    // M 级 PC

    output w_grf_we,              // GRF 写使能信号
    output [4 :0] w_grf_addr,     // GRF 待写入寄存器编号
    output [31:0] w_grf_wdata,    // GRF 待写入数据

    output [31:0] w_inst_addr     // W 级 PC
);

	wire [31:0] cpu_readdata;
	wire cpu_we;
	wire [31:0] cpu_data_addr;
	wire [31:0] cpu_data_wdata;
	wire [31:0] cpu_data_rdata;
	wire [3:0] cpu_data_byteen;
	wire [31:2] timer0_addr;
	wire [31:0] timer0_writedata;
	wire [31:0] timer0_readdata;
	wire timer0_we;
	wire [31:2] timer1_addr;
	wire [31:0] timer1_writedata;
	wire [31:0] timer1_readdata;
	wire timer1_we;
	
	wire IRQ0;
	wire IRQ1;
	wire [5:0] HWInt;
	
assign macroscopic_pc=m_inst_addr;

Bridge bridge (
		.cpu_addr(cpu_data_addr), 
		.cpu_writedata(cpu_data_wdata), 
		.cpu_readdata(cpu_data_rdata), 
		.cpu_we(cpu_we), 
		.cpu_be(cpu_data_byteen), 
		.mem_addr(m_data_addr), 
		.mem_writedata(m_data_wdata), 
		.mem_readdata(m_data_rdata), 
		.mem_be(m_data_byteen), 
		.timer0_addr(timer0_addr), 
		.timer0_writedata(timer0_writedata), 
		.timer0_readdata(timer0_readdata), 
		.timer0_we(timer0_we), 
		.timer1_addr(timer1_addr), 
		.timer1_writedata(timer1_writedata), 
		.timer1_readdata(timer1_readdata), 
		.timer1_we(timer1_we), 
		.int_addr(m_int_addr), 
		.int_be(m_int_byteen)
	);

	CPU cpu (
		.clk(clk), 
		.reset(reset), 
		.i_inst_rdata(i_inst_rdata), 
		.m_data_rdata(cpu_data_rdata), 
		.i_inst_addr(i_inst_addr), 
		.m_data_addr(cpu_data_addr), 
		.m_data_wdata(cpu_data_wdata), 
		.m_data_byteen(cpu_data_byteen), 
		.m_inst_addr(m_inst_addr), 
		.w_grf_we(w_grf_we), 
		.w_grf_addr(w_grf_addr), 
		.w_grf_wdata(w_grf_wdata), 
		.w_inst_addr(w_inst_addr),
		.cpu_we(cpu_we),
		.HWInt(HWInt)
	);
	
		TC time0 (
		.clk(clk), 
		.reset(reset), 
		.Addr(timer0_addr), 
		.WE(timer0_we), 
		.Din(timer0_writedata), 
		.Dout(timer0_readdata), 
		.IRQ(IRQ0)
	);
	
		TC time1 (
		.clk(clk), 
		.reset(reset), 
		.Addr(timer1_addr), 
		.WE(timer1_we), 
		.Din(timer1_writedata), 
		.Dout(timer1_readdata), 
		.IRQ(IRQ1)
	);
	
assign HWInt={0,0,0,interrupt,IRQ1,IRQ0};
endmodule
