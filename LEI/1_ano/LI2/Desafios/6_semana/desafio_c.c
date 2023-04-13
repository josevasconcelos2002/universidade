#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int n;
    char *facilidade;
    int preco;
} Pedido;


Pedido pedidos[200];

void ordena(Pedido pedidos[]){
    for(int i = 0; i<200 ; i++){
        for(int j = 0; j<200-i-1; j++){
             // critério 1: pedidos mais caros primeiro
            if(pedidos[j].preco < pedidos[j+1].preco){
                Pedido temp = pedidos[j];
                pedidos[j] = pedidos[j+1];
                pedidos[j+1] = temp;
            } else if (pedidos[j].preco == pedidos[j+1].preco) {
                // critério 2: pedidos mais fáceis depois
                if (pedidos[j].facilidade != NULL && pedidos[j+1].facilidade != NULL && strcmp(pedidos[j].facilidade, pedidos[j+1].facilidade) > 0) {
                    Pedido temp = pedidos[j];
                    pedidos[j] = pedidos[j+1];
                    pedidos[j+1] = temp;
                } else if (pedidos[j].facilidade != NULL && pedidos[j+1].facilidade != NULL && strcmp(pedidos[j].facilidade, pedidos[j+1].facilidade) == 0) {
                    // critério 3: ordem de pedidos
                    if (pedidos[j].n > pedidos[j+1].n) {
                        Pedido temp = pedidos[j];
                        pedidos[j] = pedidos[j+1];
                        pedidos[j+1] = temp;
                    }
                }
            }
        }
    }
}

void inicializa(){
    for(int i = 0; i<200 ;i++){
        pedidos[i].preco = 0;
    }
}

void insere(Pedido *p){
    int i = 0;
    if (pedidos[0].preco == 0) {
        pedidos[0].n = p->n;
        pedidos[0].preco = p->preco;
        pedidos[0].facilidade = strdup(p->facilidade);
    } else {
        while(pedidos[i].preco != 0){
            i++;
        }
        pedidos[i].n = p->n;
        pedidos[i].preco = p->preco;
        pedidos[i].facilidade = strdup(p->facilidade);
    }
}

void print(Pedido pedidos[]){
    for(int i = 0; i<200; i++){
        if(pedidos[i].preco != 0){
            printf("%d",pedidos[i].n);
            printf(" %s",pedidos[i].facilidade);
            printf(" %d\n",pedidos[i].preco);
        }
    }
}




void pedidos1(){
    int N = 0;
    char linha[1000];
    Pedido *p = malloc(sizeof(Pedido));
    if(fgets(linha,sizeof(linha),stdin)){
        N = atoi(linha);
        for(int i = 0; i<N ; i++){
            if(fgets(linha,sizeof(linha),stdin)){
                char *linha1 = strtok(linha," ");
                p->n = atoi(linha1);
                linha1 = strtok(NULL," ");
                p->facilidade = strdup(linha1);
                linha1 = strtok(NULL,"\n");
                p->preco = atoi(linha1);
                insere(p);
            }
        }
        ordena(pedidos);
        //printf("\n");
        print(pedidos);
    }
    free(p);
}


int main(){
    pedidos1();
    return 0;
}