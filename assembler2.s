main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movw	$118, -32(%rbp)
	movw	$-38, -30(%rbp)
	movw	$0, -28(%rbp)
	movw	$17, -26(%rbp)
	movw	$-16, -24(%rbp)
	movw	$0, -22(%rbp)
	movw	$10, -20(%rbp)
	movw	$0, -18(%rbp)
	movw	$0, -16(%rbp)
	movw	$-103, -14(%rbp)
	movw	$0, -36(%rbp)
	movw	$0, -34(%rbp)
	jmp	.L2
.L4:
	movswl	-34(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	andl	$1, %eax
	testw	%ax, %ax
	jne	.L3
	movswl	-34(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	testw	%ax, %ax
	je	.L3
	movzwl	-36(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -36(%rbp)
	movswl	-34(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	cwtl
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	movzwl	-34(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -34(%rbp)
.L2:
	cmpw	$9, -34(%rbp)
	jle	.L4
	movswl	-36(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L6
.L6:
	leave
	ret
