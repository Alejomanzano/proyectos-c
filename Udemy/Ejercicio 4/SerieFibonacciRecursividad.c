//Recursividad con Fibonacci

//1,1,3,2,5,8...

#include <stdio.h>

int Fibonacci(int n);

int main() {

    int numero;

    printf("Escribe el numero de elementos\n");
    scanf("%i",&numero);

    for (int i = 1; i <=numero ; i++)
    {
        printf("%i, ",Fibonacci(i));
    }
    return 0;
}
/*
    1,1,2,3,5,8...
    Fibonacci(1) = 1
    Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2);
*/

int Fibonacci(int n){

    if (n==0 || n==1)
    {
        return n;
    }else
    {
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}