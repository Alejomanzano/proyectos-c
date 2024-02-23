#include <stdio.h>

int main() {
  int ed, inten = 0;
  int ed_matusalen = 969;

  while (inten < 3) {
    printf("Adivine la edad de Matusalen: ");
    scanf("%d", &ed);

    if (ed == ed_matusalen) {
      printf("Acertaste! La edad de Matusalen es %d\n", ed);
      return 0;
    } else if (ed < ed_matusalen) {
      printf("La edad es menor a la correcta\n");
    } else {
      printf("La edad es mayor a la correcta\n");
    }

    inten++;
  }

  if (inten == 3) {
    printf("No has acertado en 3 intentos. Intentalo nuevamente? (si/no): ");
    char respuesta;
    scanf(" %c", &respuesta);

    if (respuesta == 's') {
      main();
    }
  }

  return 0;
}
