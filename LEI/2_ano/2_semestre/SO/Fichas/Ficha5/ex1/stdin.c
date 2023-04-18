#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    char buffer[1024];
    int fd = open("fifo",O_WRONLY,0644);
    int bytes_read = 0;
    while(bytes_read = read(0,buffer,1024)> 0){
        write(fd,buffer,1024);
    }
    close(fd);
}