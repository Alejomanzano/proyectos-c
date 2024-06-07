#include <stdio.h>

int main(){

    int i, num;

    printf("Escooge un num\n");
    scanf("%i", &num);

    for (int i = 0; i < 50; i++)
    {
        if (i == num)
        {
            continue;;
            
        }
        printf("%i\n", i);
        
        
    }
    


    return 0;
}