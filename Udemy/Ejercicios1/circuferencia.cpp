#include <stdio.h>

/*Hacer un programa que calcule
longitudes de una circuferencia*/

int main(){

    float diametro, longitud;

    printf("Dame el diametro de tu circuferencia\n");
    scanf("%f", &diametro);

    longitud = (diametro * 3.14)*2;

    printf("La longitud de su circuferencia es de: %.2f", longitud);
    return 0;
}