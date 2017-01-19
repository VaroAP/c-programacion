#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0, mayor=0;

	printf("Dime 10 números:\n");

		for(int con = 0; con < 10,con++;){
			printf("Número %i:", con+1);
			scanf(" %i", &num);

			if( num > mayor)
				mayor = num;

		}
	printf("El número mayor introducido es el %i. \n", mayor);

	return EXIT_SUCCESS;

}

