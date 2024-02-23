#include <stdio.h>

/*Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares 
y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se cuenta.*/

int main() {

    int pares = 0, impares = 0;
    int numero;

    printf("Ingrese cualquier numero, si se ingresa un numero negativo acaba:");
    scanf("%d", &numero);

    while (numero >= 0) {

        if (numero != 0) {
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        } else {
            printf("No se puede poner el numero 0.\n");
        }

        printf("Ingrese otro numero (o un numero negativo para terminar): ");
        scanf("%d", &numero);
    }

    printf("La cantidad de numeros pares es: %d\n", pares);
    printf("La cantidad de numeros impares es: %d\n", impares);

    return 0;
}