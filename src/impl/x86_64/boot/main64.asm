global long_mode_start
extern plcli

section .text
bits 64
long_mode_start:
    ; load null into all data segment registers
    mov ax, 0
    mov ss, ax
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    
    ; start kernel_main | plOS\src\impl\kernel\main.c
	call plcli
    hlt
