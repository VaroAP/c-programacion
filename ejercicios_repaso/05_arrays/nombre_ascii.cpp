#include <stdio.h>
#include <stdlib.h>

int main(){

	int nombre[] = {181,108,118,97,114,111};

	for (int con =0; con < sizeof(nombre)/sizeof(con); con++)
		printf(" %c", nombre[con]);

	printf(" \n");
		return EXIT_SUCCESS;
}
