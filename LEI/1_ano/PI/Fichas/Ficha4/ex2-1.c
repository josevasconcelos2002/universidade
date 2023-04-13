#include <stdio.h>

int ordenado(int v[], int N){
    int r = 0;
    for(int i = 0; i+1<N ;i++){
        if(v[i]<=v[i+1]) r = r || 0;
        else r = r || 1;
    }
    return r;
}

int main(){
    int a[] = {1,2,3,4,5};
    if(ordenado(a,5) == 0){
        printf("O array está ordenado\n");
    }
    else{
        printf("O array não está ordenado\n");
    }
}