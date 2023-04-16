#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} * Palavras;



void libertaLista (Palavras p){
    if(p!=NULL){
        free(p->prox);
        free(p->palavra);
        free(p);
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
    while(l!=NULL && l->prox!=NULL){
        if(strcmp(palavra,l->palavra) == 0)
            count++;
        l = l->prox;
    }
    return count;
}


void listaPal (Palavras l){
    while(l!=NULL && l->prox!=NULL){
        printf("%s %d\n",l->palavra,n_vezes(l));
        l = l->prox;
    }
    printf("%s %d\n",l->palavra,n_vezes(l));
}

char *ultima(Palavras l){
    while(l->prox != NULL) l = l->prox;
    return l->palavra;
}