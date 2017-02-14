#include <stdio.h>
#include <stdlib.h>

#define N 2,3,4

int funcion(int x=2){

	return x+x-x;
}

int main(int argc, char *argv[]){

	double numeros[N];
	double pontencia;

	printf("Dime un número\n");
		scanf(" %i",numeros);

	return EXIT_SUCCESS;
}
