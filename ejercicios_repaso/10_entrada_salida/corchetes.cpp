#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombres[200];
	char nombre1[100];
	char nombre2[100];

	printf("Dime un primer nombre\n");
	scanf(" %s",nombre1);

	printf("Dime un segundo nombre\n");
	scanf(" %s",nombre2);

	sprintf(nombres,"%s %s",nombre1,nombre2);
	scanf(" %s",nombres);

	printf("Has escrito %s \n",nombres);




    return EXIT_SUCCESS;
}
