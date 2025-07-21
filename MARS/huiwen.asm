.data
string:.word 20

.macro cal_address(%dst,%column)
move %dst,%column
sll %dst,%dst,2
.end_macro

.text
li $v0,5
syscall
move $s1,$v0

read_string:
move $t0,$zero
for_1_begin:
li $v0,12
syscall
cal_address($t1,$t0)
sw $v0,string($t1)
addi $t0,$t0,1
bne $t0,$s1,for_1_begin

for_1_end:
move $t0,$zero
li $s2,2
div $s1,$s2
mfhi $t1
beq $t1,1,if_1_else

for_2_begin:
sub $t4,$s1,$t0
subi $t4,$t4,1
cal_address($t2,$t0)
cal_address($t3,$t4)
lw $s2,string($t2)
lw $s3,string($t3)
bne $s2,$s3,fail
addi $t0,$t0,1
sll $t5,$t0,1
bne $t5,$s1,for_2_begin
jal for_23_end

if_1_else:
for_3_begin:
sub $t4,$s1,$t0
subi $t4,$t4,1
cal_address($t2,$t0)
cal_address($t3,$t4)
lw $s2,string($t2)
lw $s3,string($t3)
bne $s2,$s3,fail
sll $t5,$t0,1
addi $t5,$t5,1
addi $t0,$t0,1
bne $t5,$s1,for_3_begin

for_23_end:
li $v0,1
li $a0,1
syscall
li $v0,10
syscall

fail:
li $v0,1
li $a0,0
syscall
li $v0,10
syscall
