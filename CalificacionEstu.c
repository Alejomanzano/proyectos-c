/*Un estudiante desea saber cuál será su calificación final en la materia de programación. 
Dicha calificación se compone de los siguientes porcentajes:
 a. 55% del promedio de sus tres notas parciales
 b. 30% de la calificación del examen final 
 c. 15% de la calificación de un trabajo final. */

#include <stdio.h>

int main()
{
    float Nota1, Nota2, Nota3;
    float Promedio, ExamenFinal, ProyectoFinal, NotaFinal;
    scanf("%f", &Nota1);
    scanf("%f", &Nota2);
    scanf("%f", &Nota3);
    scanf("%f", &ExamenFinal );
    scanf("%f", &ProyectoFinal );
    Promedio = (Nota1+Nota2+Nota3)/3;
    NotaFinal= 0.55 * Promedio + 0.3*ExamenFinal+0.15*ProyectoFinal;
    printf("La nota final del estudiante es % .2f", NotaFinal);
    
}
