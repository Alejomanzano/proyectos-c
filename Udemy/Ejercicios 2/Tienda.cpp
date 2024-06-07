#include <stdio.h>

/*Simular una tienda con entradas y salidas de capital*/

int main(){

    int producto, producto2, producto3, producto4, producto5;
    int Agua = 2;
    int coca = 3; 
    int pepsi = 3;
    int leche =4;
    int fiora = 2;
    int operacion = 0;
   
    printf("\t***************************************************\n");
    printf("\t***** Bienvenido a tienda Manzano *****************\n");
    printf("\t***************************************************\n");

    printf("Ponga el codigo del producto: 1(Agua) 2(Coca cola) 3(Pepsi) 4(Leche) 5(Fiora)\n");
    scanf("%i %i %i %i %i", &producto, &producto2, &producto3, &producto4, &producto5);


    
    
    switch (producto)
    {
    case 1: printf("Agua y tendra que pagar 2.00\n");
        operacion += Agua;
        break;
    case 2: printf("Coca y tendra que pagar 3.00\n");
        operacion += coca;
        break;
    case 3: printf("Pepsi y tendra que pagar 3.00\n");
        operacion += pepsi;
        break;
    case 4: printf("Leche y tendra que pagar 4.00\n");
        operacion += leche;
        break;
    case 5: printf("Fiora y tendra que pagar 2.00\n");
        operacion += fiora;
        break;
    default: printf("Ese numero no se puede\n");
        break;
    }
    switch (producto2)
    {
    case 1: printf("Agua y tendra que pagar 2.00\n");
        operacion += Agua;
        break;
    case 2: printf("Coca y tendra que pagar 3.00\n");
        operacion += coca;
        break;
    case 3: printf("Pepsi y tendra que pagar 3.00\n");
        operacion += pepsi;
        break;
    case 4: printf("Leche y tendra que pagar 4.00\n");
        operacion += leche;
        break;
    case 5: printf("Fiora y tendra que pagar 2.00\n");
        operacion += fiora;
        break;
    default: printf("Ese numero no se puede\n");
        break;
    }
    switch (producto3)
    {
    case 1: printf("Agua y tendra que pagar 2.00\n");
        operacion += Agua;
        break;
    case 2: printf("Coca y tendra que pagar 3.00\n");
        operacion += coca;
        break;
    case 3: printf("Pepsi y tendra que pagar 3.00\n");
        operacion += pepsi;
        break;
    case 4: printf("Leche y tendra que pagar 4.00\n");
        operacion += leche;
        break;
    case 5: printf("Fiora y tendra que pagar 2.00\n");
        operacion += fiora;
        break;
    default: printf("Ese numero no se puede\n");
        break;
    }
    switch (producto4)
    {
    case 1: printf("Agua y tendra que pagar 2.00\n");
        operacion += Agua;
        break;
    case 2: printf("Coca y tendra que pagar 3.00\n");
        operacion += coca;
        break;
    case 3: printf("Pepsi y tendra que pagar 3.00\n");
        operacion += pepsi;
        break;
    case 4: printf("Leche y tendra que pagar 4.00\n");
        operacion += leche;
        break;
    case 5: printf("Fiora y tendra que pagar 2.00\n");
        operacion += fiora;
        break;
    default: printf("Ese numero no se puede\n");
        break;
    }
    switch (producto5)
    {
    case 1: printf("Agua y tendra que pagar 2.00\n");
        operacion += Agua;
        break;
    case 2: printf("Coca y tendra que pagar 3.00\n");
        operacion += coca;
        break;
    case 3: printf("Pepsi y tendra que pagar 3.00\n");
        operacion += pepsi;
        break;
    case 4: printf("Leche y tendra que pagar 4.00\n");
        operacion += leche;
        break;
    case 5: printf("Fiora y tendra que pagar 2.00\n");
        operacion += fiora;
        break;
    default: printf("Ese numero no se puede\n");
        break;
    }
    printf("Su valor a pagar es: %i", operacion);

   
    
    
    return 0;
}