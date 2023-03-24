#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ascii(char s[]){
    int resultado = 0;
    int i = 0;
    for(i; s[i] != '\0' ; i++){
        int ascii = (int)s[i];
        resultado += ascii;
    }
    return resultado;
}

int strcmp1 (char s1[], char s2[]){
    int resultado = 0;
    int ascii_1 = ascii(s1);
    int ascii_2 = ascii(s2);
    resultado = ascii_1 - ascii_2;
    return resultado;
}

int main(){
    char s1[100];
    char s2[100];
    printf("Introduza a s1: \n");
    scanf("%s",s1);
    printf("Introduza a s2: \n");
    scanf("%s",s2);
    printf("Resultado: %d\n",strcmp1(s1,s2));
}