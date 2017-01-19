#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arg[]){

    int num1, o1,num2, o2,
       	resultado=0;

    printf ("Número 1: ");

    scanf(" %i", &num1);

     o1 = num1;

    printf ("Número 2: ");
    scanf(" %i", &num2);
     o2 = num2;

    do{
	if(num2 % 2 == 1 )
		resultado += num1;
	num2 >>= 1;
	num1 <<= 1;

    } while (num2 > 0);


    printf( "%i x %i = %i\n", o1, o2, resultado);
    	//%i imprime el valor de la variable op1,op2, resultado

    return EXIT_SUCCESS;

}
