#define Max 100
#include <stdio.h>


struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;

void SinitStack (SStack s){
    s = NULL;
}

int SisEmpty (SStack s){
    int r = 0;
    if(s == NULL) r=1;
    return r;
}