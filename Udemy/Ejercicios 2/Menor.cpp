/*Calcular una suma y saber cual es el menor*/

#include <stdio.h>

int main(){

    int num1, num2, resultado;

    printf("Digite 2 numeros\n");
    scanf("%i %i", &num1, &num2);

    

    if (num1 < num2)
    {
        printf("El numero menor es: %i\n", num1);
    }else{
        printf("El numero menor es: %i\n", num2);
    }

    resultado = num1 + num2;
    
    printf("El resultado es: %i", resultado); 

    return 0;
}