#include <stdio.h>

extern void print42();
extern void print_str();
extern void input();

int main() {
    int check;
    scanf("%d", &check);
    void (*array[3])(void) = {print42, print_str, input};
    if (check <= 0 || check > 3) {
        return 1;
    } else {
        array[check - 1](); 
    }
    return 0;
}

