#include <stdio.h>

float calcular_intereses(float saldo_anterior, float tasa_interes) {
    return saldo_anterior * tasa_interes;
}

int main() {
    float monto_mensual, tasa_interes, impuesto_renta;
    int total_meses;

    
    printf("Ingrese el monto mensual depositado: \n");
    scanf("%f", &monto_mensual);
    

    printf("Ingrese el total de meses: \n");
    scanf("%d", &total_meses);

    printf("Ingrese la tasa de interés (porcentaje anual): ");
    scanf("%f", &tasa_interes);

    tasa_interes /= total_meses; 

    printf("Ingrese la tasa de impuesto sobre la renta (porcentaje): ");
    scanf("%f", &impuesto_renta);
    impuesto_renta /= 100; 

    float ahorro_total = 0; 
    float impuesto_renta_total = 0; 

    printf("\nMes\tMonto Mensual\tIntereses\tAhorro (sin intereses)\tAhorro Total (con intereses)\n");

    for (int mes = 1; mes <= total_meses; mes++) {
        
        float intereses = calcular_intereses(ahorro_total, tasa_interes);

       
        float ahorro_sin_intereses = monto_mensual * mes;

       
        ahorro_total = ahorro_sin_intereses + intereses;

      
        if (mes == total_meses) {
            impuesto_renta_total = ahorro_total * impuesto_renta;
        }

       
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", mes, monto_mensual, intereses, ahorro_sin_intereses, ahorro_total);
    }

    printf("\nAl final del mes %d, el ahorro total acumulado con intereses sería de: %.2f\n", total_meses, ahorro_total);
    printf("Al final del mes %d, el impuesto sobre la renta total sería de: %.2f\n", total_meses, impuesto_renta_total);

    return 0;
}