#include <unistd.h>
#include <stdlib.h>

int main(){
    int r = 0;
    r = execl("/bin/ls","ls","-l",NULL);
    return r;
}