.data 
motrix1:.word 0:64
motrix2:.word 0:64
space:.asciiz " "
enter:.asciiz "\n"

.macro cal_address(%dst,%row,%column,%rank)
mult %row,%rank
mflo %dst
addu %dst,%dst,%column
sll %dst,%dst,2
.end_macro

.text

li $v0,5
syscall
move $s1,$v0 #s1:the row of the motrix
input:
move $t0,$zero
move $t1,$zero

for_1_begin:
li $v0,5
syscall
move $t2,$v0
cal_address($s2,$t0,$t1,$s1)
sw $t2,motrix1($s2)
addi $t1,$t1,1
bne $t1,$s1,for_1_begin

for_1_end:
move $t1,$zero
addi $t0,$t0,1
bne $t0,$s1,for_1_begin

move $t0,$zero
move $t1,$zero

for_2_begin:
li $v0,5
syscall
move $t2,$v0
cal_address($s2,$t0,$t1,$s1)
sw $t2,motrix2($s2)
addi $t1,$t1,1
bne $t1,$s1,for_2_begin

for_2_end:
move $t1,$zero
addi $t0,$t0,1
bne $t0,$s1,for_2_begin

motrix_mult:
move $t0,$zero
move $t1,$zero
move $t5,$zero
move $t6,$zero

for_3_begin:
cal_address($s2,$t0,$t1,$s1)
cal_address($s3,$t1,$t6,$s1)
lw $t2,motrix1($s2)
lw $t3,motrix2($s3)
mult $t2,$t3
mflo $t4
add $t5,$t5,$t4
addi $t1,$t1,1
bne $t1,$s1,for_3_begin

for_3_end:
li $v0,1
move $a0,$t5
syscall
move $t5,$zero
li $v0,4
la $a0,space
syscall
addi $t6,$t6,1
move $t1,$zero
bne $t6,$s1,for_3_begin
li $v0,4
la $a0,enter
syscall
move $t6,$zero
addi $t0,$t0,1
bne $t0,$s1,for_3_begin

li $v0,10
syscall





