#include <stdio.h>

int main(){
    char e[40];

    printf("Escribe el valor de la variable (char)\n");
    gets(e);

    printf("Bienvenido: %s",e);
    return 0;
}