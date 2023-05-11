# 1 "second3.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "second3.S"
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 2 3 4
# 2 "second3.S" 2
# 1 "/usr/include/syscall.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/syscall.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4
# 1 "/usr/include/syscall.h" 2 3 4
# 3 "second3.S" 2


.file "second3.S"
.section .rodata
L1:
    .string "My Second program\n"
L2:
.text
.globl _start

_start:
    movl $(1), %eax
    movq $(1), %rdi
    movq $L1, %rsi
    movq $(L2-L1), %rdx
    syscall

    movl $(60), %eax
    movq $0, %rdi
    syscall
    ret
