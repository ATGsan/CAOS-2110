#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main() {
    int64_t num;
    scanf("%"SCNd64, &num);
    uint64_t one = 1u;
    for (size_t i = 0; i < 64; ++i) {
        if (i % 2 == 0) {
            uint64_t mask = (one << i);
            mask = ~mask;
            num &= mask;
        }
    }

    printf("%"PRId64, num);
    
    return 0;
}

