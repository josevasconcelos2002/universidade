#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


struct empregado
{
    char *nome;
    int count;
}Empregado;

struct empregado faltas[40];


bool existe(char *empregado){
    bool resultado = false;
    for(int i = 0; i<40 ; i++){
        if(strcmp(empregado,faltas[i].nome) == 0){
            resultado = true;
        }
    }
    return resultado;
}

void adiciona(char *empregado) {
    int j = -1; // Começa com -1 para que o primeiro índice seja 0.
    int i;
    for (i = 0; i < 40 && faltas[i].nome[0] != '\0'; i++) {
        j = i;
    }
    if (j != 39) { // Verifica se há espaço disponível.
        j++;
        faltas[j].count = 1;
        strcpy(faltas[j].nome, empregado); // Copia a string "empregado" para "faltas[j].nome".
    }
}


void incrementa(char *empregado){
    for(int i = 0; i<40 ; i++){
        if(strcmp(empregado,faltas[i].nome) == 0){
            faltas[i].count++;
        }
    }
}

char *despedido(){
    char *resultado = NULL;
    int maior = 0;
    for(int i = 0; i<40 ; i++){
        if(faltas[i].count > maior){
            maior = faltas[i].count;
            resultado = strdup(faltas[i].nome);
        }
    }
    return resultado;
}


void baixas(){
    int dias = 0;
    char linha[1000];
    char *empregado;
    int scan = scanf("%d",&dias);
    if(scan){
        for(int i = 0; i<dias ; i++){
            fgets(linha,1000,stdin);
            empregado = strtok(linha," ");
            while(empregado){
                if(!existe(empregado)) adiciona(empregado);
                else incrementa(empregado);
                empregado = strtok(NULL,"\n");
            }
        }
        printf("%s\n",despedido());
    }
}

int main(){
    baixas();
    return 0;
}