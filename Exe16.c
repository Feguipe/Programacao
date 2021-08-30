#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    

float a,b,c, Confirmacao;

   
    printf("Insira um valor qualquer: ");
    scanf("%f",&a);

    
   
    printf("Insira um valor qualquer: ");
    scanf("%f",&b);
    
    

    printf("Insira um valor qualquer: ");
    scanf("%f",&c);

    Confirmacao= a+b;


    
    if (Confirmacao>c)
    {
        if (a==b)
        {
            if (a==c)
            {
                printf("A figura formada e um triangulo equilatero");
            }
            else {
                printf("A figura formada e um triangulo Isoceles");
            }
        }
        else {
            if (b==c)

            {
                printf("A figura formada e um triangulo Isoceles");
            }
            else {
                printf("A figura formada e um triangulo escaleno");
            }
            
        }
            
    }
    else{
    
        printf("A figura formada nao e um triangulo");

    }
        
    
    
    
    return 0;
}