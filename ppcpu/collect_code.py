import os
import argparse
import re

# --- 配置 ---
# 要搜索的核心文件扩展名
TARGET_EXTENSIONS = [
    '.circ',  # Logisim 电路文件
    '.asm',   # MARS 汇编代码文件
    '.v',     # Verilog 硬件描述语言文件
    '.s'      # 也可能是 .s 扩展名的汇编文件
]
# 输出文件的名称
OUTPUT_FILENAME = 'comporg_snapshot.txt'
# 需要忽略的目录名称（精确匹配）
DIRECTORIES_TO_IGNORE = [
    '.git', '.vscode', '.idea', 
    'build', 'bin', 'obj', 'sim',   # 常见的编译/仿真输出目录
    '__pycache__', 'log', 'output' # 其他常见忽略目录
]
# 需要忽略的文件扩展名（各种临时/输出文件）
EXTENSIONS_TO_IGNORE = [
    '.vcd', '.wlf', '.fsdb', # Verilog 波形文件
    '.log', '.out', '.rpt',  # 日志和报告文件
    '.svf', '.sof', '.pof',  # FPGA 配置文件
    '.jou', '.bak',          # Vivado/Quartus 临时文件
    '.exe', '.o', '.obj'
]
# 一个简单的正则表达式，用于过滤掉可能是自动生成的或备份的文件
# 示例：会过滤掉 "cpu_autobackup.v", "design.v.bak", "top_temp.v"
IGNORE_PATTERNS = [
    re.compile(r'.*_autobackup.*', re.IGNORECASE),
    re.compile(r'.*\.bak$', re.IGNORECASE),
    re.compile(r'.*_temp.*', re.IGNORECASE)
]

def collect_code_to_file(project_dir, output_file):
    """
    遍历指定目录，将所有计算机组成原理相关的核心设计文件内容整合到一个文件中。

    Args:
        project_dir (str): 项目的根目录路径。
        output_file (str): 输出文件的路径。
    """
    print(f"开始扫描项目目录: {os.path.abspath(project_dir)}")
    
    collected_files = 0
    with open(output_file, 'w', encoding='utf-8') as outfile:
        # os.walk会递归地遍历目录树
        for root, dirs, files in os.walk(project_dir):
            
            # --- 过滤需要忽略的目录 ---
            dirs[:] = [d for d in dirs if d not in DIRECTORIES_TO_IGNORE and not d.startswith('.')]
            
            # --- 遍历当前目录下的所有文件 ---
            for filename in files:
                # 检查是否是隐藏文件或需要忽略的扩展名
                if filename.startswith('.') or any(filename.endswith(ext) for ext in EXTENSIONS_TO_IGNORE):
                    continue
                
                # 使用正则表达式过滤掉备份或临时文件
                if any(pattern.match(filename) for pattern in IGNORE_PATTERNS):
                    print(f"  -> 正在忽略 (备份/临时文件): {filename}")
                    continue

                # 检查是否是我们想要的目标文件
                if any(filename.endswith(ext) for ext in TARGET_EXTENSIONS):
                    file_path = os.path.join(root, filename)
                    relative_path = os.path.relpath(file_path, project_dir)
                    
                    print(f"  -> 正在添加: {relative_path}")
                    
                    # 写入文件头，标明文件路径
                    outfile.write("=" * 80 + "\n")
                    outfile.write(f"### 文件: {relative_path.replace(os.sep, '/')} ###\n")
                    outfile.write("=" * 80 + "\n\n")
                    
                    try:
                        # 对于.circ文件（XML格式）和Verilog/ASM文件（文本），UTF-8通常适用
                        with open(file_path, 'r', encoding='utf-8', errors='replace') as infile:
                            outfile.write(infile.read())
                        
                        outfile.write("\n\n")
                        collected_files += 1
                    except Exception as e:
                        outfile.write(f"*** 无法读取文件: {e} ***\n\n")

    if collected_files > 0:
        print("-" * 40)
        print(f"成功！总共 {collected_files} 个核心设计文件已被整合到 '{os.path.abspath(output_file)}' 文件中。")
        print("你现在可以把这个文件的内容发给我了。")
    else:
        print("-" * 40)
        print(f"警告：在'{os.path.abspath(project_dir)}'目录中没有找到任何 .circ, .asm, .v 等目标文件。")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="将一个项目目录下的所有计组相关 (.circ, .asm, .v) 文件整合成一个单独的文本文件。",
        formatter_class=argparse.RawTextHelpFormatter
    )
    
    parser.add_argument(
        'directory', 
        nargs='?', 
        default='.',
        help="你想要扫描的计组项目根目录。\n(默认: '.', 即脚本所在的当前目录)"
    )
    
    parser.add_argument(
        '-o', '--output',
        default=OUTPUT_FILENAME,
        help=f"指定输出文件的名称。\n(默认: '{OUTPUT_FILENAME}')"
    )
    
    args = parser.parse_args()
    
    if not os.path.isdir(args.directory):
        print(f"错误：目录 '{args.directory}' 不存在。请提供一个有效的目录。")
    else:
        collect_code_to_file(args.directory, args.output)