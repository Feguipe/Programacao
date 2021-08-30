#include <stdio.h> 
#include <stdlib.h> 



 int main (void)
  {

  float a,b,c,maior;

    printf("Digite o primeiro numero : ");
    scanf("%f",&a);
    printf("Digite o segundo numero : ");
    scanf("%f",&b);
    printf ("Digite o terceiro numero : ");
    scanf("%f", &c);

    if (a > b >c) {
        maior = a;
    printf("Primeiro numero e maior que os outros : %f\n",maior);
    }

    else if (b > a > c){
       maior = b;
    printf("\nSegundo numero e maior que os outros : %f\n",maior);  
    }

    else if (c>a>b)    {
        maior = c;
        printf("\n Terceiro numero e maior que os outros : %f\n",maior);  
    }

    
    

    system("pause");
    return 0;

  }
