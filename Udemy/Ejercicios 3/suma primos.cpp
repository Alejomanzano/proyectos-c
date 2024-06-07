#include <stdio.h>

/*Suma de 20 numeros pares*/

int main (){

    int i, suma=0;

    /*for ( i = 1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            suma += i;
                printf("La suma va en %i\n", suma);
        }
        
    }*/ //puede ser esta o tmb

    for ( i = 1; i <= 10; i+= 2)
    {
        suma +=i;
    }
    
    
    printf("El valor final de la suma es %i\n", suma);
        

    return 0;
}