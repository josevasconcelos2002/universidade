#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct 
{
    int altura;
    int peso;
    char *nome;
} Cozinheiro;

Cozinheiro cozinheiros[100];

void ordena(Cozinheiro cozinheiros[]) {
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            int dif1 = abs(cozinheiros[j].peso - 90);
            int dif2 = abs(cozinheiros[j+1].peso - 90);
            if(dif1>dif2){
                Cozinheiro temp = cozinheiros[j];
                cozinheiros[j] = cozinheiros[j + 1];
                cozinheiros[j + 1] = temp;
            } else if(dif1 == dif2){
                if(cozinheiros[j].altura < cozinheiros[j+1].altura){
                    Cozinheiro temp = cozinheiros[j];
                    cozinheiros[j] = cozinheiros[j + 1];
                    cozinheiros[j + 1] = temp;
                } else if (cozinheiros[j].altura == cozinheiros[j + 1].altura) {
                    if (cozinheiros[j].peso == cozinheiros[j + 1].peso) {
                        if (cozinheiros[j].nome != NULL && cozinheiros[j + 1].nome != NULL) {
                            int cmp = strcasecmp(cozinheiros[j].nome, cozinheiros[j + 1].nome);
                            if (cmp >= 0) {
                                Cozinheiro temp = cozinheiros[j];
                                cozinheiros[j] = cozinheiros[j + 1];
                                cozinheiros[j + 1] = temp;
                            }
                        }
                    }   
                }
            }
        }
    }
}





void inicializa(){
    for(int i = 0; i<100 ;i++){
        cozinheiros[i].altura = 0;
    }
}

void insere(Cozinheiro *c){
    int i = 0;
    if (cozinheiros[0].altura == 0) {
        cozinheiros[0].altura = c->altura;
        cozinheiros[0].peso = c->peso;
        cozinheiros[0].nome = strdup(c->nome);
    } else {
        while(cozinheiros[i].altura != 0){
            i++;
        }
        cozinheiros[i].altura = c->altura;
        cozinheiros[i].peso = c->peso;
        cozinheiros[i].nome = strdup(c->nome);
    }
}


void print(Cozinheiro cozinheiros[]){
    for(int i = 0; i<100; i++){
        if(cozinheiros[i].altura != 0){
            printf("%s",cozinheiros[i].nome);
            printf(" %d",cozinheiros[i].peso);
            printf(" %d\n",cozinheiros[i].altura);
        }
        else{

        }
    }
}
 


void cozinheiros1(){
    int n_cozinheiros = 0;
    char linha[1000];
    Cozinheiro *c = malloc(sizeof(Cozinheiro));
    if(fgets(linha,sizeof(linha),stdin)){
        n_cozinheiros = atoi(linha);
        inicializa();
        for(int i = 0; i<n_cozinheiros ; i++){
            if(fgets(linha,sizeof(linha),stdin)){
                char *linha1 = strtok(linha," ");
                c->nome = strdup(linha1);
                linha1 = strtok(NULL," ");
                c->peso = atoi(linha1);
                linha1 = strtok(NULL,"\n");
                c->altura = atoi(linha1);
                insere(c);
            }
        }
        ordena(cozinheiros);
        //printf("\n");
        print(cozinheiros);
    }
    free(c);
}

int main(){
    cozinheiros1();
    return 0;
}