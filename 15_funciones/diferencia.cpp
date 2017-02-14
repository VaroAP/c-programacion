#include <stdio.h>
#include <stdlib.h>

// Haz un programa que calcule la deribada en un punto

#define incre 0.001

double x_cuadrado(double x ){

	return x*x;
}

double formula(double x){

	return ((x_cuadrado(x+incre)) - x_cuadrado(x))/incre;


}

int main(int argc, char *argv[]){

	double v1;

	printf("Define el primer valor para la derivada\n");
		scanf(" %lf",&v1);

	printf("Tu diferencia es  %lf\n",formula(v1));
	return EXIT_SUCCESS;
}
