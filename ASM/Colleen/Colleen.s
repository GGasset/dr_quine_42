section .data
	s0 db "section .data"
	s1 db "section .text"
	s2 db "%define "
section .text
	global _start
%define source_string_lines 8
%macro load_to_sarr 1
	push r11
	lea r11, [rel s%1]
	mov [r10 + 8 * %1], r11
	pop r11
%endmacro

_start:
	; Allocate space for array of lines of source
	sub rsp, 8 * source_string_lines
	mov r10, rsp ; Set r10 as the position of the string array

	load_to_sarr 0
	load_to_sarr 1
	load_to_sarr 2
