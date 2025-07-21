.data
stack:.space 10000

.macro push(%dst)
sw %dst,stack($sp)
addi $sp,$sp,4
.end_macro

.macro pop(%dst)
subi $sp,$sp,4
lw %dst,stack($sp)
.end_macro

.text
.eqv n,$s0
.eqv ans,$t0

move $sp,$zero
input:
li $v0,5
syscall
move n,$v0

fab:	
	push($ra)
	beqz n,if_1_else
		push(n)
		subi n,n,1
		jal fab
		pop(n)
		mult n,ans
		mflo ans
		pop($ra)
		beqz $sp,end
		jr $ra
	if_1_else:
		li ans,1
		pop($ra)
		beqz $sp,end
		jr $ra

end:
li $v0,1
move $a0,ans
syscall
li $v0,10
syscall
	