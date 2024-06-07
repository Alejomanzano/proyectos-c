#include <stdio.h>

/*Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto debera pagar finalmente por su compra*/

int main(){

float compras, resultado, resultadofin;

    printf("Bienvenido a la tienda\n");
    printf("Ponga aqui cuanto le salio en total\n");
    scanf("%f", &compras);

    resultado = compras *0.15;
    resultadofin= compras - resultado;

    printf("Su valor total era de: %f\n", compras);
    printf("Su total con el descuento es de: %2.f\n", resultadofin);

    return 0;
}