#define MAX_DEQUE 10000
#include <stdlib.h>

typedef struct {
    int deque[MAX_DEQUE];
    int dp;
} Deque;

Deque *create();
void push(Deque *deque, void *data);
void pushFront(Deque *deque, void *data);
void *pop(Deque *deque);
void *popFront(Deque* deque);