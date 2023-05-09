#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist * prox;
} * LInt;

LInt newLInt (int x, LInt xs) {
    LInt r = malloc (sizeof(struct slist));
    if (r!=NULL) {
        r->valor = x; r->prox = xs;
    }
    return r;
}

typedef LInt Stack;

void initStack (Stack *s){
    *s = malloc(sizeof(LInt));
    (*s)->prox = NULL;
}

int SisEmpty(Stack s){
    return s==NULL;
}

int push (Stack *s, int x){
    if((*s) != NULL){
        Stack *aux = malloc(sizeof(LInt));
        if((*aux) != NULL){
            (*aux)->valor = x;
            (*aux)->prox = *s;
            *s = *aux;
        }
    }
    return 0;
}

int pop(Stack *s, int *x){
    *x = (*s)->valor;
    *s = (*s)->prox;
    //free(*s);
    return *x;
}

int top (Stack s, int *x){
    int r = 0;
    if(s != NULL){
        *x = s->valor;
        r = 0;
    }
    else r = 1;
    return r;
}

typedef struct squeue{
    LInt inicio;
    LInt fim;
} Queue;

void initQueue(Queue *q) {
    q = malloc(sizeof(struct squeue));
    q->inicio = NULL;
    q->fim = NULL;
}


int QisEmpty (Queue q){
    return q.inicio == NULL && q.fim == NULL;
}
int enqueue (Queue *q, int x){
    int r = 0;
    if(q != NULL){
        LInt aux = malloc(sizeof(LInt));
        aux->valor = x;
        aux->prox = NULL;
        if(q->inicio == NULL){
            q->inicio = aux;
        }
        else{
            q->fim = aux;
        }
    }
    else r = 1;
    return r;
}

int dequeue (Queue *q, int *x){
    int r = 0;
    if(q != NULL){
        if(q->inicio != NULL){
            *x = q->inicio->valor;
            LInt aux = q->inicio;
            q->inicio = q->inicio->prox;
            free(aux);
        }
        else{
            r = 1;
        }
    }
    else r = 1;
    return r;
}