#include <stdio.h>

int main() {
    int malo = 0, defectuoso = 0, bueno = 0, calidad = 0;
    int i = 0, cont = 0;
    float preciolote = 0;
    float porcentajemalo, porcentajebueno, porcentajedefectuoso = 0;

   

    while (i == 0) {
        printf("Digite un numero dependiendo la calidad del producto\n");
        printf("Digite 0 si es malo\n");
        printf("Digite 1 si es defectuoso\n");
        printf("Digite 2 si es bueno\n");
        scanf("%i", &calidad);
        while (calidad<0 || calidad>2)
        {
            printf("Digito un numero erroneo vuelva a ingresar\n");
        printf("Digite 0 si es malo\n");
        printf("Digite 1 si es defectuoso\n");
        printf("Digite 2 si es bueno\n");
        scanf("%i", &calidad);
        }
       

        cont = cont + 1;

        if (calidad == 0) {
            malo = malo + 1;
        } else if (calidad == 1) {
            defectuoso = defectuoso + 1;
        } else if (calidad == 2) {
            bueno = bueno + 1;
        }

        printf("Si desea ingresar otro producto, digite 0; si desea terminarlo, digite otro numero\n");
        scanf("%i", &i);
    }

    porcentajedefectuoso = ((float)defectuoso / cont) * 100;
    porcentajebueno = ((float)bueno / cont) * 100;
    porcentajemalo = ((float)malo / cont) * 100;

    printf("Ingrese el precio final del lote\n");
    scanf("%f", &preciolote);
    while (preciolote<0)
    {
    printf("Ingreso un precio negativo vuelva a ingresar");
    scanf("%f", &preciolote);
    }
    

    if (porcentajemalo > 15) {
        printf("El lote no se compra\n");
    } else {
        if (porcentajedefectuoso < 10) {
            printf("El lote se compra a un 70 porciento del precio original\n");
            preciolote = preciolote * 0.7;
            printf("El precio seria %.2f\n", preciolote);
        } else {
            if (porcentajebueno >= 70) {
                printf("El lote se compra al precio original\n");
                printf("El precio seria %.2f\n", preciolote);
            } else {
                printf("Se compra el lote con valor del 60 porciento del precio original\n");
                preciolote = preciolote * 0.6;
                printf("El precio seria %.2f\n", preciolote);
            }
        }
    }
printf("Elabora por Ing.Pedro Velastegui y Ing.Alejandro Manzano");
    return 0;
}