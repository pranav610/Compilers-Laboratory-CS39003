	.file	"output.s"

.STR0:	.string "Enter an integer: "
.STR1:	.string "Yes, It is a palindrome.\n"
.STR2:	.string "No, It is not a palindrome.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$100, %rsp
# 0:res = t000 
	movl	$0, -20(%rbp)
# 1:res = reversedInteger arg1 = t000 
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
# 3:
	movq	$.STR0,	%rdi
# 4:res = t002 
	pushq %rbp
	call	printStr
	movl	%eax, -28(%rbp)
	addq $8 , %rsp
# 5:res = t003 arg1 = n 
	leaq	-4(%rbp), %rax
	movq	%rax, -36(%rbp)
# 6:res = t003 
# 7:res = t004 
	pushq %rbp
	movq	-36(%rbp), %rdi
	call	readInt
	movl	%eax, -40(%rbp)
	addq $0 , %rsp
# 8:res = originalInteger arg1 = n 
	movl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
# 9:res = t005 arg1 = n 
	movl	-4(%rbp), %eax
	movl	%eax, -44(%rbp)
# 10:res = t006 
.L3:
	movl	$0, -48(%rbp)
# 11:arg1 = n arg2 = t006 
	movl	-4(%rbp), %eax
	movl	-48(%rbp), %edx
	cmpl	%edx, %eax
	jne .L1
# 12:
	jmp .L2
# 13:
	jmp .L2
# 14:res = t007 
.L1:
	movl	$10, -52(%rbp)
# 15:res = t008 arg1 = n arg2 = t007 
	movl	-4(%rbp), %eax
	cltd
	idivl	-52(%rbp), %eax
	movl	%edx, -56(%rbp)
# 16:res = remainder arg1 = t008 
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
# 17:res = t009 arg1 = t008 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 18:res = t010 
	movl	$10, -64(%rbp)
# 19:res = t011 arg1 = reversedInteger arg2 = t010 
	movl	-8(%rbp), %eax
	imull	-64(%rbp), %eax
	movl	%eax, -68(%rbp)
# 20:res = t012 arg1 = t011 arg2 = remainder 
	movl	-68(%rbp), %eax
	movl	-12(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -72(%rbp)
# 21:res = reversedInteger arg1 = t012 
	movl	-72(%rbp), %eax
	movl	%eax, -8(%rbp)
# 22:res = t013 arg1 = t012 
	movl	-72(%rbp), %eax
	movl	%eax, -76(%rbp)
# 23:res = t014 
	movl	$10, -80(%rbp)
# 24:res = t015 arg1 = n arg2 = t014 
	movl	-4(%rbp), %eax
	cltd
	idivl	-80(%rbp), %eax
	movl	%eax, -84(%rbp)
# 25:res = n arg1 = t015 
	movl	-84(%rbp), %eax
	movl	%eax, -4(%rbp)
# 26:res = t016 arg1 = t015 
	movl	-84(%rbp), %eax
	movl	%eax, -88(%rbp)
# 27:
	jmp .L3
# 28:arg1 = originalInteger arg2 = reversedInteger 
.L2:
	movl	-16(%rbp), %eax
	movl	-8(%rbp), %edx
	cmpl	%edx, %eax
	je .L4
# 29:
	jmp .L5
# 30:
	jmp .L6
# 31:
.L4:
	movq	$.STR1,	%rdi
# 32:res = t017 
	pushq %rbp
	call	printStr
	movl	%eax, -92(%rbp)
	addq $8 , %rsp
# 33:
	jmp .L6
# 34:
.L5:
	movq	$.STR2,	%rdi
# 35:res = t018 
	pushq %rbp
	call	printStr
	movl	%eax, -96(%rbp)
	addq $8 , %rsp
# 36:
	jmp .L6
# 37:res = t019 
.L6:
	movl	$0, -100(%rbp)
# 38:res = t019 
	movl	-100(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-100, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
