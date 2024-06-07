#include <stdio.h>

/*Calcular el nuevo salario de un obrero 
si obtuvo un incremento del 25% sobre su salario anterior.*/

int main(){

    float salario, salariototal, descuento;

    printf("Hola obrero cual es su salario? \n");
    scanf("%f", &salario);

    descuento = salario * .25;
    salariototal= salario + descuento;

    printf("Su nuevo salario es de: %.2f", salariototal);


    return 0;
}