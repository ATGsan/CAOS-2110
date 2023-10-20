#include "vector.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
	vector arr = initialize();

	unsigned char num = 56;
	unsigned char lnum = 58;

	push_back(&arr, &num);
	printf("%u\n", *get_element(&arr, 0));

	push_back(&arr, &lnum);
	printf("%u %u\n", *get_element(&arr, 0), *get_element(&arr, 1));

	printf("%u\n", erase(&arr, 0));

	printf("%u\n", *get_element(&arr, 0));

	destructor(&arr);
    return 0;
}
