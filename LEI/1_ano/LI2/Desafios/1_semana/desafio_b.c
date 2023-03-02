#include <stdio.h>


int crescente(int a, int b, int c){
    int r = 1;
    if( c>=b && b>=a) r = 1;
    else r = 0;
    return r;
}

int decrescente(int a, int b, int c){
    int r = 1;
    if( a>=b && b>=c) r = 1;
    else r = 0;
    return r;
}

int main(){
    int m = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 1; i<=3; i++){
        int scan = scanf("%d",&m);
        if(i == 1 && scan) a = m;
        if(i == 2 && scan) b = m;
        if(i == 3 && scan) c = m;
    }
    if(crescente(a,b,c) || decrescente(a,b,c)) printf("OK\n");
    else printf("NAO\n");
    return 0;
}