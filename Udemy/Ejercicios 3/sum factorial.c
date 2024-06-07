#include <stdio.h>

int main(int argc, char const *argv[])
{

    int factorial= 1, suma = 0, cantidadfac;

    printf("La cantidad de factoria a sum\n");
    scanf("%i", cantidadfac);

    for (int i = 1; i < cantidadfac; i++)
    {
        factorial = factorial * i;
        suma = suma + factorial;
        factorial *= i
        suma += factorial;
    }
    printf("La suma de factorial es: %d", suma);

    return 0;
}
