#include <stdio.h>

int main(){

    int num, intento = 0;
    int numacertado = 8;

    while (intento < 5){

        printf("Que numero estoy pensando?? del 1 al 10: ");
        scanf("%d", &num);

        if (num == numacertado){
            printf("Acertaste el numero era: %d/n", num);
            return 0;
        } else if (num < numacertado){
            printf("Falta mas papito. /n ");
        } else if (num > numacertado){
            printf("Te pasaste mucho bb. /n ");
        }
        intento++;
    }
    if (intento > 5){
        printf("No acertaste ninguna ya nd papito Quieres intentar de nuevo? Si/No");
        char respuesta;
        scanf(" %c", &respuesta);
        
        if (respuesta == 's'){
            main ();
        }

    }

    return 0;
    
}