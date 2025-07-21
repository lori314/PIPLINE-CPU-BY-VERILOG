.data
array:.space 10000
zero:.asciiz "0"

.macro cal_address(%dst,%column)
move $t8,%column
sll $t8,$t8,2
move %dst,$t8
.end_macro

.macro store(%index,%num)
cal_address($t4,%index)
sw %num,array($t4)
.end_macro

.macro load(%index,%num)
cal_address($t4,%index)
lw %num,array($t4)
.end_macro

.macro print(%dst)
li $v0,1
move $a0,%dst
syscall
.end_macro

.text
.eqv n,$s0
.eqv i,$t0
.eqv k,$t1
.eqv high,$t2
.eqv temp,$t3
.eqv semp,$t5
.eqv remp,$t6

input:
li $v0,5
syscall
move n,$v0

cal:
li k,1
move i,$zero
store(i,k)
move high,$zero
li i,1
for_1_begin:
	bgt i,n,for_1_end
	li k,0
	for_2_begin:
		bgt k,high,for_2_end
		load(k,temp)
		mult temp,i
		mflo temp
		store(k,temp)
		addi k,k,1
		j for_2_begin
	
	for_2_end:
	li k,0
	for_3_begin:
		bgt k,high,for_3_end
		load(k,temp)
		ble temp,1000,if_1_else
			li semp,1000
			div temp,semp
			mflo temp
			addi semp,k,1
			load(semp,remp)
			add remp,remp,temp
			store(semp,remp)
			li semp,1000
			load(k,temp)
			div temp,semp
			mfhi temp
			store(k,temp)
			addi semp,k,1
			bge high,semp,if_2_else
				move high,semp
			if_2_else:
		if_1_else:
		addi k,k,1
		j for_3_begin
		
	for_3_end:
	addi i,i,1
	j for_1_begin
for_1_end:
move i,high
for_4_begin:
	bltz i,for_4_end
	load(i,k)
	li temp,0
	while_begin:
		li semp,10
		div k,semp
		mflo remp
		beqz remp,while_end
		move k,remp
		addi temp,temp,1
		j while_begin
	while_end:
	li k,0
	li semp,2
	sub temp,semp,temp
	for_5_begin:
		bge k,temp,for_5_end
		print($zero)
		addi k,k,1
		j for_5_begin
	for_5_end:
	load(i,temp)
	print(temp)
	subi i,i,1
	j for_4_begin
for_4_end:
li $v0,10
syscall

		
		
	