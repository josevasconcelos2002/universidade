#include <stdio.h>
#include <string.h>

int maior(int n){
    int maior =0;
    while(n>0){
        if(n%10 > maior) maior = n%10;
        n /= 10;
    }
    return maior;
}

//char *handle(char[],char []);

void codifica() {
    int ordem = 0;
    int scan = scanf("%d", &ordem);
    char msg[1000];
    if (scan) {
        int m = maior(ordem);
        char ordem_str[9];
        sprintf(ordem_str, "%d", ordem);
        int scan1 = scanf("%s", msg);
        if (scan1) {
            for (int i = 0; i < m; i++) {
                int ordem_idx = ordem_str[i] - '0' - 1;
                int length = strlen(msg);
                for (int j = ordem_idx; j < length; j += m) {
                    printf("%c", msg[j]);
                }
            }
            //printf("\n");
        }
    }
}



int main(){
    codifica();
    printf("\n");
}