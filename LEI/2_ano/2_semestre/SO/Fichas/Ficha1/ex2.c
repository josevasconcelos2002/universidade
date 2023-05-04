#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int mycat(char *file){
    char buffer[1024];
    int fd = open(file,O_RDONLY,0666);
    int read_bytes = 0;
    while((read_bytes = read(fd,buffer,1024))>0){
        write(STDOUT_FILENO,buffer,read_bytes);
    }
    return 0;
}

int main(int argc,char *argv[]){
    int r = 0;
    if(argc == 3 && strcmp("mycat",argv[1]) == 0){
        r = mycat(argv[2]);
    }
    return r;
}