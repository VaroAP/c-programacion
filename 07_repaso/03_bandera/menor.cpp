#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0, menor=0;

	printf("Dime 10 números:\n");

		for(int con = 0; con < 10,con++;){
			printf("Número %i:", con+1);
			scanf(" %i", &num);

			if( con == 0)
				menor = num;
			if(num < menor)
				menor=num;

		}
	printf("El número menor introducido es el %i. \n", menor);

	return EXIT_SUCCESS;

}

