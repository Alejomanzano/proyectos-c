#include <stdio.h>

/*Calcule el factorial de un numero dado por el usuario
 5 != 5 * 4 * 3 * 2 * 1
 4 != 4 * 3 * 2 * 1
 3 != 3 * 2 * 1 
 2 != 2 * 1 
 1!= 1 */

int main (){

    int numero, factorial=1;

    printf("Escribe el numero para el factorial\n");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; ++i)
    {
        factorial *= i;
        
    }
    printf("%d", factorial);
    

    return 0;
}