typedef struct vector {} vector;

int push_back(vector*, char*);

char* get_element(vector*, /*?T?*/);

bool empty(vector*);

/*?T?*/ size(vector*);

int resize(vector*, int);

int shrink_to_fit(vector*, int);

/*?T?*/ capacity(vector*);
