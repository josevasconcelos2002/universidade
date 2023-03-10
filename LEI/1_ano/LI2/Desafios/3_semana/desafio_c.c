#include <stdio.h>


void anoes() {
    int n_linhas = 0;
    int altura = 0;
    //int max = 0;
    int linha_atual = 0;

    if (scanf("%d", &n_linhas) == 1) {
        int visiveis[n_linhas];
        for (int j = 0; j < n_linhas; j++) visiveis[j] = 0;

        while (n_linhas > 0) {
            if (scanf("%d", &altura) == 1) {
                int alturas;
                for (int i = 0, max_altura = 0; i < altura; i++) {
                    if (scanf("%d", &alturas) == 1) {
                        if (alturas > max_altura) {
                            max_altura = alturas;
                            visiveis[linha_atual]++;
                        }
                    }
                }
            }
            n_linhas--;
            linha_atual++;
        }

        for (int k = 0; k < linha_atual; k++) {
            printf("%d\n", visiveis[k]);
        }
    }
}









int main(){
    anoes();
    //printf("\n");
}