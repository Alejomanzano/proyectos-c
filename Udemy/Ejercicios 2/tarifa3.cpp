/*Calcular tarifas de saldo en celulares
    y poner precios
    De 1000 a 1500 premium
    De 500 a 999 intermedio
    De 100 a 499 Basica*/

#include <stdio.h>

int main(){

    int tarifa;

    printf("Cuanto es la tarifa que piensa poner??\n");
    scanf("%i", &tarifa);

    if (tarifa >=1000 && tarifa <=1500)
    {
        printf("Su tarifa es premium");
    }else if (tarifa >= 500 && tarifa <= 999)
    {
        printf("Su tarifa es intermedio");
    }else if (tarifa >= 100 && tarifa <=499)
    {
        printf("Su tarifa es Basica");
    }else{
        printf("No hay esas tarifas");
    }
    
    
    

    return 0;
}