#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool valida_jogada(char jogada[15]){
    char *pe_pe = "@*";
    char *pe_pa = "@-";
    char *pe_te = "@+";
    char *pa_pe = "|*";
    char *pa_pa = "|-";
    char *pa_te = "|+";
    char *te_pe = "X*";
    char *te_pa = "X-";
    char *te_te = "X+";
    bool result = true;
    if(strcmp(jogada,pe_pe) && strcmp(jogada,pe_pa) && strcmp(jogada,pe_te) && strcmp(jogada,pa_pe)
     && strcmp(jogada,pa_pa) && strcmp(jogada,pa_te) && strcmp(jogada,te_pe) && strcmp(jogada,te_pa)
      && strcmp(jogada,te_te)) result = false;
    return result;
}

bool win(char jogada[15]){
    bool result = true;
    char *pe_te = "@+";
    char *pa_pe = "|*";
    char *te_pa = "X-";
    if(strcmp(jogada,pa_pe) && strcmp(jogada,pe_te) && strcmp(jogada,te_pa)) result = false;
    return result;
}

bool loose(char jogada[15]){
    bool result = true;
    char *pe_pa = "@-";
    char *pa_te = "|+";
    char *te_pe = "X*";
    if(strcmp(jogada,pe_pa) && strcmp(jogada,te_pe) && strcmp(jogada,pa_te)) result = false;
    return result;
}

bool draw(char jogada[15]){
    bool result = true;
    char *pe_pe = "@*";
    char *pa_pa = "|-";
    char *te_te = "X+";
    if(strcmp(jogada,pe_pe) && strcmp(jogada,pa_pa) && strcmp(jogada,te_te)) result = false;
    return result;
}

void pedra_papel_tesoura(){
    int w = 0;
    int l = 0;
    int d = 0;
    int n = 0;
    char jogada[15];
    int scan = scanf("%d",&n);
    if(scan){
        for(int i = 0; i<n; i++){
            int scan1 = scanf("%s",jogada);
            if(scan1){
                if(valida_jogada(jogada)){
                    if(win(jogada)) w+=1;
                    if(loose(jogada)) l+=1;
                    if(draw(jogada)) d+=1;
                }
            }
        }
    }
    printf("%d %d %d\n",w,l,d);
}


int main(){
    pedra_papel_tesoura();
    return 0;
}