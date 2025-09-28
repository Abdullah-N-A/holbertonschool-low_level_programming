; 100-hello_world.asm
; 64-bit NASM assembly program
; Prints "Hello, World" followed by a newline, then exits with SUCCESS (0)

section .data
msg:    db "Hello, World", 0x0A    ; our message
len     equ $ - msg                ; length of message

section .text
global _start

_start:
    ; write(1, msg, len)
    mov     rax, 1          ; syscall: write
    mov     rdi, 1          ; fd = 1 (stdout)
    lea     rsi, [rel msg]  ; address of string
    mov     rdx, len        ; length
    syscall

    ; exit(0)
    mov     rax, 60         ; syscall: exit
    xor     rdi, rdi        ; status = 0 (SUCCESS)
    syscall
