#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strcmp1 (char s1[], char s2[]){
    int resultado = 0;
    if(strlen(s1) != strlen(s2)) resultado = strlen(s1) - strlen(s2);
    else {
        for(int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){ 
            if(s1[i] != s2[i]) resultado += atoi(&s1[i]) - atoi(&s2[i]);
        }
    }
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