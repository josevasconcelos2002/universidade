#include <sys/types.h>
#include <sys/stat.h>

/*
3 programas

programa1 :

 cria fifo (pipe com nome)
 mkfifo


 programa2: 

 stdin (descritor-> 0) -> open(mode write) fifo
open(fifo,W);

read(0,buffer);
write(fifo,buffer);

 programa3:

 open(mode read) fifo -> stdout (descritor-> 1)
open(fifo,R);

read(fifo,buffer,...);
write(1,buffer,...);
*/

int main(){
    int r = -1;
    if(mkfifo("fifo",0644) == 0){
        r = 0;
    }
    return r;
}