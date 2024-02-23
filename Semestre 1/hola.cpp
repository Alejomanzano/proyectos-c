#include <stdio.h>
/* Voy hacer que el que este leyendo esto sepa cual es mi edad 
Ojala me salga este algoritmo jiji
Va a ser un lenguaje que el usuario tendra infinitamente */
int main(){
    int edad =0;
    int edadcierta = 18;

    while (1){
        printf("Haber ahora si mi pana cual es mi edad?: ");
        scanf("%d", &edad);

        if (edad == edadcierta){
            printf("Bienn esa es mi edad que buen pana. \n");
            break;
        }else if (edad < edadcierta){
            printf("Uuuu es mas arriba papa. \n");
        }else if (edad > edadcierta){
            printf("Uuuu ya te pasaste mas abajo. \n");
        }
        

    }
    return 0;
}