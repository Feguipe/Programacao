#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, soma;

    printf("Digite o primeiro numero: ");
    scanf("%i",&a);

    printf("Digite o segundo numero: ");
    scanf("%i", &b);

    soma = a+b;
    printf("A soma de %i e %i, a, b, soma");

    return 0;
}
