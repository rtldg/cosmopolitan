.include "o/libc/nt/codegen.inc"
.imp	kernel32,__imp_WriteProcessMemory,WriteProcessMemory,0

	.text.windows
WriteProcessMemory:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_WriteProcessMemory(%rip),%rax
	jmp	__sysv2nt6
	.endfn	WriteProcessMemory,globl
	.previous
