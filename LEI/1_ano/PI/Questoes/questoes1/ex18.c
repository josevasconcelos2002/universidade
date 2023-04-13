#include <string.h>

int maiorSufixo (char s1 [], char s2 []){
    int max = 0;
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int i = length1-1;
    int j = length2-1;
    while(s1[i] == s2[j]){
        max++;
        i--;
        j--;
    }
    return max;
}