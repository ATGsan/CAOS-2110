    .global main
main:
    movl $1920, %eax
    call writei32
    call finish

