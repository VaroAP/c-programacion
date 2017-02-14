#include <stdio.h>
#include <stdlib.h>


int suma(int op1,int op2){


	//printf("%i + %i=",op1,op2);
	return op1 + op2;
}

int main(int argc, char *argv[]){

	

	int resultado= suma(2,3);

	printf("Resultado = %i\n",resultado);


	return EXIT_SUCCESS;
}
