#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, i=1;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("La suma de los %d primeros numeros es: %d", num, sum);
    
    return 0;
}
