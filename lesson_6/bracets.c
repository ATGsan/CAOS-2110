#include <stdio.h>

int main() {
    int arr[3];
    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 1093;
    // arr[i] == *(arr + i)
    printf("%d", *arr);
    printf("%d", arr[0]);
    printf("%d", 0[arr]);
}

