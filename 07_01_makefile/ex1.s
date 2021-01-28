	.file	"ex1.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Undefined!\0"
.LC2:
	.ascii "PI: %lf\12\0"
.LC3:
	.ascii "MAX: %d\12\0"
.LC4:
	.ascii "pause\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rcx
	call	puts
	movabsq	$4614253070214989087, %rax
	movq	%rax, %rcx
	movq	%rax, %rdx
	movq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movsd	-8(%rbp), %xmm1
	leaq	.LC2(%rip), %rcx
	call	printf
	movl	$5, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	leaq	.LC4(%rip), %rcx
	call	system
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 4.8.3"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	system;	.scl	2;	.type	32;	.endef
