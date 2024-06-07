//* strcpy(Destino, Fuente)
//* Permite copiar una cadena de texto en otra. Debes considerar que la dimensión del array
//* destino debe ser igual o mayor que el array origen y que además sobrescribe el contenido del
//* destino (de existir).

#include <stdio.h>
#include <string.h> //! Recuerda incluir la nueva biblioteca

int main() {

    char Origen[]= "Programacion";
    //* Dado que programacion tiene 12 caracteres 
    //* creamos el array destino de la misma dimension

    char Destino[12];
    //! Copiamos el contenido y lo mostramos

    strcpy(Destino,Origen);
    printf("%s",Destino);


    return 0;
}