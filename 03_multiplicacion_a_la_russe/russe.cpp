#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arg[]){

    //Declaro las variables op1, op2, resultado
    //Pedir op1 op2 al usuario.
    //Poner resultado =0
    //
    //	do-->  Si op2 es impar
    //  		acumular op1 en resultado
    //Divide op2 / 2
    //Multiplica op1
    //Repetir si op1 > 0

    int op1, o1,
       	op2, o2,
       	resultado=0;

    printf ("Operando 1: ");
    //imprime por pantalla la cadena de caracteres
    scanf(" %i", &op1);
    // &= la direccion de.. op1
    // %i= lee el numero entero
     o1 = op1;

    printf ("Operando 2: ");
    scanf(" %i", &op2);
     o2 = op2;

    do{
	if(op2 % 2 == 1 )
		resultado += op1;
	op2 >>= 1;
	op1 <<= 1;
	//Desplaza los bits hacia la derecha 1 posición , es mas rapido desplazar los bits que divir entre 2 o multiplar.
	//Desplaza los bits op1  1 posición hacia la izquierda

    } while (op2 > 0);
    	// %--> Hace  el resto (op2 % 2)
	//Hacer mientras que el op1 sea mayor que 0

    printf( "%i x %i = %i\n", o1, o2, resultado);
    	//%i imprime el valor de la variable op1,op2, resultado

    return EXIT_SUCCESS;

}
