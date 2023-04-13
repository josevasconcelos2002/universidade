#include <stdbool.h>

typedef struct posicao {
    int x, y;
} Posicao;

bool vizinho(Posicao p1, Posicao p2){
    bool resultado = false;
    if((p2.x == p1.x + 1 || p2.x == p1.x - 1) && p2.y == p1.y) resultado = true;
    if((p2.y == p1.y + 1 || p2.y == p1.y - 1) && p2.x == p1.x) resultado = true;
    return resultado;
}


int vizinhos (Posicao p, Posicao pos[], int N){
    int n = 0;
    int i = 0;
    for(i; i<N ; i++){
        if(vizinho(p,pos[i])) n++;
    }
    return n;
}