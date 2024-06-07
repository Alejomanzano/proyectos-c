/*Ver si un alumno va a pasar el anio o no
un alumno solo tiene derecho a reprobar 3 materias para poder pasar de anio
si reprueba 4 materias no puede pasar de anio y reprueba*/

#include <stdio.h>

int main(){

    int a, b, c, d, resultado;

    printf("Cuales son las notas de tus 4 materias?\n");
    scanf("%i %i %i %i", &a, &b, &c, &d);

    if (a<=6)
    {
        printf("Reprobaste esta materia ya que tienes: %i\n", a);
    }else{
        printf("Aprobaste esta materia ya que tienes %i\n", a);
    }
    if (b<=6)
    {
        printf("Reprobaste esta materia ya que tienes: %i\n", b);
    }else {
        printf("Aprobaste esta materia ya que tienes %i\n", b);
    }
    if (c<=6)
    {
        printf("Reprobaste esta materia ya que tienes: %i\n", c);
    }else{
        printf("Aprobaste esta materia ya que tienes %i\n", c);
    }
    if (d<=6)
    {
        printf("Reprobaste esta materia ya que tienes: %i\n", d);
    }else {
        printf("Aprobaste esta materia ya que tienes %i\n", d);
    }
    
    resultado = a + b + c + d;

    if (resultado<24)
    {
        printf("No pasa el anio");
    }else{
        printf("Pasa el anio ");
    }
    
    
    
    





    
    return 0;

}