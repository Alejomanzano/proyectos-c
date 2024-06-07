#include <stdio.h>

int sumar();

int suma = 0,a,b;

int main (){
    printf("Escribe 2 numeros \n");
    scanf("%i %i", &a, &b);

    
    printf("La suma es %i\n", sumar(a,b));
    return 0;
}

int sumar(int n1, int n2){
    int suma =0;
    suma = n1+n2;
    return suma;
    
}