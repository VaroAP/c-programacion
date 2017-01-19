#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2,aux=0;

		printf( "Dame el 1º número\n");
			scanf(" %i", &num1);

		printf("Dame el 2º número\n");
			scanf(" %i",&num2);
		printf("Intercambiando números.............\n");

		aux=num1;
		num1=aux;
		aux=num2;

		printf("El numero1 es %i, el num2 es %i\n",num2,num1);

		return EXIT_SUCCESS;
}
