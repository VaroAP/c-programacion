#include <stdio.h>
#include <stdlib.h>

// Haz un programa que calcule la deribada en un punto

#define incre 0.001

double x_cuadrado(double x ){

	return x*x;
}

double formula(double x){

	return  ((x_cuadrado(x+incre) - x_cuadrado(x) /incre));


}

int main(int argc, char *argv[]){

	double x;

	printf("Define el primer valor"\n);
		scanf(" %.3lf",&x);

	printf(" %.3lf", formula(x));
	return EXIT_SUCCESS;
}
