	section .text
	extern printf
	global main

main:
	mov eax, 0
	mov edi, fmt
	mov esi, msg
	call printf

	mov rax, 0
	ret

	section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
