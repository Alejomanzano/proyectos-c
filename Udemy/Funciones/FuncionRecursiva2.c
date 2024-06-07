
/*Recursova Capacidad de llamarse a si misma

Ejemplo de factorial de un numero
5! = 5*4*3*2*1 o 5*4! = 120
4! = 4*3*2*1 o 4*2 = 24
3! = 3*2*1 o 3*2 = 6
2! = 2*1 o 2*1 = 2 
1! = 1 
0! = 1
*/


#include <stdio.h>

long factorial(long num);


int main(int argc, char const *argv[])
{
    int num;
    printf("Escribe un numero para factorial \n");
    scanf("%i", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%li\n", factorial(i));
    }
    

    return 0;
}

long factorial(long num){
    if (num <=1){
        return 1;
    }else{
        return (num*factorial(num-1));
    }
}