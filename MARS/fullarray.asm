.data
stack:.space 10000
.align 4
symbol:.space 100
.align 4
array:.space 100
.align 8
space:.asciiz " "
enter:.asciiz "\n"

.macro push(%index,%top,%n)
move %top,%n
sll %top,%top,2
sw %index,stack(%top)
addi %n,%n,1
.end_macro

.macro pop(%dst,%top,%n)
subi %n,%n,1
move %top,%n
sll %top,%top,2
lw %dst,stack(%top)
.end_macro

.text
li $v0,5
syscall
move $s0,$v0 #$s0==n
li $t0,0 #$t0==index
move $t1,$zero
move $s1,$zero
for_0_begin:
move $t2,$t1
sll $t2,$t2,2
sw $zero,array($t2)
sw $zero,symbol($t2)
addi $t1,$t1,1
bne $t1,7,for_0_begin

FullArray:
blt $t0,$s0,if_1_else
move $t1,$zero
for_1_begin:
move $t2,$t1
sll $t2,$t2,2
lw $a0,array($t2)
li $v0,1
syscall
la $a0,space
li $v0,4
syscall
addi $t1,$t1,1
bgt $s0,$t1,for_1_begin

for_1_end:
li $v0,4
la $a0,enter
syscall
jr $ra

if_1_else:
move $t1,$zero
for_2_begin:
move $t2,$t1
sll $t2,$t2,2
lw $t3,symbol($t2)
bne $t3,0,if_2_else
move $t2,$t0
sll $t2,$t2,2
addi $t3,$t1,1
sw $t3,array($t2)
move $t2,$t1
sll $t2,$t2,2
li $t4,1
sw $t4,symbol($t2)
push($t0,$t2,$s1)
push($t1,$t2,$s1)
addi $t0,$t0,1
jal FullArray
pop($t1,$t2,$s1)
pop($t0,$t2,$s1)
move $t2,$t1
sll $t2,$t2,2
sw $zero,symbol($t2)

if_2_else:
addi $t1,$t1,1
bgt $s0,$t1,for_2_begin
beqz $s1,end
jr $ra

end:
li $v0,10
syscall
