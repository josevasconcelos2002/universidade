#include <stdio.h>
#include "ex2-1.h"

void merge(int a[], int na, int b[], int nb, int r[]){
    int k = 0;
    for(int i = 0; i<na ;i++){
        for(int j = 0; j<nb; j++){
            if(a[i]<=b[j] && k<na+nb){
                r[k] = a[i];
                k++;
            }
            if(a[i]>b[j] && k<na+nb){
                r[k] = b[j];
                k++;
            }
            
        }
    }
}


int main(){
    int a[] = {1,2,3,9};
    int b[] = {4,5,6,7};
    int c[8];
    merge(a,4,b,4,c);
    for(int i = 0; i<8 ; i++){
        printf("%d\n",c[i]);
    }
    return 0;
}