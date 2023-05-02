#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(int argc, char **argv){
    //criar pipe

    //criar processo filho

    //pai: fichar pipe[0]; lê do STDIN_FILENO e escreve no pipe[1]

    //filho: fechar pipe[1]; STDIN -> pipe[0]

    int pipe_fd[2];
    pipe(pipe_fd);

    if(fork() == 0){
        close(pipe_fd[1]);
        dup2(pipe_fd[0],STDIN_FILENO); // descritor utilizado para STDIN é o pipe
        close(pipe_fd[0]);

        execlp("wc","wc",NULL);  // execlp lê do pipe
    }
    else{
        close(pipe_fd[0]);
    }

    char buffer[100];
    int read_bytes = 0;

    while((read_bytes = read(STDIN_FILENO,buffer,100))>0){
        write(pipe_fd[1],buffer,read_bytes); // escreve no ficheiro 
        //write(stdout,buffer,read_bytes); // escreve no ecrâ
    }

    close(pipe_fd[1]);

    wait(NULL);

    return 0;
}