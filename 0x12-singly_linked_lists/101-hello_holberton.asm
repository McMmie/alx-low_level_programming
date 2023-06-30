section	.data
	hello db "Hello, Holberton", 0
	newline db 10, 0
section .text
	global	main
	extern printf

main:
	push rbp
	mov rbp, rsp

	sub rsp, 8		; Align stack to 16-byte boundary

	lea rdi, [hello]
	xor eax, eax
	call printf

	lea rdi, [newline]
	xor eax, eax
	call printf

	xor eax, eax
	add rsp, 8		;restore stack pointer
	pop rbp
	ret
