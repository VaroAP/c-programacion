#include <stdio.h>
#include <stdlib.h>


bool es_par(int n){

	//Si el resto de número entre 2 es igual a cero es par

	return(n % 2==0);

}
;
int main(int argc, char *argv[]){

	int numero;

	printf("Numero:");
	scanf(" %i",&numero);
	printf("Tu número %s es par\n",
			es_par(numero)? "": "no ");
	//condicional es_par8numero)? "": "no "--> tu escribes una cosa o otra lo que escribes en "no " es lo que queda
	//Es un if y un else resumido
	return EXIT_SUCCESS;
}
