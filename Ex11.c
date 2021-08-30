#include <stdio.h> 
#include <stdlib.h> 



 int main (void)
  {

  float a,b,maior, igual;

    printf("Digite o primeiro numero : ");
    scanf("%f",&a);
    printf("Digite o segundo numero : ");
    scanf("%f",&b);

    if (a > b) {
        maior = a;
    printf("Primeiro numero e maior que o segundo : %f",maior);
    }

    else if (b < a){
       maior = b;
    printf("\nSegundo numero e maior que o primeiro : %f\n",maior);  
    }

    else if (a=b)    {
        igual= a = b;
        printf("Primeiro numero e igual ao segundo : %f",igual);


        
    }
    
   

    system("pause");
    return 0;

  }
