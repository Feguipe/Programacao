#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    float base, altura, area;
    printf("Digite base: ");
    scanf("%f",&base);

    printf("Digite altura: ");
    scanf("%f", &altura);

    area = (base*altura)/2;
    printf("A multiplicacao de %f e %f, e %f\n",base,altura,area);
    return EXIT_SUCCESS;

}
