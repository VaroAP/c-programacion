#include <stdio.h>
#include <stdlib.h>

#define NUM_INTENTOS  15

int main(void)
{
   char texto[] = "concatenacion es la palabra";
   char estado[sizeof texto];
   int por_adivinar;
   int long_texto;
   int i;
   int j;
   char ch;
   
   /* 
   ** Realizamos en un solo bucle las operaciones:
   ** 
   ** 1) Contar la longitud del texto
   ** 2) Contar el numero de caracteres a adivinar
   ** 3) Crear el estado del juego (caracteres ocultos)
   */
   por_adivinar = 0;
   for (i = 0; texto[i] != '\0'; i++)
      if (texto[i] == ' ')
         estado[i] = ' ';
      else {
         estado[i] = '*';
         por_adivinar++;
      }
   estado[i] = '\0';
   long_texto = i;
   
   /* Procesamos cada uno de los intentos */
   for (i = 0; i < NUM_INTENTOS; i++) {
      printf("Estado: %s\n", estado);
      printf("Introduce una letra: ");
      fflush(stdout);
      if (scanf(" %c", &ch) != 1)
         return EXIT_FAILURE;
      
      /* Revisamos cada uno de los caracteres por adivinar */
      for (j = 0; j < long_texto; j++)
         if (estado[j] == '*' && texto[j] == ch){
            /* "Destapamos" el caracter */
            estado[j] = texto[j];
            /* Actualizamos el numero de aciertos */
            por_adivinar--;
         }
      
      /* Terminamos el juego si se ha ganado */
      if (por_adivinar == 0)
         break;
   }
   
   if (por_adivinar == 0){
      printf("Estado: %s\n", estado);
      puts("Gano!");
   }else 
      puts("Perdio! :(");
   
   return EXIT_SUCCESS;
}
