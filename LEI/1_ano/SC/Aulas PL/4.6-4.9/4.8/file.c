#include <stdio.h>


int badDec2bin (int n) {
    int c;
    for (c=16; c>=0; c--) {
        if (n>>c & 16)
            printf("1");
        else
            printf("0");
    }
}

int main( ) {
    int n;
    scanf("%d", &n);
    if (n%2!=1)
    badDec2bin(16);
    else
    badDec2bin(44);
}