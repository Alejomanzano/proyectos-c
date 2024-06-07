#include <stdio.h>

/*Determinar si el numero ingresado por el ususario 
es primo o no

* 2, 5, 7,
*/

int main (){

    int num, count;

    printf("Escribir un numero \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i)
    {
        if (num %i == 0)
        {
            
            count++;
        }
        
    }
    if (count > 2)
    {
        printf("El numero es compesto\n");
    }else {
        printf("El numero es primo\n");
    }
    
    
    

    return 0;
}