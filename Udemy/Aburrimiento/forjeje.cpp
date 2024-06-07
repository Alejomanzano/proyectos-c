#include <stdio.h>

int main(){

    int x, i, multi;

    printf("digite x\n");
    scanf("%i", &x);

    for ( i = 1; i <= 10; i++)
    {
        multi = i * x;
        printf(" %i " " * " " %i " " = " "%i\n", x, i, multi);
        if (multi%2 == 0)
        {
            printf("Par %i\n ", multi);
        }else {
            printf("Impar %i\n", multi);
        }
    }
    
    


    return 0;
}