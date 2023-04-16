#include <stdlib.h>
#include <stdio.h>


typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int length(LInt l){
    int length = 0;
    if(l!=NULL){
        while(l != NULL){
            length++;
            l = l->prox;
        }
    }
    return length;
}

void freeL(LInt l){
    LInt aux = malloc(sizeof(LInt));
    if(l!=NULL){
       // ?
    }
}

void imprimeL(LInt l){
    if(l){
        while(l){
            printf("%d\n",l->valor);
            l = l->prox;
        }
    }
}