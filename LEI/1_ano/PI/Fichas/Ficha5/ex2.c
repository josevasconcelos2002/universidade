typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

int procuraNum(int num, Aluno t[], int N){
    int r = -1;
    int i;
    for(i = 0; i<N;i++){
        if(t[i].numero == num) r = i;
    }
    return r;
}