#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, suma =0;

	printf("Dime un número:\n");
		scanf(" %i", &num);
	for(int con=1;con < num; con++){
		if(num%con ==0)
			suma += con;

	}

	if(num == suma){
		printf("El número es perfecto\n");
	} else {
		printf("El númerono es perfecto\n");
	}
	return EXIT_SUCCESS;
}
