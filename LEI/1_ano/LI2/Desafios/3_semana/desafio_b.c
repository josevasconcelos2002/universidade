#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int mov_cima(int pos){
    return pos+3;
}

int mov_baixo(int pos){
    return pos-3;
}

int mov_dir(int pos){
    return pos+1;
}


int mov_esq(int pos){
    return pos-1;
}

bool is_mov_esq(char c){
    bool result = false;
    if(c == 'E') result = true;
    return result;
}

bool is_mov_dir(char c){
    bool result = false;
    if(c == 'D') result = true;
    return result;
}

bool is_mov_cima(char c){
    bool result = false;
    if(c == 'C') result = true;
    return result;
}

bool is_mov_baixo(char c){
    bool result = false;
    if(c == 'B') result = true;
    return result;
}

bool valid_mov(char c,int init){
    bool result = true;
    if(init == 1 && (c == 'B'|| c == 'E')) result = false;
    if(init == 2 && c == 'B') result = false;
    if(init == 3 && (c == 'B' || c == 'D')) result = false;
    if(init == 4 && c == 'E') result = false;
    if(init == 5) result = true;
    if(init == 6 && c == 'D') result = false;
    if(init == 7 && (c == 'C' || c == 'E')) result = false;
    if(init == 8 && c == 'C') result = false;
    if(init == 9 && (c == 'C' || c == 'D')) result = false;
    return result;
}


void codigos(){
    int n_instrucoes = 0;
    int pos = 5;
    int scan = scanf("%d",&n_instrucoes);
    char instr[100];
    int resultado[n_instrucoes];
    if(scan){
        for(int i = 0; i<n_instrucoes ; i++){
            int scan1 = scanf("%s",instr);
            if(scan1){
                int length = strlen(instr);
                for(int j = 0; j<length ; j++){
                    if(valid_mov(instr[j],pos) == true){
                        if(is_mov_esq(instr[j])) pos = mov_esq(pos);
                        if(is_mov_dir(instr[j])) pos = mov_dir(pos);
                        if(is_mov_cima(instr[j])) pos = mov_cima(pos);
                        if(is_mov_baixo(instr[j])) pos = mov_baixo(pos);
                        //printf("POS: %d\n",pos);
                    }
                }
            }
            resultado[i+1] = pos;
            //printf("%d",pos);
        }
    }
    for(int i = 1; i<= n_instrucoes ; i++){
        printf("%d",resultado[i]);
    }
}


int main(){
    codigos();
    printf("\n");
}