#include <stdio.h>

/*par o impar*/

int main(){

    int num, num2, resultado, resultadofin;

    printf("Vamos a +, -, /, *, Dame 2 numeros\n");
    scanf("%i %i", &num, &num2);

    if (num < num2)
    {
        resultado = num + num2;
        printf(" %i " " + " " %i " " = " "%i\n" , num2, num, resultado);
        
        resultado = num - num2;
        printf(" %i " " - " " %i " " = " "%i\n" , num2, num, resultado);
        
        resultado = num / num2;
        printf(" %i " " / " " %i " " = " "%i\n" , num2, num, resultado);
        
        resultado = num * num2;
        printf(" %i " " * " " %i " " = " "%i\n" , num2, num, resultado);
        printf("Y el numero mas alto es: %i\n", num2);

        resultadofin = resultado % 2;

        if (resultadofin == 0)
        {
            printf("El resultado es par\n");
        }else{
            printf("El resultado es impar\n");
        }
        

        

    }else{
        resultado = num + num2;
        printf(" %i " " + " " %i " " = " "%i\n" , num, num2, resultado);
        
        resultado = num - num2;
        printf(" %i " " - " " %i " " = " "%i\n" , num, num2, resultado);
        
        resultado = num / num2;
        printf(" %i " " / " " %i " " = " "%i\n" , num, num2, resultado);
        
        resultado = num * num2;
        printf(" %i " " * " " %i " " = " "%i\n" , num, num2, resultado);
        printf("Y el numero mas alto es: %i\n", num);

        resultadofin = resultado % 2;

        if (resultadofin == 0)
        {
            printf("El resultado es par\n");
        }else{
            printf("El resultado es impar\n");
        }
        
    }
    


    return 0;
}