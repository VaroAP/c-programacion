#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 29
#define TRUE 1
#define FALSE 0
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)

const char *palabra[] = {
    "videojuego","camisa","programa","sudadera","portatil","alpargata","nieve",NULL
};

int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX];
    int aleatoria;
    char letra[TRUE];
    int fallos=0;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    // strcpy(adivinado, elegida);
    bzero(adivinado, MAX);
    	for (int i=0; i<(int) strlen(elegida); i++){
     			adivinado[i] = '_';
			printf("%c ", adivinado[i]);
	}

	do{
		printf("\n\t Dime una letra:\n");
		scanf(" %c",letra);

   	     for (int i=0; i<(int) strlen(elegida); i++){

        	 if(elegida[i]==letra[FALSE]){

			adivinado[i]=letra[FALSE];}

			printf(" %c",adivinado[i]);

			fallos++;
	 }

	}while(fallos>=0);



    return EXIT_SUCCESS;
}
