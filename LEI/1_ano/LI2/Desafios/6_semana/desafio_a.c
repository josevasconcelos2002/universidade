#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int is_anagram(const char* str1, const char* str2) {
    // Verifica se as strings têm o mesmo tamanho ignorando espaços em branco
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < len1; i++) {
        if (str1[i] != ' ') {
            count1++;
        }
    }
    for (int i = 0; i < len2; i++) {
        if (str2[i] != ' ') {
            count2++;
        }
    }
    if (count1 != count2) {
        return 0;
    }
    // Conta o número de ocorrências de cada caractere em cada string
    int counts1[256] = {0};
    int counts2[256] = {0};
    for (int i = 0; i < len1; i++) {
        char c = str1[i];
        if (c != ' ') {
            counts1[(int)c]++;
        }
    }
    for (int i = 0; i < len2; i++) {
        char c = str2[i];
        if (c != ' ') {
            counts2[(int)c]++;
        }
    }
    // Compara as contagens de caracteres
    for (int i = 0; i < 256; i++) {
        if (counts1[i] != counts2[i]) {
            return 0;
        }
    }
    return 1;
}

typedef struct
{
   bool is_anagram[20]; 
   int indices[20];
} Anagrama;

Anagrama anagramas[20];

void inicializa(){
    for(int i = 0; i<20 ; i++){
        anagramas[i].is_anagram[i] = false;
        anagramas[i].indices[i] = i;
    }
}





void anagrama() {
    int N = 0;
    int n = 0;
    char linha[100];
    int found_anagram = 0;
    inicializa(); // inicializa a estrutura anagramas
    if(fgets(linha,sizeof(linha),stdin)){
        N = atoi(linha);
        for(int i = 0; i<N ;i++){
            if(fgets(linha,sizeof(linha),stdin)){
                n = atoi(linha);
                char *nome = NULL;
                if(fgets(linha,sizeof(linha),stdin)){
                    nome = strdup(linha);
                }
                int anagram_indices[n];
                int num_anagrams = 0;
                for(int j = -1; j<n ; j++){
                    if(fgets(linha,sizeof(linha),stdin) && j>=0){
                        char *str = strdup(linha);
                        if(nome!=NULL && str!=NULL && is_anagram(nome,str)){
                            anagram_indices[num_anagrams] = j;
                            num_anagrams++;
                            found_anagram = 1;
                            anagramas[i].is_anagram[j-1] = true; // armazena o resultado
                        }
                        free(str);
                    }
                }
                if(found_anagram) {
                    // imprime os resultados apenas no final do input
                } else {
                    printf("-1");
                }
                //printf("\n");
                free(nome);
            }
            found_anagram = 0; // reseta a variável found_anagram para o próximo caso
        }
        // imprime os resultados no final do input
        for(int j = 1; j<=n ; j++){
            int count = 0;
            for(int i = 0; i<N ; i++){
                if(anagramas[i].is_anagram[j-1] == true){
                    count++;
                    anagramas[i].indices[j-1] = j;
                }
            }
            if(count > 0){
                printf("%d\n", j);
                for(int i = 0; i<N ; i++){
                    if(anagramas[i].is_anagram[j-1] == true){
                        printf("%s", linha);
                    }
                }
                printf("\n");
                for(int i = 0; i<N ; i++){
                    if(anagramas[i].is_anagram[j-1] == true){
                        printf("%d ", anagramas[i].indices[j-1]);
                    }
                }
                printf("\n");
            }
        }
    }
}





int main(){
    anagrama();
    return 0;
}