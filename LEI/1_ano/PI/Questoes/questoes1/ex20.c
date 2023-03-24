#include <stdio.h>

int contaPal (char s[]){
    int r = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i] == ' '){
            
                while(s[i] != ' ' && s[i] != '\0'){
                    i++;
                }
                //r += 1;
            
        }
        else{
            r += 1;
            while(s[i] != ' ' && s[i] != '\0'){
                i++;
            }
        }
    }
    return r;
}

int main(){
    char s[100];
    //s = "a bb a";
    int pal = contaPal(s);
    printf("Palavras em '%s': %d \n",s,pal); 
    return 0;
}