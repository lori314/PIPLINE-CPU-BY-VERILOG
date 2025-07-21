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
    // CPU�ӿ�
    input wire [31:0] cpu_addr,      // CPU���ʵ�ַ
    input wire [31:0] cpu_writedata, // CPUд����
    output reg [31:0] cpu_readdata,  // CPU������
    input wire cpu_we,              // CPUдʹ��
    input wire [3:0] cpu_be,         // CPU�ֽ�ʹ��

    // �ⲿ�豸�ӿ�
    output reg [31:0] mem_addr,      // �ڴ��ַ
    output reg [31:0] mem_writedata, // �ڴ�д����
    input wire [31:0] mem_readdata,  // �ڴ������
    output reg [3:0] mem_be,        // �ڴ��ֽ�ʹ��

    output reg [31:2] timer0_addr,  // ��ʱ��0��ַ
    output reg [31:0] timer0_writedata, // ��ʱ��0д����
    input wire [31:0] timer0_readdata, // ��ʱ��0������
    output reg timer0_we,           // ��ʱ��0дʹ��

    output reg [31:2] timer1_addr,  // ��ʱ��1��ַ
    output reg [31:0] timer1_writedata, // ��ʱ��1д����
    input wire [31:0] timer1_readdata, // ��ʱ��1������
    output reg timer1_we,           // ��ʱ��1дʹ��

    output reg [31:0] int_addr,     // �жϷ�������ַ
    output reg [31:0] int_writedata, // �жϷ�����д����
    input wire [31:0] int_readdata,  // �жϷ�����������
    output reg [3:0] int_be         // �жϷ������ֽ�ʹ��
);

// ��ַ��Χ����
parameter DATA_MEM_RANGE = 32'h0000_0000;
parameter DATA_MEM_SIZE = 32'h3000; // �������ݴ洢����СΪ4KB
parameter TIMER0_RANGE = 32'h0000_7F00;
parameter TIMER0_SIZE = 32'h0B; // �����ʱ��0��СΪ16B
parameter TIMER1_RANGE = 32'h0000_7F10;
parameter TIMER1_SIZE = 32'h0B; // �����ʱ��1��СΪ16B
parameter INT_RANGE = 32'h0000_7F20;
parameter INT_SIZE = 32'h4; // �����жϷ�������СΪ4B

// ��ַ�����߼�
reg [31:0] temp0;
reg [31:0] temp1;

always @(*) begin
        // ���ݴ洢������
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

        // ��ʱ��0����
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
        // ��ʱ��1����
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
        // �жϷ���������
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
