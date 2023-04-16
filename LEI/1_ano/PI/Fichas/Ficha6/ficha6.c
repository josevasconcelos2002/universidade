#define Max 100
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;


struct staticQueue {
    int front;
    int length;
    int values [Max];
} QUEUE, *SQueue;

// exercicio 1

void SinitStack (SStack s){
    if(s != NULL) s->sp = 0;
}

int SisEmpty (SStack s){
    bool r = false;
    if(s == NULL) r = true;
    return (int)r;
}

int Spush(SStack s, int x){
    int r = 1;
    if(s->sp < Max-1){
        s->sp++;
        s->values[s->sp] = x;
        r = 0;
    }
    return r;
}

int Spop (SStack s, int *x){
    int r = 1;
    if(!SisEmpty(s) == 0){
        int N = s->values[s->sp];
        s->sp--;
        *x = N;
        r = 1;
    }
    return r;
}

int Stop (SStack s, int *x){
    int r = 1;
    if(!SisEmpty(s)){
        int N = s->values[s->sp];
        *x = N;
        r = 0;
    }
    return r;
}

// exercicio 2

void SinitQueue(SQueue q){
    if(q!=NULL) q->length = 0;
}

int SisEmptyQ (SQueue q){
    return q->length == 0;
}

int Senqueue (SQueue q, int x){
    int r = 1;
    if(q->length < Max){
        q->length++;
        q->values[q->length] = x;
        r = 0;
    }
    return r;
}

int Sdequeue(SQueue q, int *x){
    int r = 1;
    if(!SisEmptyQ(q)){
        *x = q->values[q->front];
        q->length--;
        q->front++;
        r = 0;
    }
    return r;
}

int Sfront (SQueue q, int *x){
    int r = 1;
    if(!SisEmptyQ(q)){
        *x = q->values[q->front];
        r = 0;
    }
    return r;
}

// exercicio 3

typedef struct dinStack {
    int size; // guarda o tamanho do array values
    int sp;
    int *values;
} *DStack;

void DinitStack (DStack s){
    if(s != NULL){
        s->sp = 0;
        s->size = 1;
    }
}

int DisEmpty (DStack s){
    bool r = false;
    if(s == NULL || s->size = 0) r = true;
    return (int)r;
}

int Dpush(DStack s, int x){
    int r = 1;
    if(s->sp < s->size-1){
        s->sp++;
        s->values[s->sp] = x;
        r = 0;
    }
    else if(s->sp == s->size-1){
        s->size = 2*s->size;
        s->values = (int *)realloc(s->values,2*sizeof(s->values));
        s->sp++;
        s->values[s->sp] = x;
        r = 0; 
    }
    return r;
}

int Dpop (DStack s, int *x){
    int r = 1;
    if(!DisEmpty(s) == 0){
        int N = s->values[s->sp];
        s->sp--;
        *x = N;
        r = 1;
    }
    return r;
}

int Stop (SStack s, int *x){
    int r = 1;
    if(!SisEmpty(s)){
        int N = s->values[s->sp];
        *x = N;
        r = 0;
    }
    return r;
}


// .2)

typedef struct dinQueue {
    int size; // guarda o tamanho do array values
    int front;
    int length;
    int *values;
} *DQueue;