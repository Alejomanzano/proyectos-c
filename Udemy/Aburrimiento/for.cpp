#include <stdio.h>

int main(){

    
    int num, num2, suma;

   printf("Digiteme un numero para poder sumarle\n");
   scanf("%i", &num);

   while (num < 0)
    {
        printf("Digite un numero positivo no un numero negativo\n");
        printf("Digiteme un numero para poder sumarle\n");
        scanf("%i", &num);
    }

   printf("Digite otro numero entero para  poder sumarle\n");
   scanf("%i", &num2);
    
    while (num2 < 0)
    {
        printf("Digite un numero positivo no un numero negativo\n");
        printf("Digite otro numero entero para  poder sumarle\n");
        scanf("%i", &num2);
    }

    suma = num + num2;

    printf("Tu valor seria %i\n ", suma);

    int i;

    if (suma >50)
    {
        printf("Y su valor acendente seria: \n" );

        for ( i = suma; i >= 10; i--)
        {
            
            printf("%i\n", i);
        }
        
        
    }else if (suma < 50) {
        
        printf("Y su valor acendente seria:\n");
        for ( i = suma; i <= 50; i++)
        {
            
            printf("%i\n", i);
            
        }
        
        
    }
    
    

    return 0;
}