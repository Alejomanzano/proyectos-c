#include <stdio.h>

/*Mirar si un numero es negativo o positivo*/

int main(){

    int num;

    do
    {
        printf("Digame un numero x\n");
        scanf("%i", &num);

        if (num <= 0)
        {
        printf("El numero es negativo\n");
        }else{
        printf("El numero es positivo\n");
        }
    
    } while (num != 0);
    

    return 0;
}