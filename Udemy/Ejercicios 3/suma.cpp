#include <stdio.h>

/*Determina suma de todos los numeros hasta el numero que el usuario*/
//Susecion geometrica

int main(){

    int num1, cont, sum;

    printf("Digite hasta qye un numero quieres que se haga la suma \n");
    scanf("%i", &num1);

    cont = 1;

    while (cont <= num1)
    {
        sum += cont;
        cont++;
    }

    printf("La suma hasta el numero %i es de %i", num1, sum);
    

    
    return 0;
}