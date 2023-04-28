#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} * Palavras;



void libertaLista (Palavras p){
    Palavras aux;
    while(p != NULL){
        aux = p;
        p = p->prox;
        free(aux);
    }
}

int quantasP (Palavras l){
    int count = 0;
    //Palavras l1 = malloc(sizeof(Palavras));
    while(l->prox != NULL){
        count++;
        l = l->prox;
    }
    return count;
}

int n_vezes(Palavras l){
    int count = 0;
    char *palavra = l->palavra;
    while(l!=NULL){
        if(strcmp(palavra,l->palavra) == 0)
            count++;
        l = l->prox;
    }
    return count;
}


void listaPal (Palavras l){
    while(l!=NULL && l->prox!=NULL){
        printf("%s %d\n",l->palavra,n_vezes(l));
        l->ocorr = n_vezes(l);
        l = l->prox;
    }
    printf("%s %d\n",l->palavra,n_vezes(l));
    l->ocorr = n_vezes(l);
}
char *ultima(Palavras l){
    while(l->prox != NULL) l = l->prox;
    return l->palavra;
}

Palavras acrescentaInicio (Palavras l, char *p){
    Palavras aux = malloc(sizeof(Palavras));
    aux->ocorr = 1;
    aux->palavra = strdup(p);
    aux->prox = l;
    return aux;
}

Palavras acrescentaFim (Palavras l, char *p){
    Palavras aux = malloc(sizeof(Palavras));
    aux->ocorr = 1;
    aux->palavra = strdup(p);
    while(l->prox != NULL) l = l->prox;
    l->prox = aux;
    aux->prox = NULL;
    return l;
}
Palavras acrescenta (Palavras l, char *p){
    if(l != NULL){
        while(l != NULL && strcmp(l->palavra,p)!=0) l = l->prox;
        if(l != NULL) l->ocorr++;
        else{
            acrescentaFim(l,p);
        }
    }
    else{
        l = malloc(sizeof(Palavras));
        l->palavra = strdup(p);
        l->ocorr = 1;
        l->prox = NULL;
    }
    return l;
}
struct celula * maisFreq (Palavras l){
    struct celula *maisFreq = l;
    while(l != NULL){
        if(n_vezes(l) > n_vezes(maisFreq)) maisFreq = l;
        l = l->prox;
    }
    return maisFreq;
}