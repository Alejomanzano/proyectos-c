#include <stdio.h>
#include <math.h>

int main (){

    int x, y;

    printf("Cual numero te gustaria saber para el multiplo de 2?? \n");
    scanf("%i", &x);
    for (int i = 2; i <= 10; i++)
    {
        
        y=x*i;
    
        printf("%i\n", y);
    }
    

    return 0;
}