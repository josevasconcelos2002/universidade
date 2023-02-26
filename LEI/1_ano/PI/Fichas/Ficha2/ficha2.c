#include <stdio.h>


float multInt1(int n, float m){
    float r;
    r = 0.0;
    for(n;n>0;n--){
        r += m;
    }
    return r;
}

int main(){
    int n;
    float m;
    printf("Introduza o valor de n: \n");
    int scan = scanf("%d",&n);
    printf("Introduza o valor de m: \n");
    int scan1 = scanf("%f",&m);
    if(scan && scan1){ 
        float r = multInt1(n,m);
        printf("Resultado: %f\n",r);
    }
}