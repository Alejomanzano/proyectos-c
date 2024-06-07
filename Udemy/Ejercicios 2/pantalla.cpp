#include <stdio.h>
#include <stdlib.h>
    /*Hacer un programa que botte la pantalla*/


int main(){

    int num;

    printf("Pulsa 1 para borrar la pantalla \n");
    scanf("%i", &num);

    if (num == 1)
    {
        system("cls");
        printf("Se borro toda la pantalla\n");
    } if (num ==2)
    {
        system("dls");
        printf("Aparece todo su dls")
    }
     
    else{
        printf("No se borro la pantalla porque no pusiste 1 pon 1\n");
        scanf("%i", &num);
        if (num == 1)
        {
            printf("Se borro toda la pantalla")
        }
        
    }
    


    return 0;
}