#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, con, div;
		printf("Dime un número:");
			scanf(" %i",&num);

		for(con=num-1;con>1;con--){

			if(num % con==0)
			{
				div=0;
			}

		}


		if(div==0){
			printf("Es divisible");
	}
		else	printf("No es divisible");


		return EXIT_SUCCESS;
}
