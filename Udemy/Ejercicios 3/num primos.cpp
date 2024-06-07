#include <stdio.h>

/*Determinar si el numero es primo*/

int main(){

    int num, i, count=0;

    printf("Que numero quieres ver si es primo\n");
    scanf("%i", &num);

    for ( i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            count++;
        }
        
    }
    if (count >2)
    {
        printf("Tu numoer no es primo\n");
    }else{
        printf("Tu numero es primo\n");
    }
    

    return 0;
}