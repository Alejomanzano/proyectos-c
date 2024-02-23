#include <stdio.h>

int main() {
    const int edadMatusalen = 969;
    int intentosMaximos = 3;
    int intento = 1;
    int respuesta;

    do {
        printf("Intento %d: Adivina la edad de Matusalén: ", intento);
        scanf("%d", &respuesta);

        if (respuesta == edadMatusalen) {
            printf("¡Correcto! Adivinaste la edad de Matusalén.\n");
            break;
        } else if (respuesta < edadMatusalen) {
            printf("Incorrecto. La edad de Matusalén es mayor.\n");
        } else {
            printf("Incorrecto. La edad de Matusalén es menor.\n");
        }

        intento++;

    } while (intento <= intentosMaximos);

    if (intento > intentosMaximos) {
        printf("No adivinaste la edad de Matusalén en los 3 intentos.\n");
        printf("¿Quieres intentarlo nuevamente? (si/no): ");

        char opcion[3];
        scanf("%s", opcion);

        if (strcmp(opcion, "si") == 0) {
            main();  // Llamada recursiva para reiniciar el programa
        } else {
            printf("Gracias por jugar. Hasta luego.\n");
        }
    }

    return 0;
}
