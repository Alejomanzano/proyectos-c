#include <stdio.h>



int main(){

    int opcion;
    float agregar, retirar, saldo=300;

    printf("\t***************************************************\n");
    printf("\t***** Bienvenido a cajero Manzano *****************\n");
    printf("\t***************************************************\n");

    printf(" Selecciona una opcion\n");
    printf("\n1) Depositar dinero ");
    printf("\n2) Retirar dinero  ");
    printf("\n3) Salir al cajero \n ");
    scanf("%i", &opcion);

    switch (opcion){
        case 1: printf("Cuanto dinero quiere depositar?\n");
        scanf("%f", &agregar);
        saldo += agregar;
        printf("Tu saldo es de: %.2f", saldo);
        break;

        case 2: printf("Cuanto dinero quiere retirar? \n");
        scanf("%f", &retirar);
    
        if (saldo < retirar)
        {
            printf("Tu saldo disponible solo es de: %.2f", saldo);
        }else {
            saldo -= retirar;
            printf("Tu saldo es de: %.2f", saldo);
        }
        break;
        case 3: ("Gracias por usar esta app");
        break;
    }

    return 0;
}