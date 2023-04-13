#include <math.h>

typedef struct posicao {
    int x, y;
} Posicao;


float distancia(Posicao p){
    float resultado = 0.0;
    resultado = sqrt((p.x - 0)*(p.x - 0) + (p.y-0)*(p.y-0));
    return resultado;
}

int maisCentral (Posicao pos[], int N){
    int indice = 0;
    int i = 0;
    for(i; i<N ; i++){
        if(distancia(pos[indice])>distancia(pos[i])) indice = i;
    }
    return indice;
}