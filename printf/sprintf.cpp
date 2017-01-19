#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero = 12345678;
	char dni[8]; //Imprime la cadena

	sprintf(dni, "%i",numero);

	 //atoi itoa : Son os funciones que transforma de ascii a tentero

	return EXIT_SUCCESS;
}
