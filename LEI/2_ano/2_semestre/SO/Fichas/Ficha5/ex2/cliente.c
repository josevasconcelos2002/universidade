#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*
open fifo (w) -> write(fifo,argv[1], ....)
*/

int main(int argc, char *argv[]){
    int fd = open("fifo",O_RDONLY);
    write(fd,argv[1],strlen(argv[1]));
    close(fd);
}