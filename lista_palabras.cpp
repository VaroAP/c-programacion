#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){
	// 1. Declara un array de n caracteres que se llame buffer
	// 2. Declara una variable que sea un puntero o una palabra
	// 3. Pide al usuario el nombre y guardalo en la variable buffer
	// 4. Pide el nombre al usuario asegurate que el usuario puede tener un nombre compuesto
	// 5. Reserva el espacio para la palabra que acaba de meter el usuario
	// 6. Copia lo que hay en buffer en  palabra
	// 7. Imprime la palabra
	// 8. Libera la memoria a la que apunta palabra

	char buffer[N];
	char *palabra;
		printf("Dime tu nombre:");
			scanf(" %s",palabra);

	fgets(buffer,N,stdin);

	palabra= (char*) malloc (strlen(buffer)+1);

	strcpy(palabra,buffer);
		printf("Tu nombre  es  %s",palabra);

	free(palabra);

	return EXIT_SUCCESS;
}
