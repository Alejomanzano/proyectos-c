#include <stdio.h>

/*Seleccionar un tipo de vehiculo e 
indicar el peaje a pagar
sgun un valor numerico

1- turismo, peaje = 500.
2 - autobus, peaje = 3000.
3 - motocicleta, peaje = 300
caso contrario - Vehiculo no autorizado*/

int main(){

    int turismo, peaje;

    do
    {
        printf("Cual es su vehiculo? 1(Turismo) 2(autobus) 3(motocicleta)\n");
        scanf("%i", &turismo);

        while (turismo >3)
        {
            printf("AH SELECCIONADO MAL");
            printf("Cual es su vehiculo? 1(Turismo) 2(autobus) 3(motocicleta)\n");
            scanf("%i", &turismo);
        }
        

        switch (turismo)
        {
        case 1:
            printf("El costo es de 500\n");
            break;
        case 2: printf("El costo es de 3000\n");
            break;
        case 3: printf("El costo es de 300\n");
            break;
        default: printf("Ese codigo no esta registrado\n");
            break;
        }
    } while (turismo != 0);
    

    return 0;
}