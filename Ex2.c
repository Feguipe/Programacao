#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    float ladoa, ladob, area;
    printf("Digite lado A: ");
    scanf("%f",&ladoa);

    printf("Digite lado B: ");
    scanf("%f", &ladob);

    area = ladoa*ladob;
    printf("A multiplicacao de %f e %f, e %f\n",ladoa,ladob,area);
    return EXIT_SUCCESS;

}
