.global main
main:
    call readi32
    movl %eax, %ebx
    call readi32
    imull %ebx, %ebx
    jo end
    imull %eax, %eax
    jo end
    imull %eax, %eax
    jo end
    addl %ebx, %eax
    jo end
    call writei32
end:
    call finish

