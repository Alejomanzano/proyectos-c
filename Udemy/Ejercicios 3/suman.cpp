#include <stdio.h>

int main (){

    int cont = 0, num, suma =0;
    printf("Escribe la cantidad de los elementos: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (i %2 == 0)
        {
            suma += i;
            cont ++;
        }
        
    }
    printf("La suma de los numeros par es: %d\n", suma);
    printf("La cantidad de numeros pares es: %d\n", cont);

    return 0;
}