main:
	push rbp;

	mov rdi, formatStr ;
	mov rsi, 5;
	mov al, 0 ;

	extern printf
	call printf

	pop rbp
	ret

formatStr: db `Hello, Holberton\n`,0
