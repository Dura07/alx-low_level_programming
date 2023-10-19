section .data
    hello db "Hello, Holberton",10 ; Message string with newline character

section .text
    global main
    extern printf

main:
    push rdi                    ; Preserve registers
    mov rdi, hello              ; Load the address of the message
    call printf                 ; Call printf
    pop rdi                     ; Restore registers

    ; Exit the program
    mov rax, 60                 ; syscall: exit
    xor rdi, rdi                ; status: 0
    syscall

