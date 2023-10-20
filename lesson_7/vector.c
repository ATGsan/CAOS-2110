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
unsigned char* get_element(vector* arr, size_t index) {
	if (arr == NULL) {
		return NULL;
	} else {
		if (index >= arr->size) {
			return NULL;
		} else {
			return &(arr->buffer[index]);
		}
	}
}

// Return element that we delete
unsigned char erase(vector* arr, size_t index) {
	if (arr == NULL) {
		return NULL;
	} else {
		if (index >= arr->size) {
			return NULL;
		} else {
			unsigned char result = *get_element(arr, index);
			for (size_t i = index + 1; i < arr->size; ++i) {
				arr->buffer[i - 1] = arr->buffer[i];
			}
			--arr->size;
			if (arr->size <= arr->capacity / 4) {
					arr->capacity /= 2;
					arr->buffer = realloc(arr->buffer, arr->capacity);
				    if (arr->buffer == NULL) {
						return NULL;
					}
			}
			return result;
		}
	}
}

/*
bool empty(vector*);

size_t size(vector*);

int resize(vector*, int);

int shrink_to_fit(vector*, int);

size_t capacity(vector*);
*/
