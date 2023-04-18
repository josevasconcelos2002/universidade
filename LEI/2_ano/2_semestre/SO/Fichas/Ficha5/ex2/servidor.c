#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/*
servidor -> criar pipe -> leitura de ficheiro -> escrever num ficheiro
*/

int main(int argc, char *argv[]){
    int fd = open("fifo",O_RDONLY);
    int fd1 = open("fifo",O_WRONLY); // abrir um escritor para evitar os casos em que o escritor é morto

    close(fd);
}