#include <stdio.h>

int main (){

    int i = 1, sumafinal = 0, sumapar = 0, sumaimpar = 0, num1, numeroparnega;

    printf("Digite hasta que numero quiere \n");
    scanf("%d", &num1);

    while (i <= num1)
    {
        if (i %2 == 0)
        {
            numeroparnega = i * -1;
            sumapar += numeroparnega;  
        }else{
            sumaimpar += i;
        }
        i++;
    }
    sumafinal = sumaimpar + sumapar;
    
    printf("La suma de los numeros pares es: %d \n", sumapar);
    printf("La suma de los numerps impares es: %d\n", sumaimpar);
    printf("La suma total es: %d\n", sumafinal);
    
    return 0;
}