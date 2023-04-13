#include <string.h>
#include <stdbool.h>

bool vogal(char c){
    bool resultado = false;
    int ascii = (int)c;
    if(ascii == 97 || ascii == 101 || ascii == 105|| ascii == 111|| ascii == 117) resultado = true;
    return resultado;
}


int contaVogais (char s[]){
    int i;
    int resultado = 0;
    if(strlen(s)>0){
        for(i = 0; s[i]!='\0' ; i++){
            if(vogal(tolower(s[i]))) resultado++;
        }
    }
    return resultado;
}