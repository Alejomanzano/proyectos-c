#include <stdio.h>

    /*Calcular tarifas de saldo en celulares
    y poner precios
    De 1000 a 1500 premium
    De 500 a 999 intermedio
    De 100 a 499 Basica*/

int main(){

    int num;
    
    printf("Con cual tarifa le gustaria usar 1(premium) 2(intermedio) 3(Basica) ?\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1: printf("El benificio que le da es de 1000 a 1500 megas");
        break;
    case 2: printf("El beneficio que le da es de 500 a 999 megas");
        break;
    case 3: printf("El benificio que le da es de 499 megas");
        break;
    default: printf("No tenemos mas ni menos");
        break;
    }

    

    return 0;
}