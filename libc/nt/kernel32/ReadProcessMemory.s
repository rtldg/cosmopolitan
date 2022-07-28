.include "o/libc/nt/codegen.inc"
.imp	kernel32,__imp_ReadProcessMemory,ReadProcessMemory,0

	.text.windows
ReadProcessMemory:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_ReadProcessMemory(%rip),%rax
	jmp	__sysv2nt6
	.endfn	ReadProcessMemory,globl
	.previous
