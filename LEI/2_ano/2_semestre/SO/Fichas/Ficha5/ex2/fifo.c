#include <sys/types.h>
#include <sys/stat.h>


int main(){
    int r = -1;
    if(mkfifo("fifo",0644) == 0){
        r = 0;
    }
    return r;
}