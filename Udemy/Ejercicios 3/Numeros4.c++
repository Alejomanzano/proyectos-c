#include <stdio.h>

//Escribir los ultiplos de 1 hasta el 100

int main (){

    int num, i=1;
    int num2;

    printf("Escribe el numero para ver sus multiplos \n");
    scanf("%d", &num);
    printf("Hasta que numero quieres? \n");
    scanf("%d", &num2);

   /* while (i <= 100)
    {
        if (i % num == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }*/
    
    for (int j = 0; j <= num2; ++j)
    {
        if (j% num == 0)
        {
            printf("%d\n", j);
        }
        
    }
    
    

    return 0;
}