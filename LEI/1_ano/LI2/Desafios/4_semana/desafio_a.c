#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool consoante(char c){
    bool resultado = false;
    int ascii = (int)c;
    //printf("ASCII de '%c': %d\n",c,ascii);
    if((ascii > 65 && ascii < 69) || (ascii > 69 && ascii < 73) || (ascii > 73 && ascii < 79) || (ascii > 79 && ascii < 85) || (ascii > 85 && ascii <= 90) || ascii == 0) resultado = true;
    //printf("%c e consoante? %d\n",c,resultado);
    return resultado;
}

bool vogal(char c){
    bool resultado = false;
    int ascii = (int)c;
    //printf("ASCII de '%c': %d\n",c,ascii);
    if(ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 0) resultado = true;
    //printf("%c e vogal? %d\n",c,resultado);
    return resultado;
}

void cancoes(){
    int n = 0;
    int scan = scanf("%d",&n);
    int resultado[n];
    char linha[1000];
    for(int k = 0; k<n ; k++) resultado[k] = 0;
    if(scan){
        for(int i = 0; i<=n ; i++){
            char *linha1 = fgets(linha,1000,stdin);
            char *linha2 = malloc(sizeof(char) *1000);
            //linha2 = NULL;
                int size = strlen(linha1);
                //printf("Size: %d\n",size);
                int h = 0;
                for(int j = 0; j<size ; j++){
                    if(linha1[j] != ' '){ 
                        linha2[h] = linha1[j];
                        h++;
                    }
                    //printf("%c\n",linha2[j]);
                }
                int size1 = strlen(linha2);
                //printf("String sem espacos: %s\n",linha2);
                //printf("Strlen: %d\n",size1);
                for(int q = 0; q<size1-3 ; q++){
                    printf("%c\n",linha2[q]);
                    printf("%c\n",linha2[q+1]);
                    printf("%c\n",linha2[q+2]);
                    if(vogal(linha2[q]) && consoante(linha2[q+1] && vogal(linha2[q+2]))) resultado[i]++;
                }
                //printf("Strlen: %ld\n",strlen(linha));
        }
    }
    for(int p = 0; p<n ; p++) printf("%d\n",resultado[p]);
    //printf("\n");
}

int main(){
    cancoes();
    return 0;
}