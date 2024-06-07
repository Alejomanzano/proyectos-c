#include <stdio.h>
#include <string.h>
/*Ingresar por teclado el nombre, la edad y el sexo de
cualquier persona e imprima, solo si la persona es de sexo femenino y
mayor de edad, el nombre de la persona*/

int main(){

    char nombre[40];
    int edad;
    char sexo[10];
    int num;
    
    do
    {
        printf("\nVamos a registrarle\n");
        printf("Nombre: \n");
        fgets(nombre,40,stdin);
        strtok(nombre, "\n");

        printf("Edad: \n");
        scanf("%i", &edad);
        getchar();

        printf("Sexo: f(Femenino) o M(Masculino) \n");
        fgets(sexo,10,stdin);
        strtok(sexo, "\n");

        if ((strcmp(sexo,"femenino")== 0 || strcmp(sexo, "Femenino")== 0) && edad >= 18)
        {
            printf("Usted es femenina y es mayor de edad: %s\n", nombre);
            
        }else if ((strcmp(sexo,"femenino")== 0 || strcmp(sexo, "Femenino")== 0) && edad < 18)
        {
            printf("Usted es femenina y es menor de edad: %s\n", nombre);
        }else if ((strcmp (sexo,"masculino")== 0 || strcmp (sexo,"Masculino")== 0)&& edad >= 18 )
        {
            printf("Usted es masculino y es mayor de edad: %s\n", nombre);
            
        }else if ((strcmp (sexo,"masculino")== 0 || strcmp (sexo,"Masculino")== 0)&& edad < 18 )
        {
            printf("Usted es masculino y es menor de edad: %s\n", nombre);
        }else {
            printf("No cumple con ningun sexo y ninguna edad\n");
        }

        printf("Si ya no desea continuar pulse (0)\n");
        scanf("%s", &num);
        getchar();
        
    } while (num != 0);    
        
    return 0;
}