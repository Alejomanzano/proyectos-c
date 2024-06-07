#include <stdio.h>
#include "funciones.h"
#include <string.h>

void listarProductos(char productos[][3][40],double precio[],int indice[]){

    printf("Numero\tNombre\t\tCategoria\t\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2lf\n", indice[i], productos[i][0], productos[i][1], productos[i][2],precio[i]);
    }
    
}


void buscarXMarca(char productos[][3][40],double precio[]){
    
    char marca[40];
    int noexiste =1;
    
    printf("Ingresar la marca \n");
    scanf("%s", &marca);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(productos[i][2], marca) == 0)
        {
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2],precio[i]);
            noexiste =0;
        }
        if (noexiste)
        {
            printf("No existe ningun producto con esa marca\n");
        }
    }
}


void buscarXCategoria(char productos[][3][40],double precio[]){
    char marca[40];
    int noexiste =1;
    
    printf("Ingresar la categoria \n");
    scanf("%s", &marca);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(productos[i][1], marca) == 0)
        {
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2],precio[i]);
            noexiste =0;
        }
        if (noexiste)
        {
            printf("No existe ningun producto con esa marca\n");
        }
    }
    
}


void buscarXPrecioMenor(char productos[][3][40],double precio[]){
    double preciomaximo;
    int noexiste =1;
    
    printf("Ingresar el precio maximo \n");
    scanf("%lf", &preciomaximo);
    printf("Nombre\t\tCategoria\t\tMarca\t\tPrecio\n");

    for (int i = 0; i < 10; i++)
    {
        if (precio [i] <= preciomaximo)
        {
            printf("%s\t\t%s\t\t%s\t\t%.2lf\n", productos[i][0], productos[i][1], productos[i][2],precio[i]);
            noexiste =0;
        }
        if (noexiste)
        {
            printf("No existe ningun producto con esa marca\n");
        }
    }
}


void editarProducto(char productos[][3][40],double precio[], int indice[]){
    
    int num;
    char nombre[40];
    char categoria[40];
    char marca[40];
    double nuevoprecio;

    listarProductos(productos,precio,indice);
    printf("Ingrese el numero del elemento que desea editar: \n");
    scanf("%i",&num);
    num--;
    printf("ingrese el nuevo nombre \n");
    scanf("%s", &nombre);

    printf("ingrese la nueva categoria \n");
    scanf("%s", &categoria);

    printf("ingrese la nueva marca \n");
    scanf("%s", &marca);

    printf("ingrese el nuevo precio \n");
    scanf("%lf", &nuevoprecio);    

    strcpy(productos[num][0], nombre);
    strcpy(productos[num][1], categoria);
    strcpy(productos[num][2], marca);
    precio[num] = nuevoprecio;
    listarProductos(productos,precio,indice);

}


