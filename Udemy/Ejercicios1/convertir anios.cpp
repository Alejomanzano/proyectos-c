/*transformar anios a meses
meses a semanas
semanas a dias
dias a horas

1 anio = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas

Se pedira que digite los anios que pida*/

#include <stdio.h>

int main(){

    int edad, meses, semanas, dias, horas;
    printf("Digita tu edad\n");
    scanf("%i", &edad);

    meses = edad *12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;

    printf("Tu edad en meses %i\n", meses);
    printf("Tu edad en semanas %i\n", semanas);
    printf("Tu edad en dias %i\n", dias);
    printf("Tu edad en horas %i\n", horas);
    
    return 0;
}