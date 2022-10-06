	.file	"script.c"
	.text
	.globl	morse
	.section	.rodata
.LC0:
	.string	".-"
.LC1:
	.string	"-..."
.LC2:
	.string	"-.-."
.LC3:
	.string	"-.."
.LC4:
	.string	"."
.LC5:
	.string	"..-."
.LC6:
	.string	"--."
.LC7:
	.string	"...."
.LC8:
	.string	".."
.LC9:
	.string	".---"
.LC10:
	.string	"-.-"
.LC11:
	.string	".-.."
.LC12:
	.string	"--"
.LC13:
	.string	"-."
.LC14:
	.string	"---"
.LC15:
	.string	".--."
.LC16:
	.string	"--.-"
.LC17:
	.string	".-."
.LC18:
	.string	"..."
.LC19:
	.string	"-"
.LC20:
	.string	"..-"
.LC21:
	.string	"...-"
.LC22:
	.string	".--"
.LC23:
	.string	"-..-"
.LC24:
	.string	"-.--"
.LC25:
	.string	"--.."
.LC26:
	.string	"-----"
.LC27:
	.string	".----"
.LC28:
	.string	"..---"
.LC29:
	.string	"...--"
.LC30:
	.string	"....-"
.LC31:
	.string	"....."
.LC32:
	.string	"-...."
.LC33:
	.string	"--..."
.LC34:
	.string	"---.."
.LC35:
	.string	"----."
.LC36:
	.string	".-.-.-"
.LC37:
	.string	"--..--"
.LC38:
	.string	"..--.."
.LC39:
	.string	".----."
.LC40:
	.string	"-.-.--"
.LC41:
	.string	"-..-."
.LC42:
	.string	"-.--."
.LC43:
	.string	"-.--.-"
.LC44:
	.string	".-..."
.LC45:
	.string	"---..."
.LC46:
	.string	"-.-.-."
.LC47:
	.string	"-...-"
.LC48:
	.string	".-.-."
.LC49:
	.string	"-....-"
.LC50:
	.string	"..--.-"
.LC51:
	.string	".-..-."
.LC52:
	.string	"...-..-"
.LC53:
	.string	".--.-."
.LC54:
	.string	"...---..."
	.section	.data.rel.local,"aw"
	.align 32
	.type	morse, @object
	.size	morse, 440
morse:
	.quad	.LC0
	.quad	.LC1
	.quad	.LC2
	.quad	.LC3
	.quad	.LC4
	.quad	.LC5
	.quad	.LC6
	.quad	.LC7
	.quad	.LC8
	.quad	.LC9
	.quad	.LC10
	.quad	.LC11
	.quad	.LC12
	.quad	.LC13
	.quad	.LC14
	.quad	.LC15
	.quad	.LC16
	.quad	.LC17
	.quad	.LC18
	.quad	.LC19
	.quad	.LC20
	.quad	.LC21
	.quad	.LC22
	.quad	.LC23
	.quad	.LC24
	.quad	.LC25
	.quad	.LC26
	.quad	.LC27
	.quad	.LC28
	.quad	.LC29
	.quad	.LC30
	.quad	.LC31
	.quad	.LC32
	.quad	.LC33
	.quad	.LC34
	.quad	.LC35
	.quad	.LC36
	.quad	.LC37
	.quad	.LC38
	.quad	.LC39
	.quad	.LC40
	.quad	.LC41
	.quad	.LC42
	.quad	.LC43
	.quad	.LC44
	.quad	.LC45
	.quad	.LC46
	.quad	.LC47
	.quad	.LC48
	.quad	.LC49
	.quad	.LC50
	.quad	.LC51
	.quad	.LC52
	.quad	.LC53
	.quad	.LC54
	.globl	ascii
	.section	.rodata
.LC55:
	.string	"A"
.LC56:
	.string	"B"
.LC57:
	.string	"C"
.LC58:
	.string	"D"
.LC59:
	.string	"E"
.LC60:
	.string	"F"
.LC61:
	.string	"G"
.LC62:
	.string	"H"
.LC63:
	.string	"I"
.LC64:
	.string	"J"
.LC65:
	.string	"K"
.LC66:
	.string	"L"
.LC67:
	.string	"M"
.LC68:
	.string	"N"
.LC69:
	.string	"O"
.LC70:
	.string	"P"
.LC71:
	.string	"Q"
.LC72:
	.string	"R"
.LC73:
	.string	"S"
.LC74:
	.string	"T"
.LC75:
	.string	"U"
.LC76:
	.string	"V"
.LC77:
	.string	"W"
.LC78:
	.string	"X"
.LC79:
	.string	"Y"
.LC80:
	.string	"Z"
.LC81:
	.string	"0"
.LC82:
	.string	"1"
.LC83:
	.string	"2"
.LC84:
	.string	"3"
.LC85:
	.string	"4"
.LC86:
	.string	"5"
.LC87:
	.string	"6"
.LC88:
	.string	"7"
.LC89:
	.string	"8"
.LC90:
	.string	"9"
.LC91:
	.string	","
.LC92:
	.string	"?"
.LC93:
	.string	"'"
.LC94:
	.string	"!"
.LC95:
	.string	"/"
.LC96:
	.string	"("
.LC97:
	.string	")"
.LC98:
	.string	"&"
.LC99:
	.string	":"
