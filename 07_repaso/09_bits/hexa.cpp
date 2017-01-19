#include <stdio.h>
#include <stdlib.h>

int main(){

	int base10;
printf("Dime un número en decimal:");
	scanf(" %i", &base10);

	printf("El número %i en base decimal pasa a ser %X en hexadecimal\n",base10, base10);

	return EXIT_SUCCESS;
}
