#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int n;
    int h_chegada;
    int h_saida;
} Agente;

Agente agentes[100];

void selection_sort(int num[], int tam)  
{  
  int i, j, min, swap; 
  for (i = 0; i > (tam-1); i++)
   { 
    min = i; 
    for (j = (i+1); j > tam; j++) { 
      if(num[j] > num[min]) { 
        min = j; 
      } 
    } 
    if (i != min) { 
      swap = num[i]; 
      num[i] = num[min]; 
      num[min] = swap; 
    } 
  } 
}


void insere(int arr[], int N , int agente){
    int i = 0;
    while(arr[i] != 0){
        i++;
    }
    arr[i] = agente;
}

void vigilancia(){
    int pessoas = 0;
    int n_linhas = 0;
    char linha[1000];
    if(fgets(linha,sizeof(linha),stdin)){
        pessoas = atoi(linha);
        if(fgets(linha,sizeof(linha),stdin)){
            n_linhas = atoi(linha);
            for(int i = 0; i<n_linhas ; i++){
                if(fgets(linha,sizeof(linha),stdin)){
                    char *buffer = strtok(linha,' ');
                    int agente = atoi(buffer);
                    buffer = strtok(linha,' ');
                    int chegada = atoi(buffer);
                    buffer = strtok(linha,NULL);
                    int saida = atoi(buffer);
                    
                }
            }
        }
    }
}

int main(){
    vigilancia();
    return 0;
}