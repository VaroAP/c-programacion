#include <stdio.h>
#include <stdlib.h>

	int main () {
		int total = 0, num, media;

		printf("Introduce 10 números para realizar su media: \n");

		for(int con = 0; con < 10; con++){
				printf("Número %i:", con+1);
				scanf(" %i", &num);

				total += num;
			}

		media = total/10;
		printf("Tu media será de: %i.\n", media);



		return EXIT_SUCCESS;

	}
