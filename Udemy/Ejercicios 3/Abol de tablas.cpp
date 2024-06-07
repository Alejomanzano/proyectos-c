#include <stdio.h>

/*Hacer un arbol con '*' del tipo 
Digite el numero de filas : 5
*
**
***
****
*****
*/

int main (){

    int numero; //Declaramos varial 

    printf("Cuantos numeros quiere para hacer el arbol? \n");
    scanf("%d", &numero); //El usuario va a eleguir cuantos quiere

    for (int i = 0; i < numero; ++i)
    {
        printf("\n");
        for (int j = 0; j <= i; ++j)
        {
            printf("*");
        }
        


    }
    




    return 0;
}