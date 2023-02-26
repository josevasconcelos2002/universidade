#include <stdio.h>


int maior(){
    int maior = 0;
    int m = 0;
    int line = 1;
    for(int i = 1; i<=5; i++){
        int scan = scanf("%d",&m);
        if(i == 1) {
            maior = m;
           
        }
        if(m>maior && scan){
            maior = m;
            line = i; 
        }
        if(m == maior && scan){
            maior = m;
        }
    }
    return line;
}


int main(){
    int r = maior();
    printf("%d\n",r);
    return 0;
}