#include <stdio.h>

void calculate_savings(float monthly_savings, float annual_interest_rate, int num_months, float *total_savings, float *total_interest, float *accumulated_amount) {
    
    float monthly_interest_rate = annual_interest_rate / 1200;
    *total_savings = 0;
    *total_interest = 0;

    for (int i = 0; i < num_months; i++) {
        *total_savings += monthly_savings;
        *total_interest += *total_savings * monthly_interest_rate;
        *accumulated_amount = *total_savings + *total_interest;

        printf("%d. %.2f %.2f %.2f\n", i + 1, *total_savings, *total_interest, *accumulated_amount);
    }
}

int main() {
    float monthly_savings, annual_interest_rate, total_savings, total_interest, accumulated_amount;
    int num_months;

    printf("Ingrese el monto mensual a ahorrar: \n");
    scanf("%f", &monthly_savings);

    printf("Ingrese la tasa de interes anual: \n");
    scanf("%f", &annual_interest_rate);

    printf("Ingrese el numero de meses: \n");
    scanf("%d", &num_months);

    calculate_savings(monthly_savings, annual_interest_rate, num_months, &total_savings, &total_interest, &accumulated_amount);

    printf("El monto ahorrado es: %.2f\n", total_savings);
    printf("El total de intereses es: %.2f\n", total_interest);
    printf("El monto acumulado es: %.2f\n", accumulated_amount);

    return 0;
}