#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv){
    int input_file_fd = open("/etc/passwd", O_RDONLY,0666);
    int output_file_fd = open("saida.txt", O_RDONLY | O_CREAT | O_WRONLY, 0666);
    int error_file_fd = open("erros.txt", O_RDONLY | O_CREAT | O_WRONLY, 0666);

    int stdout = dup(STDOUT_FILENO);  // duplica o descritor do STDOUT_FILENO == 1

    dup2(input_file_fd,0);
    close(input_file_fd);

    dup2(output_file_fd,1);
    close(output_file_fd);

    dup2(error_file_fd,2);
    close(error_file_fd);

    char buffer[100];
    int read_bytes = 0;

    while((read_bytes = read(STDIN_FILENO,buffer,100))>0){
        write(output_file_fd,buffer,read_bytes); // escreve no ficheiro 
        //write(stdout,buffer,read_bytes); // escreve no ecrâ
    }

    dup2(stdout,STDOUT_FILENO);

    write(STDOUT_FILENO,"Terminei\n",10);
}