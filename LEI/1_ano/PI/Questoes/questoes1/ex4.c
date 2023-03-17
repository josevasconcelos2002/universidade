#include <stdio.h>

int bitsUm (unsigned int n){
    int bin[100];
    int count = 0;
    for(int i = 0; n!= 0; i++){
        bin[i] = n%2;
        if(n%2 == 1) count++;
        n /= 2;
    }
    return count;
}

int main(){
    int num = 0;
    printf("Introduza o valor de n: \n");
    scanf("%d",&num);
    printf("Numero de bits a 1: %d\n",bitsUm(num));
}