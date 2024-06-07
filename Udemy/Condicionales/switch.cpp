/*Sentencia switch ()

switch (selecciona){

    case 1: opcion; break;
    case 2: opcion; break;
    case 3: opcion; break;
    case 4: opcion; break;
    case 5: opcion; break;
    Default: ninguna de las anteriores, braek;
}*/

#include <stdio.h>

int main(){
    
    int dia;

    printf("Selecciona un numero de los dias de la semana (1 al 7)\n");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1: printf("Selecionaste el lunes");
        break;
    case 2: printf("Selecionaste el martes");
        break;
    case 3: printf("Selecionaste el miercoles");
        break;
    case 4: printf("Selecionaste el jueves");
        break;
    case 5: printf("Selecionaste el viernes");
        break;
    case 6: printf("Selecionaste el sabado");
        break;
    case 7: printf("Selecionaste el Domingo");
        break;            
    default: printf("la opcion no es valida");
        break;
    }

    return 0;
}