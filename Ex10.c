#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    
    int a, b;


    
    printf("Digite o primeiro numero: ");
    scanf("%i",&a);

    printf("Digite o segundo nuemero: ");
    scanf("%i",&b);

    if(a<=b){
        printf("O menor valor entre os inseridos e %i.",a);
    }
    else {
        printf("O menor valor entre os inseridos e %i.",b);
    }




    return 0;
}