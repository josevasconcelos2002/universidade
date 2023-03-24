#include <stdio.h>

int qDig(unsigned int x){
    int resultado = 0;
    while(x>0){
        x /= 10;
        resultado++;
    }
    return resultado;
}

int main(){
    unsigned int x = 1110;
    int resultado = qDig(x);
    printf("O inteiro '%d' tem %d digitos\n",x,resultado);
}