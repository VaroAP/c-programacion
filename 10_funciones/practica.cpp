#include <stdio.h>
#include <stdlib.h>
/*
*/

int portada() {
    int opcion;
    printf("Para dar la vuelta a la palabra insertala y pulsa intro\n");
    system("rev");
    system("pause");

    return opcion;
}

void muestra (int dato){}

int main(int argc, char *argv[]){
	int inicio;
	char estado= 5;
		 muestra(estado);
		 inicio=portada();


    return EXIT_SUCCESS;
}
