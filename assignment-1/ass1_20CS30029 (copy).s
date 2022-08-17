	.file	"asgn1.c"										# original source file name (used for debugging)
	.text													# code starts here
	.section	.rodata										# read only data section
	.align 8												# align to 8 byte boundary

# .LC0, .LC1, .LC2, .LC3 are the labels for zero terminated strings and 
# are included in the .rodata section. (read only data), 

.LC0:														# label of f-string-1st printf 
	.string	"Enter the string (all lowrer case): "		
.LC1:														# label of f-string scanf
	.string	"%s"
.LC2:														# label of f-string-2nd printf
	.string	"Length of the string: %d\n"				
	.align 8
.LC3:														# label of f-string-3rd printf
	.string	"The string in descending order: %s\n"
	.text													# code starts here
	.globl	main											# main is a global name
	.type	main, @function									# main is a function
main:														# main: starts 
.LFB0:													
	.cfi_startproc											# begin internal structure initialization and emit initial CFI for entrance in.eh frame
	endbr64													# 64-bit indirect branch termination	
	pushq	%rbp											# save callee saved base pointer(rbp) in stack(rsp)
	.cfi_def_cfa_offset 16									# CFA is set at a 16-byte offset from the current stack pointer
	.cfi_offset 6, -16										# set register 6's value at offset 16 using CFA
	movq	%rsp, %rbp										# move data stored in stack pointer(rsp) to callee saved pointer(rbp) rsp -> rbp
	.cfi_def_cfa_register 6		

# local variables:
# char str[20], dest[20];
# int len;  
	subq	$80, %rsp										# creation of 80 bytes space for loacal variables in stack frame
	movq	%fs:40, %rax									# segment addressing
	movq	%rax, -8(%rbp)									# M[rbp-8] <-- rax
	xorl	%eax, %eax										# clear eax
	
# 1st printf 
# printf("Enter the string (all lowrer case): ");
	leaq	.LC0(%rip), %rdi								# load next instruction pointer of label .LC0 to 1st argument for printf function
	movl	$0, %eax										# moves address of constant register 0 to ret value from printf function(eax)
	call	printf@PLT										# call printf with argument NULL terminated string with label .LC0
	
# scanf("%s", str);	
	leaq	-64(%rbp), %rax 								# from stack extract str and save it to %rax register temporary					
	movq	%rax, %rsi										# move str from %rax to 2nd argument register %rsi
	leaq	.LC1(%rip), %rdi								# load next intruction pointer of .LC1 label to 1st argument register(%rdi)
	movl	$0, %eax										# set 0 as return value
	call	__isoc99_scanf@PLT								# call scanf function with 2 arguments "%s" and str
	
# len = length(str); // calling length function
	leaq	-64(%rbp), %rax 								# from stack extract str and save it to %rax register temporary					
	movq	%rax, %rdi										# move str from %rax to 1st argument register %rdi
	call	length											# call length label with argument str

# 
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rdx
	movl	-68(%rbp), %ecx
	leaq	-64(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	sort
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main

	.globl	length											# length is a global name 
	.type	length, @function								# length is a function

# len = length(str); // calling length function
length:
.LFB1:
	.cfi_startproc											# begin internal structure initialization and emit initial CFI for entrance in.eh frame
	endbr64													# 64-bit indirect branch termination	
	pushq	%rbp											# push callee saved(base pointer %rbp) to stack
	.cfi_def_cfa_offset 16									
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# move value of stack pointer to %rbp for debuggig purpose(maybe)
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)									# store 1st argument used while calling the function length a local variable

# int i;
# for (i = 0; str[i] !='\0'; i++) // computing length of the string
	movl	$0, -4(%rbp)									# set i = 0
	jmp	.L5													# unconditional jump to label .L5
.L6:
	addl	$1, -4(%rbp)									# increment in i by 1			
.L5:
	movl	-4(%rbp), %eax									# set %eax equal to i
	movslq	%eax, %rdx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rax									# move str to %rax
	addq	%rdx, %rax										# rdx = rdx + rax, this will store address of str+i ie &str[i]
	movzbl	(%rax), %eax									# move value pointed by larger register rax temporarily to eax
	testb	%al, %al										# checking of smallest part of rax as NULL or not by taking AND with itself
	jne	.L6													# if not equal to NULL then jump to label .L6
	movl	-4(%rbp), %eax									# set return value of function as i
	popq	%rbp											# clears stack associated with function length
	.cfi_def_cfa 7, 8
	ret														# transfer of control to next instruction pointer of caller function
	.cfi_endproc
.LFE1:
	.size	length, .-length


	.globl	sort											# sort is a global name
	.type	sort, @function									# sort is a function

# void sort(char str[20], int len, char dest[20])
sort:
.LFB2:
	.cfi_startproc											# begin internal structure initialization and emit initial CFI for entrance in.eh frame
	endbr64													# 64-bit indirect branch termination	
	pushq	%rbp											# push callee saved(base pointer %rbp) to stack
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp										# move value of stack pointer to %rbp for debuggig purpose(maybe)
	.cfi_def_cfa_register 6

