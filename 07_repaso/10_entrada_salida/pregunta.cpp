#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombre[20];

	printf("¿Cuál es tu nombre?\n");
	scanf(" %s",nombre);

	printf("Tu nombre es %s\n", nombre);




    return EXIT_SUCCESS;
}
