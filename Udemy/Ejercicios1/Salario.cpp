#include <stdio.h>

/*Dadas las horas trabajadas de una persona y el valor por hora
Calcular su salario e imprimirlo*/
int main (){

    char persona[40];
    int salario, resultado;
    int hora = 10;

    printf("Hola trabajador como te llamas?\n");
    scanf("%s", &persona);

    printf("Hola%s,Cuanto es tu salario?\n", persona);
    scanf("%i", &salario);

    resultado = salario * hora;

    printf("Entonces %s,Tu salario es de: %i\n", persona, resultado);


    return 0;
}