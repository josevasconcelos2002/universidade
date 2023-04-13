#include <stdbool.h>

bool pertence(char c, int v[], int N){
    int i = 0;
    bool resultado = true;
    while(v[i]!= c && i<N){
        i++;
    }
    if(i == N) resultado = false;
    return resultado;
}


int unionSet (int N, int v1[N], int v2[N], int r[N]){

}