# int i, j;
# char temp;
	subq	$48, %rsp										# creation of 48 bytes space for loacal variables
	movq	%rdi, -24(%rbp)									# move 1st argument (char str[20]) to %rbp (convert argument into local variable)
	movl	%esi, -28(%rbp)									# move 2nd argument (int len) to %rbp (convert argument into local variable)
	movq	%rdx, -40(%rbp)									# move 3rd argument (char dest[20]) to %rbp (convert argument into local variable)

# for (i = 0; i < len; i++)
	movl	$0, -8(%rbp)									# set i = 0
	jmp	.L9													# unconditional jump to label .L9

# for (j = 0; j < len; j++)
.L13:
	movl	$0, -4(%rbp)									# set j = 0
	jmp	.L10												# unconditional jump to label .L10

# . if (str[i] < str[j]) // sorting in ascending order
#           {
#               temp = str[i];
#               str[i] = str[j];
#               str[j] = temp;
#           }
.L12:
	movl	-8(%rbp), %eax									# move value of j temporarily to register %eax
	movslq	%eax, %rdx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rax									# move str to %rax
	addq	%rdx, %rax										# rdx = rdx + rax, this will store address of str+i ie &str[i]
	movzbl	(%rax), %edx									# move value pointed by larger register rax temporarily to edx
	movl	-4(%rbp), %eax									# move value of i temporarily to register %eax
	movslq	%eax, %rcx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rax									# move str to %rax
	addq	%rcx, %rax										# rdx = rdx + rax, this will store address of str+j ie &str[j]
	movzbl	(%rax), %eax									# move value pointed by larger register rax temporarily to eax
# . if(str[i] < str[j])
	cmpb	%al, %dl										# compare single bytes str[i] with str[j]
	jge	.L11												# if str[i] > str[j] jump to the lanbel .L11
# for str[i] <= str[j] the below part will be executed
	movl	-8(%rbp), %eax									# move value of j temporarily to register %eax
	movslq	%eax, %rdx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rax									# move value of str temporarily to register %rax
	addq	%rdx, %rax										# rdx = rdx + rax, this will store address of str+i ie &str[i]
	movzbl	(%rax), %eax									# move value pointed by larger register rax temporarily to edx				
# temp = str[i];
	movb	%al, -9(%rbp)									# move first 8 bits of register %rax to local variable temp
	movl	-4(%rbp), %eax									# move value of i temporarily to register %eax
	movslq	%eax, %rdx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rax									# move str to %rax
	addq	%rdx, %rax										# rdx = rdx + rax, this will store address of str+i ie &str[i]
	movl	-8(%rbp), %edx									# move value of j temporarily to register %edx
	movslq	%edx, %rcx										# move value from lesser bit register to larger bit register
	movq	-24(%rbp), %rdx									# move str to %rdx
	addq	%rcx, %rdx										# rcx = rcx + rdx, this will store address of str+i ie &str[i]
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-9(%rbp), %eax
	movb	%al, (%rdx)
.L11:
	addl	$1, -4(%rbp)									# set i = i + 1

# for (j = 0; j < len; j++)
.L10:
	movl	-4(%rbp), %eax									# move value of j temporarily to register %eax
	cmpl	-28(%rbp), %eax									# compare value of len with j
	jl	.L12												# if j larger than or equal to len then jump to the .L12 label
	addl	$1, -8(%rbp)									# if j is less than len then update j to j + 1
.L9:
	movl	-8(%rbp), %eax									# store value of i in register %eax (temporary)
	cmpl	-28(%rbp), %eax									# comaprison of len with i
	jl	.L13												# if i < len then jump to the label .L13			
# for i greater than or equal to len below part will get executed
	movq	-40(%rbp), %rdx									# set char dest[20] in 3rd argument register 							
	movl	-28(%rbp), %ecx									# move value of int len to register %ecx	
	movq	-24(%rbp), %rax									# move value of char str[20] to register %rax
	movl	%ecx, %esi										# move value of %ecx to %esi(2nd argument register)
	movq	%rax, %rdi										# move valur of %rax to %rdi(1st argument register)
	call	reverse											# call to reverse function with arguments str, len, dest
	nop														# does nothing 
	leave													# removes stack frame
	.cfi_def_cfa 7, 8
	ret														# transfer of control to next instruction pointer of caller function
	.cfi_endproc
.LFE2:
	.size	sort, .-sort


	.globl	reverse 										# reverse is a global name
	.type	reverse, @function								# reverse is a function

# void reverse(char str[20], int len, char dest[20])
reverse:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%rdx, -40(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L15
.L20:
	movl	-28(%rbp), %eax
	subl	-8(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -4(%rbp)
	nop
	movl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -4(%rbp)
	jl	.L18
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L23
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movb	%al, -9(%rbp)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movzbl	-9(%rbp), %eax
	movb	%al, (%rdx)
	jmp	.L18
.L23:
	nop
.L18:
	addl	$1, -8(%rbp)
.L15:
	movl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -8(%rbp)
	jl	.L20
	movl	$0, -8(%rbp)
	jmp	.L21
.L22:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	-40(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -8(%rbp)
.L21:
	movl	-8(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L22
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	reverse, .-reverse
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
