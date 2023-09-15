.global main
main:
    call readi32
    shll $1, %eax
    jo   fin
    subl $4, %eax
    jo   fin
    call writei32
fin:    
    call finish

