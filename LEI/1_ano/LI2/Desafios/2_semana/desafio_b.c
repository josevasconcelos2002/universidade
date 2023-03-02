#include <stdio.h>
#include <stdbool.h>


bool mov_cima(int instr){
    bool result = true;
    if(instr != 1) result = false;
    return result;
}

bool mov_baixo(int instr){
    bool result = true;
    if(instr != -1) result = false;
    return result;
}

bool valida_n(int n){
    bool result = false;
    if(n>=0) result = true;
    return result;
}

bool valida_andar(int c, int a){
    bool result = false;
    if(c>=0 && c<=a) result = true;
    return result;
}

void andar(){
    int c = 0;
    int a = 0;
    int n = 0;
    int instr = 0;
    int scan = scanf("%d",&c);
    int scan1 = scanf("%d",&a);
    int scan2 = scanf("%d",&n);
    if(scan && scan1 && scan2 && valida_n(n) && valida_andar(c,a)){
        for(int i = 0; i<n; i++){
            int scan3 = scanf("%d",&instr);
            if(scan3){
                if(mov_cima(instr) && valida_andar(c+1,a)) c+=1;
                if(mov_baixo(instr) && valida_andar(c-1,a)) c-=1;
            }
        }
    }
    printf("%d\n",c);
}


int main(){
    andar();
    return 0;
}