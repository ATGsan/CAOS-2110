#include <stddef.h>
#include <stdbool.h>

typedef struct vector {
	size_t size;
	size_t capacity;
	unsigned char* buffer;
} vector;

vector initialize(void);

void destructor(vector*);

int push_back(vector*, unsigned char*);

unsigned char* get_element(vector*, size_t);

unsigned char* erase(vector*, size_t);

bool empty(vector*);

size_t size(vector*);

int resize(vector*, int);

int shrink_to_fit(vector*, int);

size_t capacity(vector*);
