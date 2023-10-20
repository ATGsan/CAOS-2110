#include "vector.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
	vector arr = initialize();

	unsigned char num = 56;
	unsigned char lnum = 58;

	push_back(&arr, &num);
	printf("%u\n", arr.buffer[0]);

	push_back(&arr, &lnum);
	printf("%u %u\n", arr.buffer[0], arr.buffer[1]);

	destructor(&arr);
    return 0;
}
