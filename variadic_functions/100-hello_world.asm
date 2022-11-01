
section .text
	global main

main:
	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, message
	mov edx, message_len
	int 0x80

	mov eax, 0x1
	mov ebx, 0x0
	int 0x80

section .data
	message db "Hello, World", 0xA
	message_len equ $-message
