.data

abc: .asciiz "Hello, World"

.text
	li $v0, 4
	la $a0, abc
	syscall
	li $v0, 10
	syscall