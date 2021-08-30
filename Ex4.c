#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float a, b, c, d, media;

    printf("Digite o primeiro numero: ");
    scanf("%f",&a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    printf("Digite o quarto numero: ");
    scanf("%f", &d);

    media = (a+b+c+d)/4;
    printf("O resultado da media aritimetica de %f,%f,%f,%f e %f\n",a,b,c,d, media);
    
    return EXIT_SUCCESS;
}    
