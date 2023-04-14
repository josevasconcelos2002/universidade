#define Max 100
#include <stdio.h>
#include <stdbool.h>

struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;

void SinitStack (STACK *s){
    if(s != NULL) s->sp = 0;
}

int SisEmpty (STACK *s){
    bool r = false;
    if(s == NULL) r = true;
    return (int)r;
}

int Spush(STACK *s, int x){
    int r = 1;
    if(s->sp < Max-1){
        s->sp++;
        s->values[s->sp] = x;
        r = 0;
    }
    return r;
}

int Spop (STACK *s, int *x){
    int r = 1;
    if(!SisEmpty(s) == 0){
        int N = s->values[s->sp];
        s->sp--;
        *x = N;
        r = 1;
    }
    return r;
}

int Stop (STACK *s, int *x){
    int r = 1;
    if(!SisEmpty(s)){
        int N = s->values[s->sp];
        *x = N;
        r = 0;
    }
    return r;
}