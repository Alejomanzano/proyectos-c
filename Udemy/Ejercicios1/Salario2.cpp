#include <stdio.h>

/*Salario de empleados con nombre que se les aumentara un 10% en su sueldo :)*/

int main (){

    float salario, nuevosalario;
    char nombre[50];

    printf("Hola cual es tu nombre?\n");
    scanf("%s", &nombre);

    printf("bienvenido %s\n", nombre);
    printf("Cual es tu salario? \n");
    scanf("%f", &salario);

    nuevosalario = salario + (salario * .1);

    printf("Tu salario %s es: %.2f", nombre, nuevosalario);
    
    return 0;

}