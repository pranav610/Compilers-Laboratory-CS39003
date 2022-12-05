	.file	"output.s"

.STR0:	.string "Enter any number not exceeding 10:\n"
.STR1:	.string "The square of the first "
.STR2:	.string "non-negative integers:\n"
.STR3:	.string " "
.STR4:	.string "\n"
	.globl	compilers
	.data
	.align 4
	.type	compilers, @object
	.size	compilers ,4
compilers:
	.long 1
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$164, %rsp
# 2:res = t001 
	movl	$10, -44(%rbp)
# 3:res = t002 
	movl	$10, -52(%rbp)
# 4:res = n arg1 = t002 
	movl	-52(%rbp), %eax
	movl	%eax, -48(%rbp)
# 5:res = t003 
	movl	$1, -60(%rbp)
# 6:res = i arg1 = t003 
	movl	-60(%rbp), %eax
	movl	%eax, -56(%rbp)
# 7:
	movq	$.STR0,	%rdi
# 8:res = t004 
	pushq %rbp
	call	printStr
	movl	%eax, -64(%rbp)
	addq $8 , %rsp
# 9:res = t005 arg1 = n 
	leaq	-48(%rbp), %rax
	movq	%rax, -72(%rbp)
# 10:res = t005 
# 11:res = t006 
	pushq %rbp
	movq	-72(%rbp), %rdi
	call	readInt
	movl	%eax, -76(%rbp)
	addq $0 , %rsp
# 12:res = t007 
	movl	$0, -80(%rbp)
# 13:res = i arg1 = t007 
	movl	-80(%rbp), %eax
	movl	%eax, -56(%rbp)
# 14:res = t008 arg1 = t007 
	movl	-80(%rbp), %eax
	movl	%eax, -84(%rbp)
# 15:arg1 = i arg2 = n 
.L3:
	movl	-56(%rbp), %eax
	movl	-48(%rbp), %edx
	cmpl	%edx, %eax
	jl .L1
# 16:
	jmp .L2
# 17:
	jmp .L2
# 18:res = t009 arg1 = i 
.L4:
	movl	-56(%rbp), %eax
	movl	%eax, -88(%rbp)
# 19:res = i arg1 = i 
	movl	-56(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 20:
	jmp .L3
# 21:res = t010 
.L1:
	movl	$0, -92(%rbp)
# 22:res = t012 arg1 = i 
	movl	-56(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -100(%rbp)
# 23:res = t011 arg1 = t010 arg2 = t012 
	movl	-92(%rbp), %eax
	movl	-100(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -96(%rbp)
# 24:res = t013 arg1 = i arg2 = i 
	movl	-56(%rbp), %eax
	imull	-56(%rbp), %eax
	movl	%eax, -104(%rbp)
# 25:res = arr arg1 = t011 arg2 = t013 
	leaq	-40(%rbp), %rdx
	movslq	-96(%rbp), %rax
	addq	%rax, %rdx
	movl	-104(%rbp), %eax
	movl	%eax, (%rdx)
# 26:res = t014 arg1 = t013 
	movl	-104(%rbp), %eax
	movl	%eax, -108(%rbp)
# 27:
	jmp .L4
# 28:
.L2:
	movq	$.STR1,	%rdi
# 29:res = t015 
	pushq %rbp
	call	printStr
	movl	%eax, -112(%rbp)
	addq $8 , %rsp
# 30:res = n 
# 31:res = t016 
	pushq %rbp
	movl	-48(%rbp) , %edi
	call	printInt
	movl	%eax, -116(%rbp)
	addq $0 , %rsp
# 32:
	movq	$.STR2,	%rdi
# 33:res = t017 
	pushq %rbp
	call	printStr
	movl	%eax, -120(%rbp)
	addq $8 , %rsp
# 34:res = t018 
	movl	$0, -124(%rbp)
# 35:res = i arg1 = t018 
	movl	-124(%rbp), %eax
	movl	%eax, -56(%rbp)
# 36:res = t019 arg1 = t018 
	movl	-124(%rbp), %eax
	movl	%eax, -128(%rbp)
# 37:arg1 = i arg2 = n 
.L7:
	movl	-56(%rbp), %eax
	movl	-48(%rbp), %edx
	cmpl	%edx, %eax
	jl .L5
# 38:
	jmp .L6
# 39:
	jmp .L6
# 40:res = t020 arg1 = i 
.L8:
	movl	-56(%rbp), %eax
	movl	%eax, -132(%rbp)
# 41:res = i arg1 = i 
	movl	-56(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 42:
	jmp .L7
# 43:res = t021 
.L5:
	movl	$0, -136(%rbp)
# 44:res = t023 arg1 = i 
	movl	-56(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -144(%rbp)
# 45:res = t022 arg1 = t021 arg2 = t023 
	movl	-136(%rbp), %eax
	movl	-144(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -140(%rbp)
# 46:res = t024 arg1 = arr arg2 = t022 
	leaq	-40(%rbp), %rdx
	movslq	-140(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -148(%rbp)
# 47:res = t024 
# 48:res = t025 
	pushq %rbp
	movl	-148(%rbp) , %edi
	call	printInt
	movl	%eax, -152(%rbp)
	addq $0 , %rsp
# 49:
	movq	$.STR3,	%rdi
# 50:res = t026 
	pushq %rbp
	call	printStr
	movl	%eax, -156(%rbp)
	addq $8 , %rsp
# 51:
	jmp .L8
# 52:
.L6:
	movq	$.STR4,	%rdi
# 53:res = t027 
	pushq %rbp
	call	printStr
	movl	%eax, -160(%rbp)
	addq $8 , %rsp
# 54:res = t028 
	movl	$0, -164(%rbp)
# 55:res = t028 
	movl	-164(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-164, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
