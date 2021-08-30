#include<stdio.h>
#include<stdlib.h>

int main (void)

{  
    float a, b, c, d, troco, valortotal, dinheiro;

    printf("Digite o primeiro numero: R$");
    scanf("%f",&a);

    printf("Digite o segundo numero:  R$");
    scanf("%f", &b);

    printf("Digite o terceiro numero: R$");
    scanf("%f", &c);

    printf("Digite o quarto numero: R$");
    scanf("%f", &d);

    printf("Digite o valor do dinheiro recebido: R$");
    scanf("%f", &dinheiro);
    
    valortotal = a+b+c+d;

    troco = dinheiro - valortotal;

    printf("O troco recebido e: R$ %2.3f\n\n", troco);

    return 0;

    
    
}