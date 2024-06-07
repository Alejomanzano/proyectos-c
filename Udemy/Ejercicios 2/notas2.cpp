#include <stdio.h>

/*Dada una nota de un examen mediante un codigo escribir
el literal que le corresponda a la nota

A = Excelente
B = Notable
C = Aprobado
D y F = Reprobado*/

int main(){

    float nota;

    printf("Cuanto sacaste tu nota??\n");
    scanf("%f", &nota);

    if (nota == 10)
    {
        printf("Tu nota es una A Excelente");

    }else if (nota == 9 || nota == 8)
    {
        printf("Tu nota es de B notable");
    }else if (nota == 7 || nota == 6)
    {
        printf("Tu nota es de C aprobado");
    }else if (nota == 5 )
    {
        printf("Tu nota es de D Reprobado");
    }else if (nota < 5)
    {
        printf("Tu nota es de F reprobado");
    }
    
    
    return 0;
}