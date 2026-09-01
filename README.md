# Five-Stage MIPS CPU in Verilog

这是北航计算机组成原理课程期间保留下来的完整实践仓库，内容从 Logisim 数字逻辑、MIPS 汇编，一直到 Verilog 单周期 CPU 和五级流水线 CPU。

仓库不是一个单独作业，而是按课程进度逐步积累下来的：

```text
Logisim 数字逻辑
        ↓
MIPS Assembly / MARS
        ↓
Single-Cycle CPU
        ↓
Five-Stage Pipeline CPU
        ↓
Exception / Interrupt / MMIO
```

如果只想看最终 CPU，建议直接从 `ppcpu/` 开始。

## 目录

```text
.
├── logisim/      # 前期数字逻辑与数据通路实验
├── MARS/         # MIPS 汇编练习
├── single_cpu/   # 单周期 CPU
└── ppcpu/        # 五级流水线 CPU
```

## Logisim

`logisim/` 保存了课程前期的电路实验，包括排序网络、FSM、CRC、GRF 以及早期 CPU 数据通路等。

这部分主要用于熟悉组合逻辑、时序逻辑和模块化数据通路设计。

## MIPS Assembly

`MARS/` 保存了若干 MIPS 汇编练习，例如：

- 全排列
- DFS 迷宫搜索
- 二维卷积
- 递归阶乘
- 回文判断

这一阶段主要用于熟悉寄存器、内存访问、分支跳转、过程调用和栈。

## Single-Cycle CPU

`single_cpu/` 是单周期 MIPS CPU 实现，主要模块包括：

```text
IFU
Controller
GRF
ALU
DM
Ext
Trans
mips
```

该版本把取指、译码、执行、访存和写回放在一个时钟周期内完成，是后续流水线实现的基础。

## Five-Stage Pipeline CPU

最终实现位于 `ppcpu/`，采用五级流水线：

```text
IF → ID → EX → MEM → WB
```

阶段之间使用：

```text
IF_ID
ID_EX
IE_IM
IM_IW
```

等流水寄存器传递数据与控制信息。

### 数据冒险与暂停

冲突控制逻辑位于：

```text
ppcpu/Hazard_Cotroller.v
```

> `Cotroller` 是当时源码中保留下来的拼写。

该模块同时生成 forwarding 和 stall 控制信号。代码中使用 `T_use` / `T_new` 表示操作数需要时间和结果产生时间，并结合当前各级写回寄存器判断是否需要暂停。

另外，乘除单元的 `Busy / Start` 也会参与 stall 判断。

### 乘除与 HI / LO

`ppcpu/mult.v` 统一处理乘除相关操作，并维护 HI / LO。

当前实现中：

- 乘法操作模拟 5 个周期；
- 除法操作模拟 10 个周期；
- 支持有符号 / 无符号乘除；
- 支持 `mfhi`、`mflo`、`mthi`、`mtlo` 对应的数据路径。

流水线会在乘除单元忙时暂停相关指令。

### 异常与中断

`ppcpu/cp0.v` 实现课程 CPU 中使用的 CP0 状态：

- SR / Status
- Cause
- EPC
- EXL
- 外部中断屏蔽与请求
- 延迟槽标记

源码中显式处理的异常码包括：

```text
4   address error
5   address error
8   syscall
10  reserved / illegal instruction
12  arithmetic overflow
```

异常或中断发生后会记录 EPC / Cause 并置 EXL；`eret` 路径负责清除 EXL 并返回。

### MMIO 与外设

`ppcpu/Bridge.v` 负责地址译码，把 CPU 的访存请求分发到：

- Data Memory
- Timer 0
- Timer 1
- Interrupt Generator

顶层 `ppcpu/mips.v` 将 CPU、Bridge 和两个 Timer 连接起来，并把 Timer / 外部 interrupt 汇总到硬件中断输入。

## 主要源码

如果只想快速阅读最终实现，可以按下面的顺序：

```text
ppcpu/mips.v
    ↓
ppcpu/CPU.v
    ↓
ppcpu/Controller.v
    ↓
ppcpu/Hazard_Cotroller.v
    ↓
ppcpu/IF_ID.v
ppcpu/ID_EX.v
ppcpu/IE_IM.v
ppcpu/IM_IW.v
    ↓
ppcpu/cp0.v
ppcpu/Bridge.v
ppcpu/mult.v
```

各模块旁边保留了对应的 `*_tb.v` testbench。

## 工具

课程期间主要使用：

- Logisim
- MARS
- Verilog HDL
- Xilinx ISE / ISim

`single_cpu/*.xise` 和 `ppcpu/*.xise` 保留了当时的 ISE 工程配置，部分 `.wcfg` 文件用于波形观察。

## 仓库整理

最初上传时直接把整个课程目录提交到了 GitHub，因此包含大量 ISE / ISim 自动生成的二进制、波形和综合中间文件。

当前 `main` 分支会保留：

- Logisim 电路；
- MIPS 汇编；
- Verilog 源码与 testbench；
- ISE 工程配置；
- 有用的波形配置。

自动生成的 `.exe`、`.wdb`、综合中间文件和仿真缓存已从展示分支清理。

原始完整目录仍保存在：

```text
archive-full-course-dump
```

方便需要时回看当时的工程环境。

## 说明

这是课程过程的完整记录，因此不同目录的代码风格和完成度会有明显变化。最终实现以 `ppcpu/` 为主，前面的 Logisim、MARS 和单周期 CPU 用于保留从数字逻辑到流水线处理器的学习过程。
