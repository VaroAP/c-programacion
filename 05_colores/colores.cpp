#include <stdio.h>
#include <stdlib.h>



int main() {

    int amarillo,rojo,azul;

   	printf("¿Ves el color rojo? (Si =1  No=0)\n");
		scanf(" %i", &rojo);


	if (rojo==1)
		printf("¿Ves el color amarillo( Si =1 No=0)?\n");
			scanf(" %i", &amarillo);
			if (amarillo==1)
				printf("¿Ves el color azul? (Si = 1 No =0)\n");
					scanf(" %i", &azul);
						if(azul==1)
							printf("Es el color morado\n");
	else
		printf("Es el color negro\n");



	 return 0;
}
