#include <stdio.h>

/* Realizar un programa en C que resuelva el siguiente problema: 
En un bosque se necesita saber el promedio de diámetro de cada tronco de ciprés y el promedio de su altura. 
El proceso termina cuando el usuario responde con una ‘N’, mientras tanto, debe responder con ‘S’. */

int main(){

    int cantidadtroncos = 0;
    float sumdiametro = 0.0, sumaltura = 0.0;
    char respuesta;

    do {
        float diametro, altura;

        printf("Cual es el diametro? \n ");
        scanf("%f", &diametro);

        printf("Cual es la altura? \n");
        scanf("%f", &altura);

        sumdiametro += diametro;
        sumaltura += altura;
        cantidadtroncos++;
        

        printf("Quieres ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');

    if (cantidadtroncos > 0) {
        float promdiametro = sumdiametro / cantidadtroncos;
        float promaltura = sumaltura / cantidadtroncos;

        printf("El promedio de diametro es: %.2f\n", promdiametro);
        printf("El promedio de altura es: %.2f\n", promaltura);
    } else {
        printf("No se ingresaron datos de troncos.\n");
    }

    return 0;
}
