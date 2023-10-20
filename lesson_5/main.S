.global printNumber
.global printN
    .data
str: .asciz "%d\n"

    .text
printNumber:

    push %ebp
    mov %esp, %ebp
    
    movl 8(%ebp), %eax
    push %eax
    push $str
    call printf

    xorl %eax, %eax

    addl $8, %esp 
    //movl %ebp, %esp
    pop %ebp
    ret

printN:
    push %ebp
    mov %esp, %ebp 
    movl 8(%esp), %edx
    xor %ecx, %ecx
    incl %ecx
    incl %edx
l: 

    decl %edx
    cmpl $0, %edx
    jle end
    movl 8(%esp, %ecx, 4), %eax
    push %eax
    call printNumber
    //call writei32
    incl %ecx
    jmp l

end:
     movl %ebp, %esp
     pop %ebp
     ret

