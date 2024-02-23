#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int maxProduccionLeche(int numVacas, int pesoLimite, int pesos[], int produccionLeche[]) {
    int dp[numVacas + 1][pesoLimite + 1];

    
    for (int i = 0; i <= numVacas; i++) {
        for (int w = 0; w <= pesoLimite; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (pesos[i - 1] <= w) {
                dp[i][w] = max(produccionLeche[i - 1] + dp[i - 1][w - pesos[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

  
    return dp[numVacas][pesoLimite];
}

int main() {
    int numVacas, pesoLimite;

    
    printf("Ingrese el número total de vacas: ");
    scanf("%d", &numVacas);

    printf("Ingrese el peso total que el camión puede llevar: ");
    scanf("%d", &pesoLimite);

    int pesos[numVacas];
    int produccionLeche[numVacas];

    printf("Ingrese los pesos de las vacas:\n");
    for (int i = 0; i < numVacas; i++) {
        scanf("%d", &pesos[i]);
    }

    printf("Ingrese la producción de leche en litros por día:\n");
    for (int i = 0; i < numVacas; i++) {
        scanf("%d", &produccionLeche[i]);
    }

    
    int resultado = maxProduccionLeche(numVacas, pesoLimite, pesos, produccionLeche);
    printf("La cantidad máxima de producción de leche es: %d litros\n", resultado);

    return 0;
}
