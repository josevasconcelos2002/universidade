#include <stdio.h>
#include <stdbool.h>

bool vogal(char s){
    bool resultado = false;
    int ascii = (int)s;
    if(ascii == 65 || ascii == 97) resultado = true;
    if(ascii == 69 || ascii == 101) resultado = true;
    if(ascii == 73 || ascii == 105) resultado = true;
    if(ascii == 79 || ascii == 111) resultado = true;
    if(ascii == 85 || ascii == 117) resultado = true;
    return resultado;
}

int contaVogais(char *s){
    int resultado = 0;
    for(int i = 0; s[i] != '\0' ; i++){
        if(vogal(s[i])) resultado++;
    }
    return resultado;
}


int main(){
    char s[100];
    printf("Introduza a string: \n");
    scanf("%s",s);
    int i = contaVogais(s);
    printf("N vogais em '%s' : %d\n",s,i);
    return 0;
}