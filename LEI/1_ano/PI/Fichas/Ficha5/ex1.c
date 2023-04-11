#include <stdio.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

int nota(Aluno a){
    int nota = 0;
    float n1 = 0.0;
    float n2 = a.teste;
    for(int i = 0; i<6 ; i++){
        n1 += a.miniT[i];
    }
    n1 /= 6;
    n1 = n1*20 / 12;
    nota = n1*0.20 + a.teste * 0.80;
    return nota;
}