section	.data
	msg	db	"hello, holberton", 0xa, 0
section	.text
	extern	printf
	global	_start
_start:
	mov	edi,	msg
	mov	eax,	0
	call 	printf
