[BITS 16]

section .data
  hello: db "Faiz", 10
  helloLen: equ $-hello

section .text
  global _start

  _start: 
    ;push all general-purpose registers onto the stack
    PUSHA

    ;set up system call parameters
    mov     AX,0x4  ;systemcall for number to write
    mov     BX,1    ;file descriptor for stdout
    mov     CX,hello  ;message length
    mov     DX,helloLen ;message to write

    ;make the system call
    int     0x21

    POPA

    mov     AX,0x1
    mov     BX,0

    int     0x21
