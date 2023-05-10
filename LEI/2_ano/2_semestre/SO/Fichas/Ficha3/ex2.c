#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
    int r = 0;
    int status;
    //r = execl("/bin/ls","ls","-l",NULL);
    pid_t pid;
    if((pid = fork()) == 0){
        execl("/bin/ls","ls","-l",NULL);
        _exit(0);
    }
    else{
        pid_t child = wait(&status);
    }
    return r;
}