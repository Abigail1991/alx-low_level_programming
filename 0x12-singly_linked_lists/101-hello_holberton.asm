extern printf
global _start

section .text

_start:
mov rax, 0
mov rdi, fmt
mov rsi, msg
mov rdx, msglen
syscall

mov rax, 0
mov rdi, 0
syscall

section .rodata
msg: db "Hello, Holberton",
 0
fmt: db "%s", 10, 0
