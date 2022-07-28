.include "o/libc/nt/codegen.inc"
.imp	kernel32,__imp_VirtualProtectEx,VirtualProtectEx,0

	.text.windows
VirtualProtectEx:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_VirtualProtectEx(%rip),%rax
	jmp	__sysv2nt
	.endfn	VirtualProtectEx,globl
	.previous
