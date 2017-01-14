#include <stdio.h>
#include <stdlib.h>

int main(){
	int fila,columna,num;

	printf("Introduce lado del cuadrado");
	scanf(" %d", &num);

	for(fila=1;fila < num; fila++){
		for(columna=1; columna<=num;columna++)
			printf("*");
			printf("\n");

	}


	return EXIT_SUCCESS;
}

