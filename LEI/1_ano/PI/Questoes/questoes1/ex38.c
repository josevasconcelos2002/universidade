#include <stdio.h>

void somasAc (int v[], int Ac [], int N){
    int i = 0;
    int j = 0;
    for(j; j<N; j++){
        for(i=0; i<=j ; i++){
            Ac[j] += v[i];
        }
    }
}

int main(){
    int v[] = {1,1,1,1};
    for(int i = 0; i<4 ; i++){
        printf("v[%d] = %d\n",i,v[i]);
    }
    printf("\n");
    int Ac[4];
    for(int i = 0; i<4 ;i++){
        Ac[i] = 0;
    }
    somasAc(v,Ac,4);
    for(int i = 0; i<4 ; i++){
        printf("Ac[%d] = %d\n",i,Ac[i]);
    }
    return 0;
}