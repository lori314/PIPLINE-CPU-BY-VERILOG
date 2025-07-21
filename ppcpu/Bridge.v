`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:05 11/29/2024 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    // CPU接口
    input wire [31:0] cpu_addr,      // CPU访问地址
    input wire [31:0] cpu_writedata, // CPU写数据
    output reg [31:0] cpu_readdata,  // CPU读数据
    input wire cpu_we,              // CPU写使能
    input wire [3:0] cpu_be,         // CPU字节使能

    // 外部设备接口
    output reg [31:0] mem_addr,      // 内存地址
    output reg [31:0] mem_writedata, // 内存写数据
    input wire [31:0] mem_readdata,  // 内存读数据
    output reg [3:0] mem_be,        // 内存字节使能

    output reg [31:2] timer0_addr,  // 计时器0地址
    output reg [31:0] timer0_writedata, // 计时器0写数据
    input wire [31:0] timer0_readdata, // 计时器0读数据
    output reg timer0_we,           // 计时器0写使能

    output reg [31:2] timer1_addr,  // 计时器1地址
    output reg [31:0] timer1_writedata, // 计时器1写数据
    input wire [31:0] timer1_readdata, // 计时器1读数据
    output reg timer1_we,           // 计时器1写使能

    output reg [31:0] int_addr,     // 中断发生器地址
    output reg [31:0] int_writedata, // 中断发生器写数据
    input wire [31:0] int_readdata,  // 中断发生器读数据
    output reg [3:0] int_be         // 中断发生器字节使能
);

// 地址范围定义
parameter DATA_MEM_RANGE = 32'h0000_0000;
parameter DATA_MEM_SIZE = 32'h3000; // 假设数据存储器大小为4KB
parameter TIMER0_RANGE = 32'h0000_7F00;
parameter TIMER0_SIZE = 32'h0B; // 假设计时器0大小为16B
parameter TIMER1_RANGE = 32'h0000_7F10;
parameter TIMER1_SIZE = 32'h0B; // 假设计时器1大小为16B
parameter INT_RANGE = 32'h0000_7F20;
parameter INT_SIZE = 32'h4; // 假设中断发生器大小为4B

// 地址解码逻辑
reg [31:0] temp0;
reg [31:0] temp1;

always @(*) begin
        // 数据存储器访问
        if (cpu_addr >= DATA_MEM_RANGE && cpu_addr < DATA_MEM_RANGE + DATA_MEM_SIZE) begin
            mem_addr = cpu_addr;
            mem_writedata = cpu_writedata;
            cpu_readdata = mem_readdata;
            mem_be = cpu_be;
        end
		  else begin
				mem_addr = 0;
            mem_writedata = 0;
            mem_be = 0;
		  end

        // 计时器0访问
        if (cpu_addr >= TIMER0_RANGE && cpu_addr < TIMER0_RANGE + TIMER0_SIZE) begin
            temp0 = cpu_addr - TIMER0_RANGE;
				timer0_addr=temp0[31:2];
            timer0_writedata = cpu_writedata;
            timer0_we = cpu_we;
            cpu_readdata = timer0_readdata;
        end
		  else begin
				temp0 = 0;
				timer0_addr=0;
            timer0_writedata = 0;
            timer0_we = 0;
		  end
        // 计时器1访问
        if (cpu_addr >= TIMER1_RANGE && cpu_addr < TIMER1_RANGE + TIMER1_SIZE) begin
            temp1 = cpu_addr - TIMER1_RANGE;
				timer1_addr=temp1[31:2];
            timer1_writedata = cpu_writedata;
            timer1_we = cpu_we;
            cpu_readdata = timer1_readdata;
        end
		  else begin
				temp1 = 0;
				timer1_addr=0;
            timer1_writedata = 0;
            timer1_we = 0;
		  end		  
        // 中断发生器访问
        if (cpu_addr >= INT_RANGE && cpu_addr < INT_RANGE + INT_SIZE) begin
            int_addr = cpu_addr;
            int_writedata = cpu_writedata;
            cpu_readdata = int_readdata;
            int_be = (cpu_we==1)? 4'b0001:0;
        end
		  else begin
				int_addr = 0;
            int_writedata = 0;
            int_be = 0;
        end
    end


endmodule
