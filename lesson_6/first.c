#include "stdio.h"

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num % 2 == 0) {
            printf("%d", num);
        }
    }
    return 0;
}

