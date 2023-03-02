
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"


int main(){

	Deque *d = create();
	char line[BUFSIZ];
	char token[BUFSIZ];
	

	if(fgets(line,BUFSIZ, stdin)!= NULL) {
		
		while(sscanf(line,"%s%[^\n]", token , line) == 2){

			handle(d,token);

		}
		handle(d,token);

		for(int i = 1; i <= d->dp;i++){

			printf("%d",d->deque[i]);
			
		}
		printf("\n"); 	

	}


	return 0;

}