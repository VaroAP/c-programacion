#include <stdio.h>
#include <stdlib.h>

int main () {

	char palabra[] = "repa";
	int longitud = sizeof(palabra)/sizeof(char) - 1;
	char invertido[4];

	for(int con = 0; con < sizeof(palabra)/sizeof(char) - 1; con++){
			invertido[longitud] = palabra[con];
			longitud --;


		}

	printf(" %s\n", invertido);
	return EXIT_SUCCESS;
}
