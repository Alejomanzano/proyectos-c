#include <stdio.h>

/* Calcular el mayor de dos numeros leidos del teclado y 
visualizarlo en pantalla*/

int main(){

    float num, num2, resultado;

    printf("Vamos a +, -, /, *, Dame 2 numeros\n");
    scanf("%f %f", &num, &num2);

    if (num < num2)
    {
        resultado = num + num2;
        printf(" %.2f " " + " " %.2f " " = " "%.2f\n" , num2, num, resultado);
        
        resultado = num - num2;
        printf(" %.2f " " - " " %.2f " " = " "%.2f\n" , num2, num, resultado);
        
        resultado = num / num2;
        printf(" %.2f " " / " " %.2f " " = " "%.2f\n" , num2, num, resultado);
        
        resultado = num * num2;
        printf(" %.2f " " * " " %.2f " " = " "%.2f\n" , num2, num, resultado);
        printf("Y el numero mas alto es: %.2f\n", num2);
    }else{
        resultado = num + num2;
        printf(" %.2f " " + " " %.2f " " = " "%.2f\n" , num, num2, resultado);
        
        resultado = num - num2;
        printf(" %.2f " " - " " %.2f " " = " "%.2f\n" , num, num2, resultado);
        
        resultado = num / num2;
        printf(" %.2f " " / " " %.2f " " = " "%.2f\n" , num, num2, resultado);
        
        resultado = num * num2;
        printf(" %.2f " " * " " %.2f " " = " "%.2f\n" , num, num2, resultado);
        printf("Y el numero mas alto es: %.2f\n", num);
    }
    

    return 0;
}