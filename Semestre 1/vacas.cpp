#include <stdio.h>

int main() {
 int n;
 double peso_maximo;
 double pesos[n];
 double producciones[n];

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
 int vacas_seleccionadas[n];
 for (int i = 0; i < n; i++) {
   vacas_seleccionadas[i] = -1;
 }

 double produccion_maxima = 0.0;

 for (int i = 0; i < (1 << n); i++) {
   double peso_total = 0.0;
   for (int j = 0; j < n; j++) {
     if (((i >> j) & 1) == 1) {
       peso_total += pesos[j];
     }
   }

   if (peso_total <= peso_maximo) {
     double produccion_total = 0.0;
     for (int j = 0; j < n; j++) {
       if (((i >> j) & 1) == 1) {
         produccion_total += producciones[j];
       }
     }

     if (produccion_total > produccion_maxima) {
       produccion_maxima = produccion_total;
       int vacas_temporales[n];
       for (int j = 0; j < n; j++) {
         vacas_temporales[j] = vacas_seleccionadas[j];
       }
       for (int j = 0; j < n; j++) {
         if (((i >> j) & 1) == 1) {
           vacas_seleccionadas[j] = j;
         }
       }
       for (int j = 0; j < n; j++) {
         vacas_seleccionadas[j] = vacas_temporales[j];
       }
     }
   }
 }
 printf("La cantidad máxima de producción de leche es: %.2lf litros", produccion_maxima);
 return 0;
}