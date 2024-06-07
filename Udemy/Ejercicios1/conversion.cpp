#include <stdio.h>

/*Vamos a convertir de grados celsius a farhenhade*/

int main(){

    float celcius, resultado, resultadofin;

    printf("Cuantos grados celsius tiene: \n");
    scanf("%f", &celcius);

    resultado =celcius * 1.8;
    resultadofin = resultado + 32;

    printf("Los grados en farhenhade es de: %.2f\n", resultadofin);


    return 0;
}