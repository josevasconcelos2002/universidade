#include <stdio.h>

int soma(int v[], int N){
    int soma = 0;
    for(int i = 0; i<N ; i++){
        soma += v[i];
    }
    return soma;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int resultado = soma(arr,5);
    printf("Soma de todos os elementos do array: %d\n", resultado);
}