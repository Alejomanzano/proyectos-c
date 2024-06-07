#include <stdio.h>

/*Dada una nota de un examen mediante un codigo escribir
el literal que le corresponda a la nota

A = Excelente
B = Notable
C = Aprobado
D y F = Reprobado*/

int main(){

    char letra;

    printf("Cuanto es tu nota?\n");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'A')
    {
        printf("Excelente aprobo");
    } else if (letra == 'b' || letra == 'B')
    {
        printf("Notable");
    } else if (letra == 'c' || letra == 'C')
    {
        printf("Aprobado");
    } else if (letra == 'd' || letra == 'D')
    {
        printf("Reprobado");
    }else if (letra == 'f' || letra == 'F')
    {
        printf("Reprobado");
    }
    
    
    
    
    

    return 0;
}