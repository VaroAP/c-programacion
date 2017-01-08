#include <stdio.h>
#include <stdlib.h>

int main(){

	int rojo, amarillo, azul;

	printf("¿El color tiene rojo?");
	scanf(" %i", &rojo);

	printf("¿El color tiene amarillo?");
	scanf(" %i", &amarillo);

	printf("¿El color tiene azul?");
	scanf(" %i", &azul);

	if(rojo ==1){
		if(amarillo ==1){
			if(azul ==1){
				printf("Su color es el Marrón");
			}else {
				printf("Su color es el Naranja");
			}

		}else {
			if(azul ==1){
				printf("Su color es el Morado");
			}else {
				printf("Su color es el Rojo");
			}
		}
	}else{
		if(amarillo==1){
			if(azul ==1){
				printf("Su color es el verde");
			}else{
				printf("Su color es el amarillo");
			}
		}else{
			if(azul ==1){
				printf("Su color es el Azul");
			}else{
				printf("No tienes ningun color");
			}
		}
	}


	return 0;
}

