   .global main
main:
    call readi32
    movl %eax, %ebx
    call readi32
    negl %eax
    xor %ecx, %ecx
// eax : -b
// ebx : a
// ecx: 0 
loop:
    addl %ebx, %eax
    inc %ecx
    cmp $0, %eax
    jl loop
    movl %ecx, %eax
    neg %eax
    call writei32
    call finish

