	.file	"main.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter the data, termiante with Ctrl+D"
.LC1:
	.string	"%d"
.LC2:
	.string	"Data in sorted Order are: "
.LC3:
	.string	"%d "
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
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -424(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	jmp	.L2
.L3:
	addl	$1, -424(%rbp)
.L2:
	leaq	-416(%rbp), %rax
	movl	-424(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	cmpl	$-1, %eax
	jne	.L3
	movl	-424(%rbp), %edx
	leaq	-416(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	selectionSort@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -420(%rbp)
	jmp	.L4
.L5:
	movl	-420(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -420(%rbp)
.L4:
	movl	-420(%rbp), %eax
	cmpl	-424(%rbp), %eax
	jl	.L5
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
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
