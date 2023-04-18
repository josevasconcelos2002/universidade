#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    char buffer[1024];
    int fd = open("fifo",O_RDONLY,0644);
    while(read(fd,buffer,1024)){
        write(1,buffer,1024);
    }
    close(fd);
}