#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

ssize_t readln(int fd, char *line, size_t size){
    int read_bytes = 0;
    char buffer[1024];
    while((read_bytes = read(fd,buffer,1024)) && buffer[read_bytes] != '\n'){
        line[read_bytes] = buffer[read_bytes];
    }
    return read_bytes;
}

int main(int argc,char *argv[]){
    int r = 0;
    if(argc == 3 && strcmp("readln",argv[1]) == 0){
        int fd = open(argv[])
    }
    return r;
}