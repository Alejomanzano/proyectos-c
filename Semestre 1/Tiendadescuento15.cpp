#include <stdio.h>
int main ()
{

    float sal;
    float pres;
    float salnuevo;

    scanf("%f", &sal);
    scanf ("%f", &pres);
    scanf ("%f", &salnuevo);

    pres = sal * 0.25;
    salnuevo = pres + sal;

    printf("Su nuevo salario es: % .2f", salnuevo);
}