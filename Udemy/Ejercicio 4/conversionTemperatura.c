#include <stdio.h>

double Kelvin(float n1);
double Fahrenheit(float n1);
float celsius;
int opc;


int main() {

    do
    {
    printf("Este programa Convierte Grados Celsius a Fahrenheit y a Kelvin\n");
    printf("Dame el Valor de los grados Celsius\n");
    scanf("%f",&celsius);

    printf("Que deseas hacer?\n1) Conversion a Kelvin\n2) Conversion a Fahrenheit\n3) Salir\n");
    scanf("%d",&opc);

    switch (opc){

    case 1: Kelvin(celsius);
        printf("El valor es: %.2f K\n",Kelvin(celsius));
        break;

    case 2: Fahrenheit(celsius);
        printf("El valor es: %.2f F\n",Fahrenheit(celsius));
        break;

    default: 
        break;
    }}while (opc!=3);
    return 0;
}



double Kelvin(float n1){
    float resultado = 0;
    resultado = n1 + 273.15;

    return resultado;
}

double Fahrenheit(float n1){
    float resultado = 0;
    resultado = (n1*9)/5 + 32;
    return resultado;

}
