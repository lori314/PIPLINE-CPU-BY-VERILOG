`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:17:13 10/30/2024 
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
module CPU(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_data_rdata,
    output [31:0] i_inst_addr,
    output [31:0] m_data_addr,
    output [31:0] m_data_wdata,
    output [3 :0] m_data_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
	 output cpu_we,
	 input [5:0] HWInt
);
	
	// Inputs
	wire [4:0] RS;
	wire [4:0] RT;
	wire [4:0] rt;
	wire [4:0] rs;
	wire [4:0] rd;
	wire [4:0] RSE;
	wire [4:0] RTE;
	wire [4:0] RDE;
	wire [4:0] WAF;
	wire [4:0] WAE;
	wire [4:0] WAM;
	wire MemtoRegE;
	wire RegWriteM;
	wire RegWriteW;
	wire C0Write;
	wire C0WriteE;
	wire C0WriteM;
	wire [4:0] ExcCode;
	wire [4:0] ExcCodeF;
	wire [4:0] ExcCodeD;
	wire [4:0] ExcCodeE;
	wire [4:0] ExcCodeM;
	wire [4:0] ExcCodeA;
	wire [4:0] ExcCodeW;
	wire [31:0] HI;
	wire [31:0] LO;
	wire BDIn;
	wire BDInD;
	wire BDInE;
	wire BDInM;
	wire [2:0] nPC_selE;
	wire [31:0] AOMMux;
	wire [31:0] CP0Out;
	wire [31:0] EPCOut;
	
	wire [31:0] instrE;
	wire [31:0] instrM;
	wire [31:0] instrW;
	wire Req;

	// Outputs
	wire StallPC;
	wire StallF;
	wire CLRD;
	wire [1:0] ForwardA;
	wire [1:0] ForwardB;
	
	wire [2:0] nPC_sel;
	wire [15:0] sel_PC;
	wire [31:0] jr_PC;
	wire [25:0] instr_index;

	// Outputs
	wire [31:0] instr;
	wire [31:0] PC;
	wire n_StallPC;
	wire n_StallF;
	wire [31:0] PCF;
	wire [31:0] PCD;
	wire [31:0] PCE;
	wire [31:0] PCM;
	wire [31:0] instrD;
	
	wire MemWrite;
	wire RegWrite;
	wire ExtOp;
	wire ALUSrc;
	wire RegDst;
	wire MemtoReg;
	wire [2:0] ALUctr;
	wire ExtHigh;
	wire JAL_PC;
	wire [4:0] RD;
	wire [31:0] R1;
	wire [31:0] R2;
	wire [15:0] immediate;
	wire [31:0] ext_immediate;
	wire MemWriteE;
	wire RegDstE;
	wire [31:0] R1D;
	wire [31:0] R2D;
	wire [31:0] IMD;
	wire JAL_PCE;

	wire [31:0] A;
	wire [31:0] B;
	wire [31:0] AOD;
	// Outputs
	wire [31:0] result;
	
	wire [31:0] WDD;
	wire [4:0] WAD;

	// Outputs
	wire MemtoRegM;
	wire MemWriteM;
	wire [31:0] AOE;
	wire [31:0] WDE;
	
	wire MemtoRegW;

	wire [31:0] MDM;
	wire [31:0] AOM;

	
	wire [13:2] Mem_address;
	wire [31:0] MemtoRegMux;
	wire [31:0] Mem_data;
	wire WE;
	wire [31:0] WD;
	wire [2:0] n_sel;
	wire [2:0] ALUctrE;
	wire [31:0] out;
	wire [1:0] R1DMux;
	wire [1:0] R2DMux;
	wire [31:0] RD1;
	wire [31:0] RD2;
	wire DMMux;
	
	wire [2:0] T_use_rs;
	wire [2:0] T_use_rt;
	wire [2:0] T_use_rsE;
	wire [2:0] T_use_rtE;
	wire [2:0] T_new;
	wire [2:0] T_newE;	
	wire [2:0] T_newM;
	wire [3:0] Multop;
	wire [3:0] MultopE;
	wire start;
	wire Start;
	wire StartE;
	wire Busy;
	wire ID_EXLClr;
	wire ID_EXLClrE;
	wire ID_EXLClrM;
	
	wire [2:0] MemOp;
	wire [2:0] MemOpE;
	wire [2:0] MemOpM;
	
	wire [31:0] fixed_Mem_data;
	
//Global layer

	Hazard_Cotroller hazard_control (
		.RS(RS), 
		.RT(RT), 
		.rt(rt), 
		.rs(rs), 
		.RSE(RSE),
		.RTE(RTE),
		.WAD(WAD),
		.WAE(WAE), 
		.WAM(WAM), 
		.n_sel(n_sel),
		.PCE(PCE),
		.MemtoRegB(MemtoRegB), 
		.MemtoRegM(MemtoRegM),
		.RegWriteM(RegWriteM), 
		.RegWriteW(RegWriteW), 
		.T_use_rs(T_use_rs),
		.T_use_rt(T_use_rt),
		.T_use_rsE(T_use_rsE),
		.T_use_rtE(T_use_rtE),
		.T_new(T_new),
		.T_newE(T_newE),
		.T_newM(T_newM),
		.StallPC(StallPC), 
		.StallF(StallF), 
		.CLRD(CLRD), 
		.ForwardA(ForwardA), 
		.ForwardB(ForwardB),
		.R1DMux(R1DMux),
		.R2DMux(R2DMux),
		.DMMux(DMMux),
		.StartE(StartE),
		.start(start),
		.Busy(Busy),
		.C0WriteE(C0WriteE),
		.C0WriteM(C0WriteM),
		.ID_EXLClr(ID_EXLClr)
	);

assign w_grf_we=RegWriteW;
assign w_grf_addr=WAM;
assign w_grf_wdata=WD;
assign w_inst_addr=PCM;
assign i_inst_addr=PC;
assign instr=i_inst_rdata;

reg[5:0] count_pc;

initial begin
count_pc=0;
end
always @(*) begin
	if (PCM == 32'h0000_3548) count_pc=count_pc+1;
end	

//Fetch layer
	IFU ifu (
		.nPC_sel(nPC_sel), 
		.sel_PC(sel_PC), 
		.jr_PC(jr_PC), 
		.instr_index(instr_index), 
		.reset(reset), 
		.clk(clk), 
		.PC(PC),
		.EN(n_StallPC),
		.Req(Req),
		.EPCOut(EPCOut),
		.ExcCode(ExcCode),
		.ID_EXLClr(ID_EXLClr)
	);
	
	IF_ID if_id (
		.reset(reset), 
		.clk(clk), 
		.instr(instr), 
		.PC(PC), 
		.next_instr(instrD), 
		.next_PC(PCF), 
		.EN(n_StallF),
		.ExcCode(ExcCode),
		.ExcCodeF(ExcCodeF),
		.BDIn(BDIn),
		.BDInD(BDInD),
		.Req(Req),
		.EPCOut(EPCOut),
		.ID_EXLClr(ID_EXLClr)
	);

assign n_StallPC=~StallPC;
assign n_StallF=~StallF;
assign BDIn=(n_sel!=0)?1:0;	

//Decode layer	
	Controller controller (
		.instr(instrD), 
		.MemWrite(MemWrite), 
		.RegWrite(RegWrite), 
		.ExtOp(ExtOp), 
		.ALUSrc(ALUSrc), 
		.RegDst(RegDst), 
		.MemtoReg(MemtoReg), 
		.nPC_sel(n_sel), 
		.ALUctr(ALUctr), 
		.ExtHigh(ExtHigh), 
		.JAL_PC(JAL_PC),
		.T_use_rs(T_use_rs),
		.T_use_rt(T_use_rt),
		.T_new(T_new),
		.Multop(Multop),
		.Start(Start),
		.MemOp(MemOp),
		.ExcCodeF(ExcCodeF),
		.ExcCodeD(ExcCodeD),
		.C0Write(C0Write),
		.ID_EXLClr(ID_EXLClr)
	);
	
	GRF grf (
		.reset(reset), 
		.clk(clk), 
		.WE(WE), 
		.PC(PCM),
		.A1(RS), 
		.A2(RT), 
		.A3(WAM), 
		.WD(WD), 
		.R1(R1), 
		.R2(R2)
	);
	
	Ext ext (
		.ExtOp(ExtOp), 
		.ExtHigh(ExtHigh), 
		.in(immediate), 
		.out(ext_immediate)
	);
	
	Trans trans (
		.instr(instrD), 
		.rs(RS), 
		.rt(RT), 
		.rd(RD), 
		.immediate(immediate), 
		.instr_index(instr_index)
	);

	ID_EX id_ex (
		.CLR(CLRD), 
		.MemtoReg(MemtoReg), 
		.MemWrite(MemWrite), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUctr(ALUctr), 
		.ALUSrc(ALUSrc), 
		.MemtoRegE(MemtoRegE), 
		.RegWriteE(RegWriteE), 
		.MemWriteE(MemWriteE), 
		.WAF(WAF),
		.WAD(WAD),
		.ALUctrE(ALUctrE), 
		.ALUSrcE(ALUSrcE), 
		.RegDstE(RegDstE), 
		.PCF(PCF), 
		.PCD(PCD), 
		.Multop(Multop),
		.MultopE(MultopE),
		.R1(RD1), 
		.R2(RD2), 
		.R1D(R1D), 
		.R2D(R2D), 
		.ext_immediate(ext_immediate), 
		.IMD(IMD), 
		.clk(clk), 
		.reset(reset), 
		.JAL_PC(JAL_PC), 
		.JAL_PCE(JAL_PCE), 
		.RS(RS), 
		.rs(rs), 
		.RT(RT), 
		.rt(rt), 
		.RD(RD), 
		.rd(rd),
		.T_use_rs(T_use_rs),
		.T_use_rt(T_use_rt),
		.T_new(T_new),
		.T_use_rsE(T_use_rsE),
		.T_use_rtE(T_use_rtE),
		.T_newE(T_newE),
		.Start(Start),
		.StartE(StartE),
		.MemOp(MemOp),
		.MemOpE(MemOpE),
		.ExcCodeD(ExcCodeD),
		.ExcCodeE(ExcCodeA),
		.BDIn(BDInD),
		.BDInE(BDInE),
		.nPC_sel(nPC_sel),
		.nPC_selE(nPC_selE),
		.C0Write(C0Write),
		.C0WriteE(C0WriteE),
		.Req(Req),
		.ID_EXLClr(ID_EXLClr),
		.ID_EXLClrE(ID_EXLClrE),
		.instrD(instrD),
		.instrE(instrE)
	);

assign RD1=(R1DMux==1)?AOE:
			  (R1DMux==2)?WD:
			  R1;
assign RD2=(R2DMux==1)?AOE:
			  (R2DMux==2)?WD:
			  R2;	
assign equal=(RD1==RD2);
assign nPC_sel=(n_sel==1 && equal==0)?0:
					(n_sel==4 && equal==1)?0:
					n_sel;				
assign sel_PC=immediate;
assign jr_PC=RD1;
assign WAF=(JAL_PC==1)?31:
				(RegDst==1)?RD:
				RT;


//Execute layer
	ALU alu (
		.rs(A), 
		.rt(B), 
		.ALUop(ALUctrE), 
		.result(result),
		.ExcCodeA(ExcCodeA),
		.ExcCodeE(ExcCodeE),
		.MemtoRegE(MemtoRegE),
		.MemWriteE(MemWriteE)
	);
	
	mult mul (
		.reset(reset), 
		.clk(clk), 
		.start(start), 
		.op(MultopE), 
		.Busy(Busy), 
		.A(A), 
		.B(B), 
		.HI(HI), 
		.LO(LO),
		.Req(Req)
	);
	
	IE_IM ie_im (
		.reset(reset), 
		.clk(clk), 
		.MemtoRegE(MemtoRegE), 
		.MemWriteE(MemWriteE), 
		.RegWriteE(RegWriteE), 
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.RSE(RSE),
		.RTE(RTE),
		.RDE(RDE),
		.result(AOD), 
		.WDD(WDD), 
		.WAD(WAD), 
		.MemtoRegM(MemtoRegM), 
		.RegWriteM(RegWriteM), 
		.MemWriteM(MemWriteM), 
		.AOE(AOE), 
		.WDE(WDE), 
		.WAE(WAE), 
		.PCD(PCD), 
		.PCE(PCE),
		.T_newE(T_newE),
		.T_newM(T_newM),
		.MemOpE(MemOpE),
		.MemOpM(MemOpM),
		.ExcCodeE(ExcCodeE),
		.ExcCodeM(ExcCodeM),
		.BDInE(BDInE),
		.BDInM(BDInM),
		.C0WriteE(C0WriteE),
		.C0WriteM(C0WriteM),
		.Req(Req),
		.ID_EXLClrE(ID_EXLClrE),
		.ID_EXLClrM(ID_EXLClrM),
		.instrE(instrE),
		.instrM(instrM)
	);

assign A=(ForwardA==2)?AOE:
			(ForwardA==1)?WD:
			R1D;
assign AOD=(JAL_PCE==1)?PCD+8:
				(MultopE==5)?HI:
				(MultopE==6)?LO:
				result;
assign WDD=(ForwardB==2)?AOE:
			(ForwardB==1)?WD:
			R2D;
assign B=(ALUSrcE==1)?IMD:
			WDD;

//Memory layer
	DE de (
		.Address(AOE), 
		.Din(m_data_rdata), 
		.MemOpE(MemOpM), 
		.Dout(out),
		.Req(Req)
	);
	
	BE be (
		.m_data_byteen(m_data_byteen), 
		.Address(AOE), 
		.MemOpE(MemOpM), 
		.MemWriteE(MemWriteM),
		.Mem_data(Mem_data),
		.fixed_Mem_data(fixed_Mem_data),
		.Req(Req)
	);
	
	IM_IW im_iw (
		.reset(reset), 
		.clk(clk), 
		.MemtoRegM(MemtoRegM), 
		.RegWriteM(RegWriteM), 
		.MemtoRegW(MemtoRegW), 
		.RegWriteW(RegWriteW), 
		.out(out), 
		.MDM(MDM), 
		.AOE(AOMMux), 
		.AOM(AOM), 
		.WAE(WAE), 
		.WAM(WAM), 
		.PCE(PCE), 
		.PCM(PCM),
		.Req(Req),
		.instrM(instrM),
		.instrW(instrW)
	);
	
	ExcM excM (
		.MemtoRegM(MemtoRegM), 
		.MemWriteM(MemWriteM), 
		.MemOpM(MemOpM), 
		.Address(AOE), 
		.ExcCodeM(ExcCodeM), 
		.ExcCodeW(ExcCodeW)
	);
	
	CP0 cp0 (
		.clk(clk), 
		.reset(reset), 
		.en(C0WriteM), 
		.CP0Add(RDE), 
		.CP0In(Mem_data), 
		.CP0Out(CP0Out), 
		.VPC(PCE), 
		.BDIn(BDInM), 
		.ExcCodeIn(ExcCodeW), 
		.HWInt(HWInt), 
		.EXLClr(ID_EXLClrM), 
		.EPCOut(EPCOut), 
		.Req(Req)
	);
	
reg [31:0] instrP;
reg [31:0] instrQ;
reg [31:0] instrH;
reg [31:0] instr1;
reg [31:0] instr2;
reg [31:0] instr3;
reg [31:0] instr4;
reg [31:0] instr5;
reg [31:0] instr6;
reg [31:0] instr7;
reg [31:0] instr8;
reg [31:0] instr9;
reg [31:0] instr10;
reg [31:0] PCW;
reg [31:0] PC1;
reg [31:0] PC2;
reg [31:0] PC3;
reg [31:0] PC4;
reg [31:0] PC5;
reg [31:0] PC6;
reg [31:0] PC7;
reg [31:0] PC8;
reg [31:0] PC9;
reg [31:0] PC10;

always @(posedge clk) begin
instrP<=instrW;
instrQ<=instrP;
instrH<=instrQ;
instr1<=instrH;
instr2<=instr1;
instr3<=instr2;
instr4<=instr3;
instr5<=instr4;
instr6<=instr5;
instr7<=instr6;
instr8<=instr7;
instr9<=instr8;
instr10<=instr9;
PCW<=PCM;
PC1<=PCW;
PC2<=PC1;
PC3<=PC2;
PC4<=PC3;
PC5<=PC4;
PC6<=PC5;
PC7<=PC6;
PC8<=PC7;
PC9<=PC8;
PC10<=PC9;
end
	
assign m_data_addr=AOE;
assign m_data_wdata=fixed_Mem_data;
assign m_inst_addr=PCE;
assign AOMMux=(MemOpM==6)?CP0Out:AOE;
assign cpu_we=MemWriteM;

//Write layer
assign MemtoRegMux=(MemtoRegW==1)?MDM:AOM;
assign WE=RegWriteW;
assign WD=MemtoRegMux;
assign Mem_data=(DMMux==1)?WD:WDE;

endmodule
