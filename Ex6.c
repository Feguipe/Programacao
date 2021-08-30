#include<stdio.h>
#include<stdlib.h>

int main (void)

{
    float dolar, real;
   
    printf ("Valor em dolar: ");
    scanf  ("%f", &dolar);

    real = 5.26 * dolar;

    printf(" Quantia em real: R$ %2.3f\n\n", real);
    
    return 0;
}
