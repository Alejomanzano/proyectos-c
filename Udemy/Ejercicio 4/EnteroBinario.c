//Pasar de numero entero a binario con Recursividad

#include <stdio.h>

void binario(int numero);

int main() {
    int numero;

    do
    {
        printf("Escribe un numero\n");
        scanf("%i",&numero);
    } while (numero<0);
    
    binario(numero);

    return 0;
}

void binario(int numero){

    if (numero>1) binario(numero/2);
    
    printf("%i",numero%2);
}