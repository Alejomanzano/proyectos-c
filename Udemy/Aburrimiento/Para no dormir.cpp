#include <stdio.h>

int main(){

    int num, salir=0, saldo = 0, descuento, descuentotot, salir2=1;

    do
    {
        saldo = 0;
        while (salir2 == 1)
        {
            
            printf("Digite el numero de sus compras\n");
            scanf("%i", &num);

            saldo += num;

            printf("Si ya dijito todo pulse 1 \n");
            scanf("%d", &salir2);
        } 
        
        
        descuento = saldo * 0.20;
        descuentotot = saldo - descuento;

        printf("Su valor con el descuento del 20%% es de: %i\n", descuentotot);

        printf("Si desea salir dijite 0 sino no\n");
        scanf("%d", salir);
    } while (salir != 1);
    

    return 0;
}