#include <string.h>

void strrev(char s[]){
    int i = 0;
    int N = strlen(s);
    for(i; i<N/2 ;i++){
        char aux;
        aux = s[i];
        s[i] = s[N-i-1];
        s[N-i-1] = aux; 
    }
}