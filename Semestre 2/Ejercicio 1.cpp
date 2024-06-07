#include <stdio.h>
#include <string.h>

void Buscarproducto();
void Ingresarproducto();
void Editarproducto();
void Eliminarproducto();
void Mostrarproducto();

int main(int argc, char const *argv[])
{
    int num;
    char[4][2][40] 
    printf("Hola esta tienda te va a registrar todo asi que comenzemos \n");
    printf("Que te gustaria hacer? \n");
    printf("\n1.Buscar producto \n2 ingresar producto \n3  Editar producto \n4 Eliminar producto \n5  Mostrar producto \n6 Salir");
    scanf("%i", &num);

    do
    {
        switch (num)
        {
        case 1:
            Buscarproducto();
            break;
        case 2:
            Ingresarproducto();
            break;
        case 3:
            Editarproducto();
            break;
        case 4:
            Eliminarproducto();
            break;
        case 5:
            Mostrarproducto();
            break;
        default:
            break;
        }
    } while (num == 6);
    
    return 0;
}

void Buscarproducto(){

}