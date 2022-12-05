	.file	"output.s"

.STR0:	.string "Enter the four numbers:\n"
.STR1:	.string "A random output is: "
.STR2:	.string "\n"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$20, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
# 60:res = t029 arg1 = a arg2 = b 
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
# 61:res = l arg1 = t029 
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# 62:res = t030 arg1 = t029 
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# 63:res = l 
	movl	-12(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-20, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	func, .-func
	.globl	foo
	.type	foo, @function
foo:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$28, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
# 53:res = a 
# 54:res = b 
# 55:res = t026 
	pushq %rbp
	movl	-8(%rbp) , %edi
	movl	-12(%rbp) , %esi
	call	func
	movl	%eax, -20(%rbp)
	addq $0 , %rsp
# 56:res = j arg1 = t026 
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
# 57:res = t027 arg1 = t026 
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
# 58:res = t028 arg1 = j arg2 = b 
	movl	-16(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# 59:res = t028 
	movl	-28(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-28, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	foo, .-foo
	.globl	bar
	.type	bar, @function
bar:
.LFB2:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
# 44:res = a 
# 45:res = b 
# 46:res = c 
# 47:res = t022 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-8(%rbp) , %esi
	movl	-12(%rbp) , %edx
	call	foo
	movl	%eax, -20(%rbp)
	addq $0 , %rsp
# 48:res = i arg1 = t022 
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
# 49:res = t023 arg1 = t022 
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
# 50:res = t024 arg1 = a arg2 = b 
	movl	-12(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# 51:res = t025 arg1 = i arg2 = t024 
	movl	-16(%rbp), %eax
	imull	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 52:res = t025 
	movl	-32(%rbp), %eax
	jmp	.LRT2
.LRT2:
	addq	$-32, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE2:
	.size	bar, .-bar
	.globl	get_random
	.type	get_random, @function
get_random:
.LFB3:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$60, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
# 29:res = t015 
	movl	$0, -24(%rbp)
# 30:res = i arg1 = t015 
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
# 31:res = t016 
	movl	$0, -32(%rbp)
# 32:res = j arg1 = t016 
	movl	-32(%rbp), %eax
	movl	%eax, -28(%rbp)
# 33:res = a 
# 34:res = b 
# 35:res = c 
# 36:res = t017 
	pushq %rbp
	movl	-8(%rbp) , %edi
	movl	-12(%rbp) , %esi
	movl	-16(%rbp) , %edx
	call	bar
	movl	%eax, -44(%rbp)
	addq $0 , %rsp
# 37:res = k arg1 = t017 
	movl	-44(%rbp), %eax
	movl	%eax, -36(%rbp)
# 38:res = t018 arg1 = t017 
	movl	-44(%rbp), %eax
	movl	%eax, -48(%rbp)
# 39:res = t019 arg1 = i arg2 = j 
	movl	-20(%rbp), %eax
	movl	-28(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# 40:res = t020 arg1 = t019 arg2 = k 
	movl	-52(%rbp), %eax
	movl	-36(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 41:res = l arg1 = t020 
	movl	-56(%rbp), %eax
	movl	%eax, -40(%rbp)
# 42:res = t021 arg1 = t020 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 43:res = l 
	movl	-40(%rbp), %eax
	jmp	.LRT3
.LRT3:
	addq	$-60, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE3:
	.size	get_random, .-get_random
	.globl	main
	.type	main, @function
main:
.LFB4:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
# 0:
	movq	$.STR0,	%rdi
# 1:res = t000 
	pushq %rbp
	call	printStr
	movl	%eax, -24(%rbp)
	addq $8 , %rsp
# 2:res = t001 arg1 = a 
	leaq	-4(%rbp), %rax
	movq	%rax, -32(%rbp)
# 3:res = t001 
# 4:res = t002 
	pushq %rbp
	movq	-32(%rbp), %rdi
	call	readInt
	movl	%eax, -36(%rbp)
	addq $0 , %rsp
# 5:res = t003 arg1 = b 
	leaq	-8(%rbp), %rax
	movq	%rax, -44(%rbp)
# 6:res = t003 
# 7:res = t004 
	pushq %rbp
	movq	-44(%rbp), %rdi
	call	readInt
	movl	%eax, -48(%rbp)
	addq $0 , %rsp
# 8:res = t005 arg1 = c 
	leaq	-12(%rbp), %rax
	movq	%rax, -56(%rbp)
# 9:res = t005 
# 10:res = t006 
	pushq %rbp
	movq	-56(%rbp), %rdi
	call	readInt
	movl	%eax, -60(%rbp)
	addq $0 , %rsp
# 11:res = t007 arg1 = d 
	leaq	-16(%rbp), %rax
	movq	%rax, -68(%rbp)
# 12:res = t007 
# 13:res = t008 
	pushq %rbp
	movq	-68(%rbp), %rdi
	call	readInt
	movl	%eax, -72(%rbp)
	addq $0 , %rsp
# 14:res = a 
# 15:res = b 
# 16:res = c 
# 17:res = d 
# 18:res = t009 
	pushq %rbp
	movl	-16(%rbp) , %edi
	movl	-12(%rbp) , %esi
	movl	-8(%rbp) , %edx
	movl	-4(%rbp) , %ecx
	call	get_random
	movl	%eax, -76(%rbp)
	addq $0 , %rsp
# 19:res = e arg1 = t009 
	movl	-76(%rbp), %eax
	movl	%eax, -20(%rbp)
# 20:res = t010 arg1 = t009 
	movl	-76(%rbp), %eax
	movl	%eax, -80(%rbp)
# 21:
	movq	$.STR1,	%rdi
# 22:res = t011 
	pushq %rbp
	call	printStr
	movl	%eax, -84(%rbp)
	addq $8 , %rsp
# 23:res = e 
# 24:res = t012 
	pushq %rbp
	movl	-20(%rbp) , %edi
	call	printInt
	movl	%eax, -88(%rbp)
	addq $0 , %rsp
# 25:
	movq	$.STR2,	%rdi
# 26:res = t013 
	pushq %rbp
	call	printStr
	movl	%eax, -92(%rbp)
	addq $8 , %rsp
# 27:res = t014 
	movl	$0, -96(%rbp)
# 28:res = t014 
	movl	-96(%rbp), %eax
	jmp	.LRT4
.LRT4:
	addq	$-96, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE4:
	.size	main, .-main
