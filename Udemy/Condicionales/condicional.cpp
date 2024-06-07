#include <stdio.h>

/*Expresion condicional operador '?'

Sintaxis:

condicion ? expresion1: Expresion2*/

int main(){

    int numero;
    printf("Escribe un numero\n");
    scanf("%i", &numero);

    (numero%2==0) ? printf("El numero es par\n") : printf("Es impar \n");

    return 0;
}