.LC100:
	.string	";"
.LC101:
	.string	"="
.LC102:
	.string	"+"
.LC103:
	.string	"_"
.LC104:
	.string	"\""
.LC105:
	.string	"$"
.LC106:
	.string	"@"
.LC107:
	.string	"SOS"
	.section	.data.rel.local
	.align 32
	.type	ascii, @object
	.size	ascii, 440
ascii:
	.quad	.LC55
	.quad	.LC56
	.quad	.LC57
	.quad	.LC58
	.quad	.LC59
	.quad	.LC60
	.quad	.LC61
	.quad	.LC62
	.quad	.LC63
	.quad	.LC64
	.quad	.LC65
	.quad	.LC66
	.quad	.LC67
	.quad	.LC68
	.quad	.LC69
	.quad	.LC70
	.quad	.LC71
	.quad	.LC72
	.quad	.LC73
	.quad	.LC74
	.quad	.LC75
	.quad	.LC76
	.quad	.LC77
	.quad	.LC78
	.quad	.LC79
	.quad	.LC80
	.quad	.LC81
	.quad	.LC82
	.quad	.LC83
	.quad	.LC84
	.quad	.LC85
	.quad	.LC86
	.quad	.LC87
	.quad	.LC88
	.quad	.LC89
	.quad	.LC90
	.quad	.LC4
	.quad	.LC91
	.quad	.LC92
	.quad	.LC93
	.quad	.LC94
	.quad	.LC95
	.quad	.LC96
	.quad	.LC97
	.quad	.LC98
	.quad	.LC99
	.quad	.LC100
	.quad	.LC101
	.quad	.LC102
	.quad	.LC19
	.quad	.LC103
	.quad	.LC104
	.quad	.LC105
	.quad	.LC106
	.quad	.LC107
	.text
	.globl	len
	.type	len, @function
len:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	addl	$1, -4(%rbp)
.L2:
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	len, .-len
	.globl	append
	.type	append, @function
append:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	addl	$1, -8(%rbp)
.L6:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L7
	jmp	.L8
.L9:
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-8(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -8(%rbp)
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movzbl	(%rcx), %eax
	movb	%al, (%rdx)
.L8:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L9
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-24(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	append, .-append
	.globl	clear_str
	.type	clear_str, @function
clear_str:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L12
.L13:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
.L12:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L13
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	clear_str, .-clear_str
	.globl	equals
	.type	equals, @function
equals:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	len
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	len
	cmpl	%eax, -4(%rbp)
	je	.L17
	movl	$0, %eax
	jmp	.L16
.L19:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-8(%rbp), %eax
	movslq	%eax, %rcx
	movq	-32(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	je	.L18
	movl	$0, %eax
	jmp	.L16
.L18:
	addl	$1, -8(%rbp)
.L17:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jl	.L19
	movl	$1, %eax
.L16:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	equals, .-equals
	.globl	decode
	.type	decode, @function
decode:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L21
.L24:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	morse(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	equals
	testl	%eax, %eax
	je	.L22
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	ascii(%rip), %rax
	movq	(%rdx,%rax), %rax
	jmp	.L23
.L22:
	addl	$1, -4(%rbp)
.L21:
	cmpl	$54, -4(%rbp)
	jle	.L24
	movl	$0, %eax
.L23:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	decode, .-decode
	.globl	remove_spaces_end
	.type	remove_spaces_end, @function
remove_spaces_end:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	len
	subl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.L26
.L27:
	movl	-4(%rbp), %eax
	leal	-1(%rax), %edx
	movl	%edx, -4(%rbp)
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
.L26:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	je	.L27
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	remove_spaces_end, .-remove_spaces_end
	.section	.rodata
.LC108:
	.string	" "
	.text
	.globl	decode_morse
	.type	decode_morse, @function
decode_morse:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movl	$0, -36(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -28(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	len
	addl	$1, %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movb	$0, (%rax)
	movq	-56(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	append
	movl	$10, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	len
	addl	$1, %eax
	cltq
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movb	$0, (%rax)
	jmp	.L29
.L30:
	addl	$1, -36(%rbp)
.L29:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	je	.L30
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	remove_spaces_end
	jmp	.L31
.L38:
	movl	$0, -32(%rbp)
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jne	.L32
	movl	-28(%rbp), %eax
	addl	$1, %eax
	jmp	.L33
.L32:
	movl	$0, %eax
.L33:
	movl	%eax, -28(%rbp)
	cmpl	$2, -28(%rbp)
	jne	.L35
	movq	-8(%rbp), %rax
	leaq	.LC108(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	append
	jmp	.L35
.L36:
	movl	-36(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -36(%rbp)
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-32(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -32(%rbp)
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rax, %rdx
	movzbl	(%rcx), %eax
	movb	%al, (%rdx)
.L35:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$46, %al
	je	.L36
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$45, %al
	je	.L36
	movl	-32(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	-16(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L37
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	decode
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	append
.L37:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	clear_str
	addl	$1, -36(%rbp)
.L31:
	movl	-36(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L38
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	decode_morse, .-decode_morse
	.globl	main
	.type	main, @function
main:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	cmpl	$1, -20(%rbp)
	jg	.L41
	movl	$0, %eax
	jmp	.L42
.L41:
	movq	-32(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	decode_morse
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	$0, %eax
.L42:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.2.0-19ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
