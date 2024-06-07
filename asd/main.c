#include <stdio.h>
#include <stdlib.h>

typedef struct tienda {
    char nombre_producto[25];
    int cantidad;
    float precio;
} Productos;

void mostrarProductos(Productos *productos, int num_productos) {
    // Opcional: imprimir los productos agregados para verificar
    for (int auxiliar = 0; auxiliar < num_productos; auxiliar++) {
        printf("Producto %d:\n", auxiliar + 1);
        printf("Nombre: %s\n", productos[auxiliar].nombre_producto);
        printf("Cantidad: %d\n", productos[auxiliar].cantidad);
        printf("Precio: %.2f\n", productos[auxiliar].precio);
    }
}

void editarProducto(Productos *productos, int num_productos) {
    int producto_a_editar;
    printf("Dame el numero de producto a editar (1-%d): ", num_productos);
    scanf("%d", &producto_a_editar);
    if (producto_a_editar >= 1 && producto_a_editar <= num_productos) {
        printf("Aqui puedes editar el producto %d\n", producto_a_editar);
        printf("Dame el nombre del producto \n");
        scanf("%24s", productos[producto_a_editar-1].nombre_producto);
        printf("Dame la cantidad del producto \n");
        scanf("%d", &productos[producto_a_editar-1].cantidad);
        printf("Dame el precio del producto \n");
        scanf("%f", &productos[producto_a_editar-1].precio);
    } else {
        printf("Numero de producto invalido\n");
    }
}

void menu(){
    int num_productos;
    int opcion;

    printf("Bienvenido a la tienda virtual\n");
    printf("Dame la cantidad de productos \n");
    scanf("%d", &num_productos);

    Productos productos[num_productos];

    for (int auxiliar = 0; auxiliar < num_productos; auxiliar++) {
        printf("Agregando el producto %d\n", auxiliar + 1);
        printf("Dame el nombre del producto \n");
        scanf("%24s", productos[auxiliar].nombre_producto);
        printf("Dame la cantidad del producto \n");
        scanf("%d", &productos[auxiliar].cantidad);
        printf("Dame el precio del producto \n");
        scanf("%f", &productos[auxiliar].precio);
    }

    do {
        printf("\nOpciones:\n");
        printf("1. Mostrar productos\n");
        printf("2. Editar producto\n");
        printf("3. Salir\n");
        printf("Dame una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarProductos(productos, num_productos);
                break;
            case 2:
                editarProducto(productos, num_productos);
                break;
            case 3:
                printf("Saliendo de la tienda virtual\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while (opcion != 3);

}

int main(int argc, char *argv[]) {
    
    menu();
    return 0;
}