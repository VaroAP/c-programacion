#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * archivo;
	char caracteres[50];
	char palabra;

	printf("Dime la palabra que quieres buscar:");
	scanf(" %c", &palabra);

	archivo = fopen("archivo.txt", "c");
	rewind(archivo);


    return EXIT_SUCCESS;
}
