#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int mycp(char *path){
    int r = 0;
    char buffer[4096] = {0};
    int open1 = open(path,O_RDONLY,0660);
    if(open1<0){
        perror("Invalide path");
        r = -1;
        int close1 = close(open1);
    }
    return r;
}

int main(int argc,char *argv[]){
    
}