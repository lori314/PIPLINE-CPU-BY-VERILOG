.text
ori $t0,$t0,1
ori $t2,$t2,1
t:
add $t1,$t1,$t0
beq $t1,$t2,t
sw $t1,3($t0)
lw $t3,3($t0)
op:
beq $0,$0,op