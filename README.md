# Five-Stage MIPS CPU in Verilog

这是计算机组成原理课程中的一组硬件实践，内容从 Logisim 数字逻辑、MIPS 汇编一直延伸到 Verilog 单周期 CPU 和五级流水线 CPU。

仓库名称中的 `PIPLINE` 是早期保留下来的拼写，核心代码位于 `single_cpu/` 和 `ppcpu/`。

## 内容概览

```text
Digital Logic (Logisim)
        ↓
MIPS Assembly (MARS)
        ↓
Single-Cycle MIPS CPU
        ↓
Five-Stage Pipeline CPU
        ↓
Exception / Interrupt + MMIO
```

## 1. Logisim 数字逻辑

`logisim/` 保存了课程前期的组合逻辑、时序逻辑与状态机实验，例如：

- 4-bit 排序网络
- FSM / 模 5 计数器
- CRC 电路
- 基础数据通路练习

这些实验用于熟悉组合逻辑、时序状态和硬件模块化设计。

## 2. MIPS 汇编

`MARS/` 中包含若干 MIPS 汇编练习，例如：

- DFS 迷宫搜索
- 二维卷积
- 全排列
- 递归阶乘
- 回文判断

这一阶段主要用于熟悉 MIPS ISA、寄存器、栈和过程调用。

## 3. 单周期 CPU

`single_cpu/` 是单周期 MIPS CPU 实现，包含：

- IFU / PC
- Controller
- GRF
- ALU
- Data Memory
- 顶层数据通路

在这一版本上先完成基本指令的取指、译码、执行、访存和写回，再进入流水线设计。

## 4. 五级流水线 CPU

核心实现位于 `ppcpu/`。

流水线划分为：

```text
IF -> ID -> EX -> MEM -> WB
```

阶段之间通过 `IF_ID`、`ID_EX`、`IE_IM`、`IM_IW` 等流水线寄存器传递数据和控制信息。

### Hazard 处理

冲突控制逻辑位于：

```text
ppcpu/Hazard_Cotroller.v
```

> 文件名中的 `Cotroller` 是当时留下的拼写。

该模块负责：

- 根据不同阶段的写回寄存器决定 forwarding 路径；
- 在数据尚未可用时产生 Stall；
- 暂停 PC / 前级流水寄存器并清空后续控制；
- 处理乘除单元 Busy / Start 带来的等待；
- 协调部分 CP0 相关流水线冲突。

实现中使用 `T_use` / `T_new` 描述操作数需要时间与结果产生时间，并据此判断是否需要暂停。

### 异常与中断

`ppcpu/cp0.v` 实现了 CP0 中与课程 CPU 相关的状态：

- Status / SR
- Cause
- EPC
- EXL
- 外部中断屏蔽与请求
- 延迟槽标记

当前代码显式处理的异常码包括：

- 4 / 5：地址异常
- 8：syscall
- 10：非法指令
- 12：算术溢出

异常或中断发生时保存 EPC / Cause 并进入 EXL 状态，`eret` 对应的控制路径负责清除 EXL 并返回。

### MMIO 与外设

`ppcpu/Bridge.v` 根据 CPU 地址将访存请求分发到：

- 数据存储器
- Timer 0
- Timer 1
- 中断发生器

因此 CPU 可以通过普通 load / store 形式访问映射到地址空间中的外设寄存器。

## 主要源码

```text
ppcpu/
├── CPU.v
├── mips.v
├── Controller.v
├── Hazard_Cotroller.v
├── IF_ID.v
├── ID_EX.v
├── IE_IM.v
├── IM_IW.v
├── cp0.v
├── Bridge.v
├── ALU.v
├── GRF.v
├── mult.v
├── div.v
└── *_tb.v
```

仓库中还保留了当时使用 Xilinx ISE / ISim 产生的工程文件、波形和编译产物。真正需要阅读的部分主要是 `.v` 源码和 testbench。

## 工具

当时主要使用：

- Verilog HDL
- Xilinx ISE / ISim
- Logisim
- MARS

## 说明

这是课程阶段的完整实验档案，因此没有把所有中间产物重新整理成一个最小化发布包。README 重点说明最终流水线 CPU 的结构，源码仍保留当时的工程环境和调试痕迹。
