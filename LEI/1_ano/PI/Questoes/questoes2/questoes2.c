#include <stdlib.h>
#include <stdio.h>


typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;


// 1
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


// 2
void freeL(LInt l){
    LInt aux = malloc(sizeof(LInt));
    if(l!=NULL){
       while(l != NULL){
            aux = l;
            l = l->prox;
            free(aux);
       }
    }
}


// 3
void imprimeL(LInt l){
    if(l != NULL){
        while(l != NULL){
            printf("%d\n",l->valor);
            l = l->prox;
        }
    }
}

// 5
void insertOrd (LInt l, int x){
    LInt aux = malloc(sizeof(LInt));
    if(l != NULL){
        while(l != NULL && x > l->valor) l = l->prox;
        aux->valor = x;
        if(l == NULL){
            l = aux;
            l->prox = NULL;
        }
        else{
            LInt aux1;
            aux1 = l->prox->prox;
            l->prox = aux;
            aux->prox = aux1;
        }
    }
    else{
        l = malloc(sizeof(LInt));
        l->valor = x;
        l->prox = NULL;
    }
}