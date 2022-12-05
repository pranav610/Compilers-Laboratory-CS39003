	.file	"output.s"

.STR0:	.string "This program doesn't print anything\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$115, %rsp
# 0:res = t000 
	movl	$2, -8(%rbp)
# 1:res = n arg1 = t000 
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# 2:res = t001 
	movl	$0, -12(%rbp)
# 3:arg1 = n arg2 = t001 
	movl	-4(%rbp), %eax
	movl	-12(%rbp), %edx
	cmpl	%edx, %eax
	jge .L1
# 4:
	jmp .L2
# 5:
	jmp .L3
# 6:res = t002 
.L1:
	movl	$10, -16(%rbp)
# 7:arg1 = n arg2 = t002 
	movl	-4(%rbp), %eax
	movl	-16(%rbp), %edx
	cmpl	%edx, %eax
	jle .L4
# 8:
	jmp .L5
# 9:
	jmp .L6
# 10:res = t003 
.L4:
	movb	$97, -18(%rbp)
# 11:res = a arg1 = t003 
	movzbl	-18(%rbp), %eax
	movb	%al, -17(%rbp)
# 12:res = t004 
	movb	$98, -20(%rbp)
# 13:res = b arg1 = t004 
	movzbl	-20(%rbp), %eax
	movb	%al, -19(%rbp)
# 14:res = t005 
	movb	$99, -22(%rbp)
# 15:res = c arg1 = t005 
	movzbl	-22(%rbp), %eax
	movb	%al, -21(%rbp)
# 16:res = t006 arg1 = a 
	leaq	-17(%rbp), %rax
	movq	%rax, -38(%rbp)
# 17:res = d arg1 = t006 
	movq	-38(%rbp), %rax
	movq	%rax, -30(%rbp)
# 18:res = t007 
	movl	$9, -46(%rbp)
# 19:res = k arg1 = t007 
	movl	-46(%rbp), %eax
	movl	%eax, -42(%rbp)
# 20:res = t008 
	movl	$10, -54(%rbp)
# 21:res = t009 arg1 = k arg2 = t008 
	movl	-42(%rbp), %eax
	movl	-54(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -58(%rbp)
# 22:res = l arg1 = t009 
	movl	-58(%rbp), %eax
	movl	%eax, -50(%rbp)
# 23:res = t010 
	movl	$50, -66(%rbp)
# 24:res = i arg1 = t010 
	movl	-66(%rbp), %eax
	movl	%eax, -62(%rbp)
# 25:res = t011 arg1 = l 
	leaq	-50(%rbp), %rax
	movq	%rax, -82(%rbp)
# 26:res = p arg1 = t011 
	movq	-82(%rbp), %rax
	movq	%rax, -74(%rbp)
# 27:
	jmp .L3
# 28:res = t012 
.L5:
	movb	$97, -83(%rbp)
# 29:res = a arg1 = t012 
	movzbl	-83(%rbp), %eax
	movb	%al, -17(%rbp)
# 30:res = t013 
	movl	$11, -95(%rbp)
# 31:res = h arg1 = t013 
	movq	-95(%rbp), %rax
	movq	%rax, -91(%rbp)
# 32:
	jmp .L3
# 33:
.L6:
	jmp .L3
# 34:res = t014 
.L2:
	movl	$0, -99(%rbp)
# 35:res = t014 
	movl	-99(%rbp), %eax
	jmp	.LRT0
# 36:
	jmp .L3
# 37:res = t015 
.L3:
	movl	$35, -103(%rbp)
# 38:res = n arg1 = t015 
	movl	-103(%rbp), %eax
	movl	%eax, -4(%rbp)
# 39:res = t016 arg1 = t015 
	movl	-103(%rbp), %eax
	movl	%eax, -107(%rbp)
# 40:
	movq	$.STR0,	%rdi
# 41:res = t017 
	pushq %rbp
	call	printStr
	movl	%eax, -111(%rbp)
	addq $8 , %rsp
# 42:res = t018 
	movl	$0, -115(%rbp)
# 43:res = t018 
	movl	-115(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-115, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
	.globl	mult
	.type	mult, @function
mult:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$60, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
# 44:res = t019 arg1 = a arg2 = b 
	movl	-8(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
# 45:res = ans arg1 = t019 
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# 46:res = t020 arg1 = t019 
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# 47:res = t021 arg1 = ans arg2 = a 
	movl	-12(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -24(%rbp)
# 48:res = ans arg1 = t021 
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
# 49:res = t022 arg1 = t021 
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
# 50:res = t023 arg1 = b arg2 = ans 
	movl	-4(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -32(%rbp)
# 51:res = a arg1 = t023 
	movl	-32(%rbp), %eax
	movl	%eax, -8(%rbp)
# 52:res = t024 arg1 = t023 
	movl	-32(%rbp), %eax
	movl	%eax, -36(%rbp)
# 53:res = t025 arg1 = a arg2 = a 
	movl	-8(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -40(%rbp)
# 54:res = t026 arg1 = b arg2 = b 
	movl	-4(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -44(%rbp)
# 55:res = t027 arg1 = t025 arg2 = t026 
	movl	-40(%rbp), %eax
	movl	-44(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
# 56:res = t028 arg1 = ans arg2 = ans 
	movl	-12(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -52(%rbp)
# 57:res = t029 arg1 = t027 arg2 = t028 
	movl	-48(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 58:res = ans arg1 = t029 
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
# 59:res = t030 arg1 = t029 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 60:res = ans 
	movl	-12(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-60, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	mult, .-mult
	.globl	func
	.type	func, @function
func:
.LFB2:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$34, %rsp
	movb	%dil, -1(%rbp)
	movl	%esi, -5(%rbp)
	movl	%edx, -9(%rbp)
# 61:res = t031 arg1 = c 
	leaq	-1(%rbp), %rax
	movq	%rax, -25(%rbp)
# 62:res = p arg1 = t031 
	movq	-25(%rbp), %rax
	movq	%rax, -17(%rbp)
# 63:res = t032 arg1 = a arg2 = b 
	movl	-9(%rbp), %eax
	movl	-5(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -33(%rbp)
# 64:res = i arg1 = t032 
	movl	-33(%rbp), %eax
	movl	%eax, -29(%rbp)
# 65:res = t033 arg1 = p 
	movq	-17(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -34(%rbp)
# 66:res = t033 
	movzbl	-34(%rbp), %eax
	jmp	.LRT2
.LRT2:
	addq	$-34, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE2:
	.size	func, .-func
