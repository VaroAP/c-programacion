#include <stdio.h>
#include <stdlib.h>

int main(){

	char palabra[] = "repaso";

	for(int con=0;con < sizeof(palabra)/sizeof(char) -1 ; con++)


		printf(" %c", palabra[con]+3);


	printf(" \n");
		return EXIT_SUCCESS;
}
