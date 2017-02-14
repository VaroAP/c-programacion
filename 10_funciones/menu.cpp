#include <stdio.h>
#include <stdlib.h>

char menu(){

	char menu;
	system("toilet -Fborder --gay  Menú");
	printf("Que operación quieres realizar\n");
	printf("1.Multiplica\n");
	printf("2.Suma\n");
	printf("3.Resta\n");
	printf("4.Divide\n");
		scanf(" %c",&menu);

	return menu;

}
int multiplica(int op1, int op2){
	return op1*op2;

}
int suma(int op1, int op2){
	return op1+op2;
}


int main(){
	int op1,op2;
	char opcion = menu();
	printf ("Dame el operando 1");
		scanf(" %i",&op1);
	printf ("Dame el operando 2");
		scanf(" %i",&op2);
	switch(opcion){
		case '1':printf("Resolucion es %i",multiplica(op1,op2));
			break;
		case '2':printf("Resolucion es %i",suma(op1,op2));

	}

	return EXIT_SUCCESS;
}
