#include <stdio.h>
#include <stdlib.h>

//Te cargue en esas variable del teclado


void leer(double *base, double *exp){ //<---- Dirección de memoria

      	printf("Dime la base y el exponente\n");
	scanf(" %lf", base);
	scanf(" %lf", exponente);

};



int main(){

	double base, exponente;

       	leer(&base,&exponente);

	printf("%.1lf\t %.1lf\n", base, exponente);

	return EXIT_SUCCESS;
}
