#include <stdio.h>
#include <stdlib.h>


//Como es bool pones un return que no este condicionado a nada

bool es_primo(int n){
	for (int i= n-1; i>1; i--){
		if(n%i==0)
			return 0;
	}
return 1;
}

int main(){
	int numero;
	printf(" %i %s primo. \n",
			numero,es_primo(7)? "es " : "no es");
	//? --> if
	//: -->else
	return EXIT_SUCCESS;
}
