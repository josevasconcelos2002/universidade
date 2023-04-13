typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

void ordenaPorNum (Aluno t [], int N){
    int i;
    for(i = 0; i+1<N;i++){
        Aluno tmp;
        if(t[i].numero >= t[i+1].numero){
            tmp = t[i+1];
            t[i+1] = t[i];
            t[i] = tmp;
        }
    }
}

void criaIndPorNum(Aluno t[], int N, int ind[]){
    int i;
    ordenaPorNum(t,N);
    for(i=0; i<N ; i++){

    }
}