section .data
    message db "Hello, Holberton", 0Ah

section .text
    global main

extern printf

main:
    ; call printf to print the message
    mov edi, message   ; address of the message
    xor eax, eax       ; clear the accumulator register
    call printf        ; call printf function

    ; return 0
    xor eax, eax       ; clear the accumulator register
    ret                ; return from main
