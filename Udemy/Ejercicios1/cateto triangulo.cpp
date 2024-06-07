#include <stdio.h>
#include <math.h>
/*Sacar la hipotenusa de un triangulo rectangulo
pidiendo al usuario el valor de los 2 catetos*/

int main(){

    float lado1, lado2, hipo, prim1, prim2, prim3;

    printf("Dame el primer valor de tu cateto:\n");
    scanf("%f", &lado1);

    printf("Dame el otro valor del cateto\n");
    scanf("%f", &lado2);

    prim1 = lado1 * lado1;
    prim2 = lado2 * lado2;
    prim3 = prim1 + prim2;
    hipo = sqrt(prim3);

    printf("La hipotenusa del triangulo es de: %.2f\n", hipo);

    return 0;
}