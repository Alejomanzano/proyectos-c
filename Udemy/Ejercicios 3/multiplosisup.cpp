#include <stdio.h>

/*Digite un numero, si el numero supera a 10,
multiplique los 1 primeros numeros
sino, sumelos*/

int main (){

    int num, i=1, suma = 0, multi =1;

    printf("Digite un numero: \n");
    scanf("%d", &num);

    if (num > 10)
    {
        while (i <= 10)
        {
            multi *= i;
            i++;
        }
        printf("La multi es: %i", multi);
        
    }else {
        while (i <= 10)
        {
            suma += i;
            i++;
        }
        printf("La suma es: %i", suma);
    }
    



    return 0;
}