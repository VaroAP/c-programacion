#include <stdio.h>
#include <stdlib.h>


//Como es bool pones un return que no este condicionado a nada

bool es_perfecto(int n){
	for(i=1; i<num; i++) {
	mul=num%i;
		if(mul==0) {
			sum+=i;
			return 0;
		}
		return 1;
		}
};

int main(){
	int numero;
	printf(" %i %s primo. \n",6,
			es_perfecto(6)? "es " : "no es");
	//? --> if
	//: -->else

	return EXIT_SUCCESS;
}
