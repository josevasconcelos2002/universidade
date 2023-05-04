#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int mycp(char *path, char *dest){
    char buffer[1024];
    int fd = open(path,O_RDONLY,0666);
    int fd1 = open(dest,O_CREAT | O_WRONLY, 0666);
    int read_bytes = 0;
    while((read_bytes = read(fd,buffer,1024))>0){
        write(fd1,buffer,read_bytes);
    }
    return 0;
}

int main(int argc,char *argv[]){
    int r = 0;
    if(argc == 4 && strcmp("mycp",argv[1]) == 0){
        r = mycp(argv[2],argv[3]);
    }
    return r;
}