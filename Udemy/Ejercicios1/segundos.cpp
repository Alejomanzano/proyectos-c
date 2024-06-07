#include <stdio.h>

/*Calcular la cantidad de segundos que estan incluidos en el numero de horas
minutos y segundos ingresados por el ususario
hora= 60minutos
minuto= 60 segundos*/

int main(){

    int usuario, hora, resultado, resultadofin;
    int minutos = 60;
    int segundos = 60;
    printf("Cuantas horas quieres calcular?\n");
    scanf("%i", &usuario);  

    resultado = usuario * minutos;
    resultadofin = resultado * segundos;

    printf("La hora que puso es:%i\n", usuario);
    printf("En minutos es: %i\n", resultado);
    printf("En segundos es: %i\n", resultadofin);

    

    
    return 0;
}