#include <stdio.h>

/* comprobar a traves de un programa si un alumno 
aprobo o no aprobo 
un examen (Aprueba si su nota es mayor a 5.5)*/

int main(){

    float nota;
    
    printf("Cuanto sacaste en tu nota de examen?? \n");
    scanf("%f", &nota);

    if (nota > 10)
    {
        printf("Vuelve a poner la nota ya que debe ser una nota entre (0 a 10)\n");
        scanf ("%f", &nota);
    }
    

    if (nota <5.5)
    {
        printf("Sacaste mala nota porque tienes: %.2f", nota);
    }else if (nota >=10)
    {
        printf("Sacaste buena nota porque sacaste: %2.f", nota);
    }
     
    
    

    return 0;
}