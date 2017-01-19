#include <stdio.h>
#include <stdlib.h>

int main(){

	int base10, mul =0;

	printf("Dime un número para multiplicarlos por 320:");
	scanf(" %i", &base10);

	mul = base10 << 6;
	mul += base10 << 8;
	printf("El resultado es : %i.\n", mul);

	printf("Dime un número en decimal:");
	scanf(" %i", &base10);

	printf("El número %i en base decimal pasa a ser %X en hexadecimal\n",base10, base10);

	return EXIT_SUCCESS;
}
