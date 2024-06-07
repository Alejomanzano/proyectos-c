#include <stdio.h>


int main(){

    int num, i;

    printf("Escribe un numero \n");
    scanf("%i",&num);

    for (int i = 0; i < 50; i++)
    {
        if (i == num)
        {
            break;;
        }
        printf("%i\n", i);
        
    }
    


    return 0;
}