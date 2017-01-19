#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int total=0, numero=0 ,media, con=0;

	printf("Dime las notas de la clase para la media(para parar escribe un número negativo)\n");

	while(numero>-1){
		printf("%iº nota:", con+1);
		scanf(" %i", &numero);
		total +=numero;

		if(numero > -1)
			con++;
	}

	media = total/con;
	printf("Tu media es de %i.\n", media);

    return EXIT_SUCCESS;
}
