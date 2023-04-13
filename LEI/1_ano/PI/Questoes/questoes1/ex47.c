#include <stdbool.h>


typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
} Posicao;

bool mov_cima(Movimento m){
    bool resultado = false;
    if(m == Norte) resultado = true;
    return resultado;
}

bool mov_baixo(Movimento m){
    bool resultado = false;
    if(m == Sul) resultado = true;
    return resultado;
}

bool mov_direita(Movimento m){
    bool resultado = false;
    if(m == Este) resultado = true;
    return resultado;
}

bool mov_esquerda(Movimento m){
    bool resultado = false;
    if(m == Oeste) resultado = true;
    return resultado;
}


Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    Posicao final;
    final.x = inicial.x;
    final.y = inicial.y;
    int i = 0;
    for(i; i<N ; i++){
        if(mov_cima(mov[i])) final.y++;
        if(mov_baixo(mov[i])) final.y--;
        if(mov_direita(mov[i])) final.x++;
        if(mov_esquerda(mov[i])) final.x--;
    }
    return final;
}