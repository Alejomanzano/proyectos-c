#include <stdio.h>

    /*Calcular tarifas de saldo en celulares
    y poner precios
    De 1000 a 1500 premium
    De 500 a 999 intermedio
    De 100 a 499 Basica*/

int main (){

    int monto;
    
    printf("Cuanto monto esta dispuesto a pagar?\n");
    scanf("%i", &monto);

    if (monto >= 1000 && monto <= 1500) {
        printf("Su tarifa de celular es premium\n");
    } else if (monto >= 500 && monto <= 999) {
        printf("Su tarifa de celular es intermedia\n");
    } else if (monto >= 100 && monto <= 499) {
        printf("Su tarifa de celular es básica\n");
    } else {
        printf("No hay esa tarifa de saldo disponible\n");
    }

    

    return 0;
}