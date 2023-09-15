    .global main
main:
    call readi32
    movl %eax, %ebx
    call readi32
    imull %ebx, %eax
    shrl $1, %eax
    call writei32
    call finish

