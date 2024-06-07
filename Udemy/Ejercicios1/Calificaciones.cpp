#include <stdio.h>

/*Un alumno desea saber cual sera su calificacion final en la
materia de Algoritmos
Dicha calificaciones se comprone de los siguientes porcentajes

55% del promedio de sus 3 calificaciones parciales.
30% de la calificacion del examen final
15% de la calificacion de un trabajo final*/
int main(){

    int calificacion1, calificacion2, calificacion3, resultado1;
    int examenfinal, resultado2;
    int trabajofin, resultado3;
    float resultadofin;

    printf("Dame las calificaciones de tus 3 parciales\n");
    printf("Primer parcial aqui:\n");
    scanf("%i", &calificacion1);

    printf("Segundo parcial aqui: \n");
    scanf("%i", &calificacion2);

    printf("Tercer parcial aqui:\n ");
    scanf("%i", &calificacion3);

    resultado1 = ((calificacion1 + calificacion2 + calificacion3)/3)*.55;
    
    printf("Ahora vamos a calcular tu calificacion del examen final\n");
    printf("Cual es la calificacion de tu examen final?\n");
    scanf("%i", &examenfinal);

    resultado2 = examenfinal *.3;

    printf("Ahora vamos a calcular tu calificacion del trabajo final\n");
    printf("Cual es la nota de tu trabajo final?\n");
    scanf("%i", &trabajofin);

    resultado3 = trabajofin *.15;

    resultadofin = resultado1 + resultado2 + resultado3;

    printf("Tus notas serian:\n");
    printf("Calificacion de tus parciales: %i\n", resultado1);
    printf("Calificacion de tu examen final: %i\n", resultado2);
    printf("Calificacion de tu trabajo final: %i\n", resultado3);
    printf("La calificacion final de todo sumando si pasas o no es:%.2f\n", resultadofin);

    return 0;
}