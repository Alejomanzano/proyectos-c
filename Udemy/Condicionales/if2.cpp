#include <stdio.h>



int main(){

    int a, b, c;


    printf("Digigte el numero A \n");
    scanf("%i", &a);

    printf("Digite el numero B\n");
    scanf("%i", &b);

    c = a+b;

    if (a+b>200)
    {
        printf("El resultado es mayor a 200 y es: %i ", c);
    }if (a+b<200)
    {
        printf("El resultado es menor a 200 y es: %i", c);
    }if (a+b==200)
    {
        printf("El resultado es 200");
    }
    
    
    





    return 0;
}