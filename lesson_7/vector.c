#include "vector.h"

#include <stdlib.h>

vector initialize(void) {
	vector res;
	res.size = 0;
	res.capacity = 1;
	res.buffer = malloc(res.capacity);
	return res;
}

void destructor(vector* arr) {
	free(arr->buffer);
}

int reallocate(vector* arr) {
	if (!arr) {
		return -1;
	}

	arr->capacity *= 2;
	arr->buffer = realloc(arr->buffer, arr->capacity);

	if (arr->buffer == NULL) {
		return -1;
	}

	return 0;
}

int push_back(vector* arr, unsigned char* val) {
	if (!arr || !val) {
		return -1;
	}

	if (arr->size >= arr->capacity) {
		if (reallocate(arr) == -1) {
			return -1;
		}
	}

	arr->buffer[arr->size] = *val;
	++arr->size;

	return 0;
}
/*
unsigned char* get_element(vector*, size_t);

unsigned char* erase(vector*, size_t);

bool empty(vector*);

size_t size(vector*);

int resize(vector*, int);

int shrink_to_fit(vector*, int);

size_t capacity(vector*);
*/
