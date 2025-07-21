.data
stack:.space 10000
.align 4
motrix:.space 400

.macro input_num(%dst)
li $v0,5
syscall
move %dst,$v0
.end_macro

.macro cal_address(%dst,%row,%column,%rank)
mult %row,%rank
mflo %dst
addu %dst,%dst,%column
sll %dst,%dst,2
.end_macro

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
move $s0,$zero #$s0=count
move $t5,$zero #t5=top
input_num($s1)
input_num($s2)

input:
move $t0,$zero
move $t1,$zero

for_1_begin:
input_num($t2)
cal_address($t3,$t0,$t1,$s2)
sw $t2,motrix($t3)
addi $t1,$t1,1
bne $t1,$s2,for_1_begin

for_1_end:
move $t1,$zero
addi $t0,$t0,1
bne $t0,$s1,for_1_begin

input_num($s3)
input_num($s4)
input_num($s5)
input_num($s6)
subi $s5,$s5,1
subi $s6,$s6,1

subi $t2,$s3,1
subi $t3,$s4,1
search:
push($ra,$t4,$t5)
cal_address($t4,$t2,$t3,$s2)
bltz $t2,if_1_else
bltz $t3,if_1_else
bge $t2,$s1,if_1_else
bge $t3,$s2,if_1_else
lw $t0,motrix($t4)
beq $t0,1,if_1_else
beq $t2,$s5,case1
j if_2_else
case1:
beq $t3,$s6,case2
j if_2_else
case2:
addi $s0,$s0,1
j if_1_else

if_1_else:
pop($ra,$t4,$t5)
jr $ra

if_2_else:
cal_address($t4,$t2,$t3,$s2)
li $t0,1
sw $t0,motrix($t4)
push($t2,$t4,$t5)
push($t3,$t4,$t5)
addi $t2,$t2,1
jal search
pop($t3,$t4,$t5)
pop($t2,$t4,$t5)
push($t2,$t4,$t5)
push($t3,$t4,$t5)
subi $t2,$t2,1
jal search
pop($t3,$t4,$t5)
pop($t2,$t4,$t5)
push($t2,$t4,$t5)
push($t3,$t4,$t5)
addi $t3,$t3,1
jal search
pop($t3,$t4,$t5)
pop($t2,$t4,$t5)
push($t2,$t4,$t5)
push($t3,$t4,$t5)
subi $t3,$t3,1
jal search
pop($t3,$t4,$t5)
pop($t2,$t4,$t5)
cal_address($t4,$t2,$t3,$s2)
sw $zero,motrix($t4)
pop($ra,$t4,$t5)
beq $t5,$zero,end
jr $ra

end:
li $v0,1
move $a0,$s0
syscall
li $v0,10
syscall

