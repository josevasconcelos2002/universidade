#include <stdio.h>


float multInt1(int n, float m){
    float r;
    r = 0.0;
    for(n;n>0;n--){
        r += m;
    }
    return r;
}

float multInt2(int n, float m){
    float r;
    r = 0.0;
    for(int i = 1;n>=1;i++){
        if(n%2 == 1)r += m;
        n/=2;
        m*=2;
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
        float r1 = multInt1(n,m);
        float r2 = multInt2(n,m);
        printf("Resultado 1: %f\n",r1);
        printf("Resultado 2: %f\n",r2);
    }
}