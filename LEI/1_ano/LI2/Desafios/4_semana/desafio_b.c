#include <stdio.h>
#include <string.h>

void historias(){
    int n = 0;
    int scan = scanf("%d",&n);
    int resultado[n];
    char linha[1000];
    for(int k = 0; k<n ; k++) resultado[k] = 0;
    if(scan){
        for(int i = 0; i<n ; i++){
            int scan1 = scanf("%s",linha);
            if(scan1){
                int size = strlen(linha);
                //printf("Strlen: %ld\n",strlen(linha));
                for(int o = 0 ; o<size-1 ; o++){
                    char q = linha[o];
                    //printf("%c\n",q);
                    for(int j = o+1; j<size ;j++){
                        if(q == linha[j]){
                            resultado[i] = q;
                            //printf("Resultado: %c\n",resultado[i]);
                        }
                    }
                }
            }
        }
    }
    for(int p = 0; p<n ; p++) printf("%c",resultado[p]);
    printf("\n");
}

int main(){
    historias();
    return 0;
}