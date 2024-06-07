#include <stdio.h>

int main(){

    float num1, num2, suma, restas, multiplicacion, division;
    

    printf("Escribe 2 numeros \n");
    scanf("%f %f", &num1,&num2);
    
    
    suma= num1 + num2;
    restas= num1 - num2;
    multiplicacion= num1 * num2;
    division= num1 / num2;

    printf("Los 2 numeros sumando dan un resultado de %3f \n", suma);
    printf("Los 2 numeros restando dan un resultado de: %.3f\n", restas);
    printf("Los 2 numeros multiplicando dan un resultado de: %.3f \n", multiplicacion);
    printf("Los 2 numeros dividiendo dan un resultado de: %.3f\n", division);


    printf("Echo por ing Alejandro Manzano");
    return 0;

}