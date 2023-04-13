#include <string.h>

int conta(char c, char s[]){
    int i;
    int count = 0;
    for(i = 0; s[i]!='\0';i++){
        if(s[i]==c) count++;
    }
    return count;
}


char charMaisfreq (char s[]){
    int freq_max = 0;
    char mais_freq;
    int i = 0;
    if(strlen(s)>0){
        mais_freq = s[0];
        while(s[i]!='\0'){
            if(conta(s[i],s)>freq_max){
                mais_freq = s[i];
                freq_max = conta(s[i],s);
            }
            i++;
        }
    }
}