#include <string.h>

int iguaisConsecutivos (char s[]){
    int max;
    if(strlen(s) != 0) max = 1;
    else max = 0;
    int aux = 1;
    int i;
    for(i = 0; s[i] != '\0' ; i++){
        if(s[i+1] == s[i]){
            aux++;
            if(aux>max) max = aux;
        }
        else aux = 1;
    }
    return max;
}