// main.c
#include "stack.h"
#include <time.h>
#include <stdlib.h>
#include "stdio.h"
#include "stack.h"

void printInt(void* i) {
    int* i_ = i;
    printf("%d", *i_);
}

int main(int argc, char** argv) {
    srand(time(NULL)); // seed do random, para ser diferente a cada run

    Stack* s = stackCreate(&printInt);
    for (int i = 0; i < 5; i++) {
        stackPrint(s);
        int* i = malloc(sizeof(int));
        *i = rand() % 100; // [0, 100[
        stackPush(s, i);
    }
    stackPrint(s);

    int* i;
    // termina quando retornar NULL, ou seja,
    // n~ao existe mais elementos para remover
    while (i = stackPop(s)) {
        free(i); // ´e preciso libertar os dados pois stackPop liberta apenas o n´o
        stackPrint(s);
    }

    free(s);

    return 0;
}