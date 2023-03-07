#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


void anoes() {
    int n_filas = 0;
    char buffer[100];
    char *buffer1 = NULL;
    buffer1 = malloc(sizeof(buffer));
    buffer1 = fgets(buffer, sizeof(buffer), stdin); // lê a linha com o número de filas
    n_filas = atoi(buffer); // converte a string para inteiro
    
    char *instr = NULL;
    size_t size = 500;
    instr = (char *)malloc(size*sizeof(char));
    int resultado1[n_filas];
    for(int j = 0; j<n_filas ; j++) resultado1[j] = 0;
    int p = 0;
    if(buffer1) {
        for(int i = 0; i<n_filas ; i+=2) {
            while(getchar()!= '\n'); // consome o '\n' após o número de anões
            int chars = getline(&instr,&size,stdin);
            int count = 0;
            char *buffer[100];
            int k = 0;
            if(chars != 0) {
                buffer[k] = strtok(instr," \n");
                int maior = atoi(buffer[k]);
                while(buffer[k] != NULL){
                    k++;
                    buffer[k] = strtok(NULL," \n");
                    if (buffer[k] != NULL) {
                        if(atoi(buffer[k])>maior) {
                            count+=1;
                            maior = atoi(buffer[k]);
                            resultado1[p] = count;
                            printf("P: %d\n",p);
                            printf("Count %d: %d\n",p,resultado1[p]);
                        }
                    }
                }
            }
            p++;
        }
    }
    printf("\n");
    for(int z = 0; z < n_filas ; z++){
        printf("%d\n",resultado1[z]);
    }
    free(instr);
}






int main(){
    anoes();
    //printf("\n");
}