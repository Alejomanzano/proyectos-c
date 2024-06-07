#include <stdio.h>
#include <math.h>

/*Ingrese un numero y calculo e imprima su raiz cuadrada
Si el numero es 
negativo = imprima el numero 
y un mensaje que diga tiene raiz imaginaria*/

int main() {
    float num, raiz;
    int opcion;

    do {
        printf("\nVamos a calcular la raiz cuadrada.\n");
        printf("1) Si\n");
        printf("2) No\n");
        
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese un número: ");
            scanf("%f", &num);

            if (num >= 0) {
                raiz = sqrt(num);
                printf("La raiz cuadrada de %.2f es: %.2f\n", num, raiz);
            } else {
                printf("El número %.2f tiene raíz imaginaria.\n", num);
            }
        }
    } while (opcion != 2);

    return 0;
}