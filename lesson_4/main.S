.global main
    .data
n_str:  .asciz "%d"
num:    .int -1
array: .skip 3 * 4 // 3 функции, 4 байта каждая

    .text
main:
    push %ebp
    mov %esp, %ebp

    // array = {print42, print_str, input}
    mov $array, %ecx
    mov $print42, (%ecx)
    add $4, %ecx
    mov $print_str, (%ecx)
    add $4, %ecx
    mov $input, (%ecx)

    // get function number
    push $num
    push $n_str
    call scanf // scanf(n_str, %eax)
    add $8, %esp

    // call desired function
    mov num, %edx
    cmp $0, %edx
    jle bad_end
    cmp $3, %edx
    jg bad_end
    dec %edx
    call array(, %edx, 4)

    xorl %eax, %eax
    pop %ebp
    ret

bad_end:
    movl $1, %eax // выставляем ненулевой код ошибки    
    pop %ebp
    ret

