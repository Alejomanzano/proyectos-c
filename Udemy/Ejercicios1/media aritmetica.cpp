#include <stdio.h>

    /*Calcule la media aritmetica de 3 numeros de cualquier dados por el usuario*/

int main(){

    float num1, num2, num3, resultado;
    
    printf("Dame 3 numeros para la media aritmetica\n");
    scanf("%f", &num1);
    scanf("%f", &num2); 
    scanf("%f", &num3);

    resultado = (num1 + num2 + num3)/3;

    printf("Su numero medio aritmetica es de: %.2f", resultado);

    return 0;
}