#include <stdio.h>

int main() {
  // Entradas
  int n;
  double peso_maximo;
  double pesos[n];
  double producciones[n];

  // Leer entradas
  printf("Ingrese el número total de vacas: ");
  scanf("%d", &n);

  printf("Ingrese el peso máximo del camión: ");
  scanf("%lf", &peso_maximo);

  for (int i = 0; i < n; i++) {
    printf("Ingrese el peso de la vaca %d: ", i + 1);
    scanf("%lf", &pesos[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("Ingrese la producción de leche de la vaca %d: ", i + 1);
    scanf("%lf", &producciones[i]);
  }

  // Algoritmo
  // Se crea un vector que almacena las vacas seleccionadas
  int vacas_seleccionadas[n];
  // Se inicializa el vector a -1
  for (int i = 0; i < n; i++) {
    vacas_seleccionadas[i] = -1;
  }

  // Se inicializa la producción máxima de leche
  double produccion_maxima = 0.0;

  // Se recorren todas las combinaciones posibles de vacas
  for (int i = 0; i < (1 << n); i++) {
    // Se calcula el peso total de las vacas seleccionadas
    double peso_total = 0.0;
    for (int j = 0; j < n; j++) {
      if (((i >> j) & 1) == 1) {
        peso_total += pesos[j];
      }
    }

    // Si el peso total no supera el límite del camión
    if (peso_total <= peso_maximo) {
      // Se calcula la producción total de leche de las vacas seleccionadas
      double produccion_total = 0.0;
      for (int j = 0; j < n; j++) {
        if (((i >> j) & 1) == 1) {
          produccion_total += producciones[j];
        }
      }

      // Si la producción total es mayor que la producción máxima
      if (produccion_total > produccion_maxima) {
        // Se actualiza la producción máxima
        produccion_maxima = produccion_total;

        // Se copian las vacas seleccionadas en un vector temporal
        int vacas_temporales[n];
        for (int j = 0; j < n; j++) {
          vacas_temporales[j] = vacas_seleccionadas[j];
        }

        // Se actualiza el vector de vacas seleccionadas
        for (int j = 0; j < n; j++) {
          if (((i >> j) & 1) == 1) {
            vacas_seleccionadas[j] = j;
          }
        }

        // Se copian las vacas seleccionadas del vector temporal al vector original
        for (int j = 0; j < n; j++) {
          vacas_seleccionadas[j] = vacas_temporales[j];
        }
      }
    }
  }

  // Salida
  printf("La cantidad máxima de producción de leche es: %.2lf litros", produccion_maxima);

  return 0;
}
