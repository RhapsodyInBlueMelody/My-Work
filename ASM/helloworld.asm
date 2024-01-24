.section .data
hello: .ascii "Hello, World!\n"
hello_len = . - hello

.section .text
.global _start

_start:
    mov $4, %eax            // system call number (sys_write)
    mov $1, %ebx            // file descriptor (stdout)
    lea hello, %ecx         // message to print
    mov $hello_len, %edx    // message length
    int $0x80                // call kernel

    mov $1, %eax            // system call number (sys_exit)
    xor %ebx, %ebx          // exit code
    int $0x80                // call kernel
