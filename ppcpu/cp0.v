`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:33 11/27/2024 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
    input clk,
    input reset,
    input en,
    input [4:0] CP0Add,
    input [31:0] CP0In,
    output reg[31:0] CP0Out,
    input [31:0] VPC,
    input BDIn,
    input [4:0] ExcCodeIn,
    input [5:0] HWInt,
    input EXLClr,
    output [31:0] EPCOut,
    output Req
    );

// CP0内部寄存器定义
reg [31:0] SR;    // State Register
reg [31:0] Cause; // Cause Register
reg [31:0] EPC;   // Exception Program Counter

wire inte;
wire error;
wire[4:0] real_ExcCode;

// 初始化寄存器
initial begin
    SR = 32'b0;
    Cause = 32'b0;
    EPC = 32'b0;
end

assign EPCOut=EPC;
assign Req=(( (HWInt & SR[15:10]) != 0 && SR[1] == 0 && SR[0] == 1)|| ((ExcCodeIn == 5'd4) || (ExcCodeIn == 5'd5)
                        ||(ExcCodeIn == 5'd8) || (ExcCodeIn == 5'd10) || (ExcCodeIn == 5'd12)))?1:0;
assign inte=((HWInt & SR[15:10]) != 0 && SR[1] == 0 && SR[0] == 1) ? 1:0;
assign error=(((ExcCodeIn == 5'd4) || (ExcCodeIn == 5'd5)
                        ||(ExcCodeIn == 5'd8) || (ExcCodeIn == 5'd10) || (ExcCodeIn == 5'd12) )&&(!inte))?1:0;
assign real_ExcCode=(inte)?0:ExcCodeIn;


// 处理写入操作
always @(posedge clk or posedge reset) begin
	 if(reset) begin
		  SR<=0;
		  Cause<=0;
		  EPC<=0;
	 end
	 else if(EXLClr) begin
		  SR[1] <= 0;
	 end
	 else if (inte||error) begin
		  if(inte) begin
				if (BDIn) EPC <= VPC - 4;
				else EPC <= VPC;
				// 记录异常发生时的PC值
				Cause[15:10] <= HWInt;
				Cause[6:2] <=real_ExcCode;
				Cause[31] <= BDIn; // 记录是否为延迟槽指令
				SR[1] <= 1; // 设置EXL位
		 end
		 else if(error && (inte!=1) ) begin
				SR[1] <= 1; // 设置EXL位
				Cause[6:2] <= real_ExcCode; // 记录异常代码
				Cause[15:10] <= HWInt;
				Cause[31] <= BDIn; // 记录是否为延迟槽指令
				if (BDIn) EPC <= VPC - 4;
				else EPC <= VPC;
				// 记录异常发生时的PC值
		 end
	 end
    else if (en) begin
		  Cause[15:10] <= HWInt;
        case (CP0Add)
            12: begin 
					 SR[15:10] <= CP0In[15:10];
					 SR[1] <= CP0In[1];
					 SR[0] <= CP0In[0];
					 end
            14: EPC <= CP0In;
            default: ;
        endcase
    end
	 else begin
	 Cause[15:10] <= HWInt;
	 end
end

always @(*) begin
    case (CP0Add)
        12: CP0Out = SR;
        13: CP0Out = Cause;
        14: CP0Out = EPC;
        default: CP0Out = 32'b0;
    endcase
	 
end

endmodule
