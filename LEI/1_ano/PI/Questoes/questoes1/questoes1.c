#include <stdio.h>



int seq(){
    int i,maior,scan;
    printf("Introduza os números: \n");
    scan = scanf("%d",&i);
    maior = i;
    if(scan) {
        while(i != 0){
            printf("\nIntroduza o próxima número: ");
            scanf("%d",&i);
            if(i>=maior)
                maior = i;
        }
    }
    printf("\nO maior número desta sequência é:  %d\n\n", maior);
    return 0;
}

int med_seq(){
    int i,maior,scan;
    printf("Introduza os números: \n");
    scan = scanf("%d",&i);
    maior = i;
    if(scan) {
        while(i != 0){
            printf("\nIntroduza o próxima número: ");
            scanf("%d",&i);
            if(i>=maior)
                maior = i;
        }
    }
    printf("\nO maior número desta sequência é:  %d\n\n", maior);
    return 0;
}

int main(){
    int i;
    printf("Seja bem-vindo às questões 1 de PI. Indique o número da questão que deseja testar.\n");
    int scan;
    scan = scanf("%d",&i);
    if(scan){
        if(i<=0 || i>50){
            printf("Introduza um número válido\n");
            main();
        }
        if(i==1) 
            seq();
        if(i==2)
            med_seq();
    }
    return 0;
}