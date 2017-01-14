#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int num=0;


	while(num < 1 || num >10){
			printf("Dime un numero del 1 al 10\n");
			scanf(" %i",&num);
	}

    return EXIT_SUCCESS;
}
