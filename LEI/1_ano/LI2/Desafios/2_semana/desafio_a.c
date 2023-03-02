#include <stdio.h>
#include <stdbool.h>


bool mov_cima(int instr){
    bool result = true;
    if(instr%4 != 1) result = false;
    return result;
}

bool mov_baixo(int instr){
    bool result = true;
    if(instr%4 != 2) result = false;
    return result;
}

bool mov_esq(int instr){
    bool result = true;
    if(instr%4 != 3) result = false;
    return result;
}

bool mov_dir(int instr){
    bool result = true;
    if(instr%4 != 0) result = false;
    return result;
}
/*
bool valida_n(int n){
    bool result = false;
    if(n>0 && n<79) result = true;
    return result;
}
*/
void coordenadas(){
    int x = 0;
    int y = 0;
    int n = 0;
    int instr = 0;
    int scan = scanf("%d",&n);
    if(scan){
        for(int i = 0; i<n; i++){
            int scan1 = scanf("%d",&instr);
            if(scan1){
                if(mov_cima(instr)) y-=1;
                if(mov_baixo(instr)) y+=1;
                if(mov_dir(instr)) x+=1;
                if(mov_esq(instr)) x-=1;
            }
        }
    }
    printf("%d %d\n",x,y);
}


int main(){
    coordenadas();
    return 0;
}