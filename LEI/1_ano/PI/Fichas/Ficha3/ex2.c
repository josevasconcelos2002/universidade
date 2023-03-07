#include <stdio.h>

void swapM (int *x, int *y){
    int *t;
    t = x;
    x = y;
    printf("X: %d\n",*x);
    y = t;
    printf("Y: %d\n",*y);
}

int main(){
    int x, y;
    x = 5;
    y = 3;
    swapM(&x,&y);
    //printf("x: %d , y: %d \n",x,y);
}