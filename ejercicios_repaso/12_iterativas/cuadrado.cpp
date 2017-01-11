#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,num;

	printf("Dime un número:");
	scanf(" %d", &num);

	for(i=0;i<num; i++){
		for(j=0; j<num;j++)
			printf("*");
			printf("\n");

	}


	return EXIT_SUCCESS;
}

