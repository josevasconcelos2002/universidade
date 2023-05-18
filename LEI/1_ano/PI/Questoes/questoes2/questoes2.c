#include <stdlib.h>
#include <stdio.h>


typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;


typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} *ABin;

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

// 6
int removeOneOrd(LInt *l, int x) {
    int r = 1;
    LInt aux = *l;
    LInt ant = NULL;
    
    while (aux != NULL && aux->valor < x) {
        ant = aux;
        aux = aux->prox;
    }
    
    if (aux != NULL && aux->valor == x) {
        if (ant != NULL) {
            ant->prox = aux->prox;
        } else {
            *l = aux->prox;
        }
        free(aux);
        r = 0;
    }
    
    return r;
}



// 7


// 18

int maximo (LInt l){
    int maximo = 0;
    if(l != NULL){
        while(l != NULL){
            if(l->valor > maximo) maximo = l->valor;
            l = l->prox;
        }
    }
    return maximo;
}

// 22
int listToArray (LInt l, int v[], int N){
    int resultado = 0;
    int i = 0;
    if(l != NULL){
        while(l != NULL  && i<N){
            v[i] = l->valor;
            l = l->prox;
            i++;
            resultado++;
        }
    }
    return resultado;
}


// 26
LInt rotateL(LInt l) {
    if (l == NULL || l->prox == NULL) {
        // Lista vazia ou com apenas um elemento, retorna a lista original
        return l;
    }
    LInt aux = l;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = l;
    l = l->prox;
    aux->prox->prox = NULL;
    return l;
}



// 28
int alturaMax(int alturaEsq, int alturaDir){
    if(alturaEsq>alturaDir) return alturaEsq;
    else return alturaDir;
}

int altura (ABin a){
    int resultado = 0;
    if(a != NULL){
        resultado = 1 + alturaMax(altura(a->esq),altura(a->dir));
    }
	return resultado;
}