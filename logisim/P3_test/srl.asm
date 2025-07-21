.data
array:.word 0:1000
.macro fib()
li $t0,1
li $t1,1
li $t2,0
for_1_begin:
bge $t2,$a0,for_1_end
move $t9,$t2
sll $t9,$t9,2
sw $t0,array($t9)
addi $t2,$t2,1
move $t3,$t1
add $t1,$t1,$t0
move $t0,$t3
j for_1_begin
for_1_end:
.end_macro
.text
la $a1,array
li $a0,5
fib()
li $v0,10
syscall

  