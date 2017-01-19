#include <stdio.h>
#include <stdlib.h>

int main (){

	int favorito;

	printf("¿Cuál es tu número favorito?\n");
	scanf(" %i", &favorito);
	printf("Tu número favorito es el %i\n", favorito);

	return EXIT_SUCCESS;


}
