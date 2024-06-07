#include <stdio.h>

int main(){
    
   /*  triangulo
    float base, altura, area;

    printf("Vamos a calcular la base y la altura de un triangulo \n");
    printf("Inserte la base\n");
    scanf("%f", &base);
    printf("Inserte la altura\n");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("El area de un triangulo es %.2f", area);
    
    
    return 0;
    */

   float lado, area;

    printf("Vamos a calcular la base y la altura de un cuadrado \n");
    printf("Inserte el lado\n");
    scanf("%f", &lado);

    area= lado * lado;

    printf("El area de un cuadrado es: %.3f\n", area);

    return 0;

}