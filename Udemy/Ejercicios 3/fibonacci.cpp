#include <stdio.h>

//0 1 1 2 3 5 8 13

int main (){

    int num;
    int x= 0, y=1, z=1;

    printf("Escribe el numero de los elementos\n");
    scanf("%d", &num);

    printf(" 0 1");
    
    for (int i = 1; i < num; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf(" %d ", z);
    }
    

    return 0;
}