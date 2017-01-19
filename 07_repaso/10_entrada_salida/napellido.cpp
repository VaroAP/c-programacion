#include <stdio.h>
#include <stdlib.h>

int main(){

	char napellido[100];
	char nombre[50], apellido[50];

	printf("Dime tu nombre:");
	scanf(" %s", nombre);
	printf("Dime tu apellido:");
	scanf(" %s", apellido);

	sprintf(napellido, "%s %s", nombre, apellido);
	printf("Te llamas: %s.\n", napellido);


    return EXIT_SUCCESS;
}
