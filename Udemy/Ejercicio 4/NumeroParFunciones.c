//Determinar si un numero es Par usando Funciones

#include <stdio.h>

int Par();

int main() {

    int nw,x;
    printf("Escribe un numero\n");
    scanf("%i",&nw);

    x = Par(nw);

    if (x==0)
    {
        printf("El numero es Par\n");
    }else
    {
        printf("El numero es Impar\n");
    }
    
    return 0;
}

int Par(int n2){

    if (n2%2==0)
    {
        return 0;
    }else
    {
        return 1;
    }
    
    return Par;
}