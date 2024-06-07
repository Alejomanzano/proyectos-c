 

typedef struct tienda {
    char nombre_producto[25];
    int cantidad;
    float precio;
} Productos;

void mostrarProductos(Productos *productos, int num_productos);
void editarProducto(Productos *productos, int num_productos);
void menu();