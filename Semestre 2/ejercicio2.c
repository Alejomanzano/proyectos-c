#include <stdio.h>

// Define una estructura para almacenar los datos financieros de un mes
typedef struct {
    int mes;
    int serviciosBasicos;
    int alquiler;
    int sueldos;
    int gastosLogistica;
    int gastosMarketing;
    int totalGastos;
    int saldoAnterior;
    int ventas;
    int inversiones;
    int totalIngresos;
    int saldoContable;
} DatosFinancieros;

// Define un array de estructuras DatosFinancieros, una para cada mes
DatosFinancieros datosFinancieros[3] = {
    {1, 100, 500, 3600, 100, 500, 4800, 0, 6000, 400, 6400, 1600},
    {2, 120, 500, 3600, 2000, 1500, 7720, 1600, 7000, 200, 8800, 1080},
    {3, 120, 500, 3600, 2000, 1500, 7720, 1080, 3000, 100, 4180, -3540}
};

// Función para obtener los datos financieros de un mes dado
DatosFinancieros obtenerDatosFinancieros(int mes) {
    // TODO: Agregar comprobación de errores para asegurar que el mes esté dentro del rango
    return datosFinancieros[mes - 1];
}

int main() {
    int mes;
    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    DatosFinancieros datos = obtenerDatosFinancieros(mes);

    printf("Datos financieros para el mes %d:\n", mes);
    printf("Servicios Básicos: %d\n", datos.serviciosBasicos);
    printf("Alquiler: %d\n", datos.alquiler);
    printf("Sueldos: %d\n", datos.sueldos);
    printf("Gastos Logística: %d\n", datos.gastosLogistica);
    printf("Gastos Marketing: %d\n", datos.gastosMarketing);
    printf("Total Gastos: %d\n", datos.totalGastos);
    printf("Saldo Mes Anterior: %d\n", datos.saldoAnterior);
    printf("Ventas: %d\n", datos.ventas);
    printf("Inversiones: %d\n", datos.inversiones);
    printf("Total Ingresos: %d\n", datos.totalIngresos);
    printf("Saldo Contable: %d\n", datos.saldoContable);

    return 0;
}