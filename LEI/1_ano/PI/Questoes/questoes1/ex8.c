#include <string.h>

char *strcpy(char *dest, char source[]){
    int i = 0;
    if(strlen(source)>=0){
        for(i;source[i]!='\0';i++){
            *(dest+i) = source[i];
        }
        *(dest+i) = '\0';
    }
    return dest;
}