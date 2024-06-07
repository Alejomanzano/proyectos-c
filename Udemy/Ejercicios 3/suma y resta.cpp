#include <stdio.h>

    /*Sumar un numero y restar el siguiente 1-2+3-4
    Impares = positivos
    Pares = negativos*/

int main(){

    int sumpares = 0, sumaimpares = 0, num1, i, neg;
    int sumageneral = 0;

    printf("Hasta que numero quieres sumar? \n");
    scanf("%i", &num1);


    i = 1;

    while (i <= num1)
    {
        if (i%2 == 0)
        {
            neg = i *(-1);
            sumpares += neg;
        }else {
            sumaimpares += i;
        }
        i++;   
    
    }
    sumageneral = sumaimpares + sumpares;
    printf("El resultado de la suma es %i \n", sumageneral);


    return 0;
}




