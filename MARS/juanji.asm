.data 
motrix1:.word 0:100
motrix2:.word 0:100
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
move $s0,$v0 #s0:the row of the motrix
li $v0,5
syscall
move $s1,$v0 #s1:the column of the motrix
li $v0,5
syscall
move $s3,$v0 #s0:the row of the motrix
li $v0,5
syscall
move $s4,$v0 #s1:the column of the motrix

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
bne $t0,$s0,for_1_begin

move $t0,$zero
move $t1,$zero

for_2_begin:
li $v0,5
syscall
move $t2,$v0
cal_address($s2,$t0,$t1,$s4)
sw $t2,motrix2($s2)
addi $t1,$t1,1
bne $t1,$s4,for_2_begin

for_2_end:
move $t1,$zero
addi $t0,$t0,1
bne $t0,$s3,for_2_begin

cal_juanji:
move $t0,$zero
move $t1,$zero
move $t8,$zero
move $t9,$zero
move $s5,$zero
sub $s6,$s0,$s3
sub $s7,$s1,$s4
addi $s6,$s6,1
addi $s7,$s7,1
for_3_begin:
cal_address($t4,$t0,$t1,$s1)
lw $t2,motrix1($t4)
cal_address($t4,$t8,$t9,$s4)
lw $t3,motrix2($t4)
mult $t2,$t3
mflo $t5
add $s5,$s5,$t5
addi $t1,$t1,1
addi $t9,$t9,1
bne $t9,$s4,for_3_begin
addi $t0,$t0,1
addi $t8,$t8,1
sub $t1,$t1,$s4
move $t9,$zero
bne $t8,$s3,for_3_begin
li $v0,1
move $a0,$s5
syscall
li $v0,4
la $a0,space
syscall
move $s5,$zero
move $t8,$zero
sub $t0,$t0,$s3
addi $t1,$t1,1
bne $t1,$s7,for_3_begin
li $v0,4
la $a0,enter
syscall
move $t1,$zero
addi $t0,$t0,1
bne $t0,$s6,for_3_begin
li $v0,10
syscall









