/*Decirle al alumno algo con base en sus calificaciones 
9-10 = excelente, sigue asi
8-9 = muy bien, puedes mejorar
7-8 = Eres un estudiante regular
0-6.9 = Puedes mejorar*/

#include <stdio.h>

int main(){

    int num1, num2, num3, num4, num5, resultado;

    printf("Dame tus 5 calificaiones: \n");
    scanf("%i %i %i %i %i", &num1, &num2, &num3, &num4, &num5);

    resultado = (num1 + num2 + num3 + num4 + num5)/5;

    if (resultado >=9 && resultado <=10)
    {
        printf("Excelente, sigue asi");
    }else if (resultado >= 8 && resultado <=9)
    {
        printf("Muy bien, puedes mejorar");
    }else if (resultado >= 7 && resultado <= 8)
    {
        printf("Eres un estudiante regular");
    }else if (resultado >= 0 && resultado <= 6.9)
    {
        printf("Puedes mejorar");
    }

    return 0;
}