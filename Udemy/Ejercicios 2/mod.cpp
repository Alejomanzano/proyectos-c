#include <stdio.h>

/* resultado mod*/

int main(){

    int num, num2, resultado, resultadofin;

    printf("Dame2 numeros para sumar\n");
    scanf("%i %i", &num, &num2);

    resultado = num + num2;      

    resultadofin = resultado % 2;

    printf("%i", resultadofin);
    

    

    return 0;
}