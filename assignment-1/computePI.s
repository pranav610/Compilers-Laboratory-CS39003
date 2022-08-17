	.file	"computePI.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter the number of terms: "
.LC1:
	.string	"%d"
.LC7:
	.string	"\nValue of PI: %12.10lf\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	.LC2(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	movsd	.LC3(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
	movl	$1, -28(%rbp)
	jmp	.L2
.L3:
	cvtsi2sdl	-28(%rbp), %xmm0
	movapd	%xmm0, %xmm1
	addsd	%xmm0, %xmm1
	cvtsi2sdl	-28(%rbp), %xmm0
	movapd	%xmm0, %xmm2
	addsd	%xmm0, %xmm2
	movsd	.LC3(%rip), %xmm0
	addsd	%xmm2, %xmm0
	mulsd	%xmm0, %xmm1
	cvtsi2sdl	-28(%rbp), %xmm0
	movapd	%xmm0, %xmm2
	addsd	%xmm0, %xmm2
	movsd	.LC4(%rip), %xmm0
	addsd	%xmm2, %xmm0
	mulsd	%xmm0, %xmm1
	movsd	.LC5(%rip), %xmm0
	divsd	%xmm1, %xmm0
	mulsd	-16(%rbp), %xmm0
	movsd	-24(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -24(%rbp)
	movsd	-16(%rbp), %xmm0
	movq	.LC6(%rip), %xmm1
	xorpd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	addl	$1, -28(%rbp)
.L2:
	movl	-32(%rbp), %eax
	cmpl	%eax, -28(%rbp)
	jle	.L3
	movq	-24(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC7(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC2:
	.long	0
	.long	1074266112
	.align 8
.LC3:
	.long	0
	.long	1072693248
	.align 8
.LC4:
	.long	0
	.long	1073741824
	.align 8
.LC5:
	.long	0
	.long	1074790400
	.align 16
.LC6:
	.long	0
	.long	-2147483648
	.long	0
	.long	0
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
