        .data
str:    .asciz "%d\n"
n_str:  .asciz "%d"
rd_str: .asciz "HSE\n"
num:    .int -1

        .text
        .global print42, print_str, input
print42:
        push %ebp
        mov %esp, %ebp

        push $42
        push $str
        call printf
        add $8, %esp

        pop %ebp
        ret

print_str:
        push %ebp
        mov %esp, %ebp

        push $rd_str
        call printf
        add $4, %esp

        pop %ebp
        ret

input:
        push %ebp
        mov %esp, %ebp

        push $num
        push $n_str
        call scanf // scanf(n_str, &num)
        add $8, %esp

        push num
        push $str
        call printf
        add $8, %esp

        pop %ebp
        ret

