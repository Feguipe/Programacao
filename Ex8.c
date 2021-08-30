#include <stdio.h>
#include <stdlib.h>

int main (void)

{
   float peso, altura, IMC;

   printf("Digite o valor do peso em:  Kg");
   scanf("%f", &peso);

   printf("Digite o valor da alutra em: m");
   scanf("%f",&altura);

   IMC = peso/(altura*altura);

   printf("Digite o valor do IMC: %2.3f\n\n",IMC);

   return 0;
}
