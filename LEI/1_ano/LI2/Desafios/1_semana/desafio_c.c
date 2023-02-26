#include <stdio.h>


void ordena(int v[], int n) {
    int aux, i, j; 
 
    for (j = n - 1; j >= 1; j--) { 
        for (i = 0; i < j; i++) { 
            if (v[i] > v[i+1]) { 
                aux = v[i]; 
                v[i] = v[i+1]; 
                v[i+1] = aux; 
            } 
        } 
    } 
    printf("%d %d %d\n", v[0], v[1], v[2]);
}

int main(){
    int x = 0;
    int n = 3;
    int v[n];
    for(int i = 1; i<=n; i++){
        int scan = scanf("%d",&x);
        if(i == 1 && scan) v[0] = x;
        if(i == 2 && scan) v[1] = x;
        if(i == 3 && scan) v[2] = x;
    }
    ordena(v,n);
    return 0;
}