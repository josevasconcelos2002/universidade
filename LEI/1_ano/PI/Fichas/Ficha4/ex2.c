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

int retiraVogaisRep(char *s){
    int resultado = 0;
    char aux[1000];
    int j = 0; // índice para a string auxiliar
    for(int i = 0; s[i] != '\0'; i++){
        if(vogal(s[i]) && s[i+1] != '\0' && s[i+1] == s[i]){
            //resultado++;
            aux[j++] = s[i];
            while(s[i+1] == s[i]){
                i++; // avança até a próxima letra diferente
                resultado++;
            }
        }
        else {
            aux[j++] = s[i];
        }
    }
    aux[j] = '\0'; // adiciona o caractere nulo ao final da string auxiliar
    for(int i = 0; s[i] != '\0'; i++){
        s[i] = aux[i];
    }
    return resultado;
}


int main(){
    char s[1000];
    printf("Introduza a string: \n");
    scanf("%s",s);
    printf("String original: '%s' \n",s);
    int n = retiraVogaisRep(s);
    printf("String resultante: '%s' \n",s);
    printf("N vogais removidas: '%d' \n",n);
    return 0;
}