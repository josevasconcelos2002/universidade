#include <string.h>

char *mystrcat(char s1[], char s2[]){
    int i,j;
    i = 0;
    if(strlen(s1)>0 || strlen(s2)>0){
        while(s1[i]!='\0'){
            i++;
        }
        for(j = 0; s2[j]!='\0';j++){
            s1[i] = s2[j];
            i++;
        }
        s1[i] = '\0';
    }
    return s1;
}