/*
    Funciones Matematicas:
ceil(x) -> Redondea al entero mayor mas cercano 
fabs(x) -> Devuelve el valor absoluto de x
floor(x) -> Redondea al entero menor mas cercano
sqrt(x) -> Saca la raiz cuadrada de x
fmod(x,y) -> Calcula el resto de la division de x/y
pow(x,y) -> Calcula x elevado a la potencia y 
*/

#include <stdio.h>
//#include <math.h>

int main() {

    funcionMate();
    return 0;
}

void funcionMate(){

    float x,y,cambio=0;

    printf("Escribe dos numeros:\n");
    scanf("%f %f",&x,&y);

    cambio = fmod(x, y); //Redondea al siguiente numero entero 2.1 -> 3
    printf("%.2f",cambio);
}