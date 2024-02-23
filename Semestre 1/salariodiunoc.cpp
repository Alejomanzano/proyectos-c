#include <stdio.h>

int main() {
    
    int esDomingo;
    char turno;
    float tarifaDiurna = 5.0;
    float tarifaNocturna = 8.0;
    float horasTrabajadas, valorHoras;

    
    printf("¿Es domingo? (1 para sí, 0 para no): ");
    scanf("%d", &esDomingo);
    printf("Ingrese el turno (D para Diurno, N para Nocturno): ");
    scanf(" %c", &turno);
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);

    
    if (esDomingo == 1) {
        tarifaDiurna += 2.0;
        tarifaNocturna += 3.0;
    }

    
    if (turno == 'D' || turno == 'd') {
        valorHoras = tarifaDiurna * horasTrabajadas;
    } else if (turno == 'N' || turno == 'n') {
        valorHoras = tarifaNocturna * horasTrabajadas;
    } else {
        printf("Turno ingresado no válido.\n");
        return 1; 
    }

    
    printf("El valor por %.2f horas trabajadas es: %.2f dólares\n", horasTrabajadas, valorHoras);

    return 0; 
}
