#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool consoante(char c){
    bool resultado = false;
    int ascii = (int)c;
    if((ascii > 65 && ascii < 69) || (ascii > 69 && ascii < 73) || (ascii > 73 && ascii < 79) || (ascii > 79 && ascii < 85) || (ascii > 85 && ascii <= 90)) resultado = true;
    return resultado;
}


bool vogal(char c){
    bool resultado = false;
    int ascii = (int)c;
    if(ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 89) resultado = true;
    return resultado;
}

void compassos(){
    int n = 0;
    //int scan = scanf("%d",&n);
    char n1[100];
    if(fgets(n1,sizeof(n1),stdin)!=NULL){
        n = atoi(n1);
        int resultado[n];
        for(int k = 0; k<n ; k++) resultado[k] = 0;
            for(int l = 0; l<n ;l++){
                int ind = 0;
                char linha1[1000];
                if (fgets(linha1, sizeof(linha1), stdin) != NULL) {
                    int len = strlen(linha1);
                    int caracteres = atoi(linha1[0]);
                    for(int i = 2; i<len && i<i+caracteres;i++){
                        if(linha1[i] != linha1[i+1]) ind = i;
                        else ind =
                    }
                }
        }
            for(int p = 0; p<n ; p++) printf("%d\n",resultado[p]);
    }
}

int main(){
    compassos();
    return 0;
}
