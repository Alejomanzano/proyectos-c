#include <stdio.h>

int main(){

    int altura, basemenor, basemayor, area, resultado;

    printf("Vamos a calcular el area de un trapecio\n");
    printf("Dame la base menor de tu trapecio\n");
    scanf("%i", &basemenor);

    printf("Dame la base mayor de tu trapecio (la parte de abajo)\n");
    scanf("%i", &basemayor);

    printf("Dame la altura de tu trapecio\n");
    scanf("%i",&altura);

    area = (basemenor + basemayor)*altura;
    resultado= area /2;

    printf("El area de su trapecio es:%i", resultado);
    


    return 0;
}