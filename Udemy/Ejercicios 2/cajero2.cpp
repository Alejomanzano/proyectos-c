#include <stdio.h>

/* hacer un programa que simule un cajero automático con un saldo de 1000 dólares */

int main() {
    float saldo = 1000;
    int num;
    float num2;

    do {
        printf("\nBienvenidos al cajero\n");
        printf("1) Retirar del cajero\n");
        printf("2) Depositar su saldo\n");
        printf("3) Consultar saldo\n");
        printf("4) Salir\n");

        scanf("%i", &num);

        switch (num) {
            case 1:
                printf("Cuánto desea retirar??\n");
                scanf("%f", &num2);

                if (num2 > saldo) {
                    printf("Fondos insuficientes\n");
                } else {
                    saldo -= num2;
                    printf("Su saldo restante es de: %.2f\n", saldo);
                }
                break;
            case 2:
                printf("Cuánto desea depositar??\n");
                scanf("%f", &num2);
                saldo += num2;
                printf("Su saldo es de: %.2f\n", saldo);
                break;
            case 3:
                printf("Su saldo es de: %.2f\n", saldo);
                break;
            case 4:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }
    } while (num != 4);

    return 0;
}