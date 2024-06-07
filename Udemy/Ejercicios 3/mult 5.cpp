#include <stdio.h>

/*Poner todos los multiplocs de 5 de 1 hasta n*/

int main(){

    int num, i;

    int num1, multi, cont;

    printf("Dijite el nuermo para saber si es multiplo de 5 \n");
    scanf("%i", &num1);

    cont = 1;
    
    while (cont <= num1)
    {
        if (cont%5 == 0)
        {
            printf("Ese numero %i es multiplo de 5 \n", num1);
        }else {
            printf("No es multiplode 5 \n");
        }
        cont++;
    }
    
    


    return 0;
}