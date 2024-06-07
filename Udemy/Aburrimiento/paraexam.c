#include <stdio.h>
#include <string.h>

void menu();
void editarnombre(char nombres[][100], int total);

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}

void menu(){
    int ingresar;
    char nombres[10][100];

    printf("Cuantos nombres desea ingresar? \n");
    scanf("%d", &ingresar);

    for (int i = 0; i < ingresar; i++)
    {
        printf("Ingresa el nombre: \n");
        scanf("%s", nombres[i]);
    }
    printf("Los nombres ingresados son: \n");

    for (int i = 0; i < ingresar; i++)
    {
        printf("%d %s\n", i, nombres[i]);
    }

    int editar;
    printf("Desea editar un nombre? \n1: Si \n2: No \n");
    scanf("%d", &editar);

    while (editar == 1)
    {
        editarnombre(nombres, ingresar);
        printf("Desea editar otro nombre? \n1: Si \n2: No\n");
        scanf("%d", &editar);
    }

    printf("Los nombres finales son:\n");
    for (int i = 0; i < ingresar; i++)
    {
        printf("%s\n", nombres[i]);
    }
}

void editarnombre(char nombres[][100], int total){
    char nombreactual[100];
    char nombrenuevo[100];
    int encontrado = 0;

    printf("Ingrese el nombre que desea editar: \n");
    scanf("%s", nombreactual);

    for (int i = 0; i < total; i++)
    {
        if (strcmp(nombres[i], nombreactual) == 0)
        {
            printf("Ingrese el nuevo nombre para %s: \n", nombreactual);
            scanf("%s", nombrenuevo);
            strcpy(nombres[i], nombrenuevo);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Nombre no encontrado.\n");
    }
}
