#include <stdio.h>
#include <string.h>

/* Ingresar por teclado el nombre y el signo de cualquier persona e imprima
el nombre solo si la persona es signo Aries
caso contrario imprima no es signo Aries*/

int main() {
    char nombre[40], signo[20];

    printf("¿Cuál es tu nombre?\n");
    fgets(nombre, 40, stdin);
    strtok(nombre, "\n");  // Eliminar el carácter de nueva línea del nombre

    printf("¿Cuál es tu signo?\n");
    fgets(signo, 20, stdin);
    strtok(signo, "\n");  // Eliminar el carácter de nueva línea del signo

    if (strcmp(signo, "aries") == 0) {
        printf("Tu nombre es: %s, y tu signo es aries\n", nombre);
    } else {
        printf("Tu signo no es Aries.\n");
    }

    return 0;
}

