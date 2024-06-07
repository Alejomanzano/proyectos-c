#include <stdio.h>
#include <math.h>

/*Hacer un menu que considere las siguientes opciones:

case 1: Cubo de un numero 
case 2: Numero par o impar
case 3: Salir*/

int main(){

    int num;
    float num2, result;
    int num3, result2, num4;

    do
    {
        printf("\nSeleccione cual desea en el menu\n");
        printf("1) Cubo de un numero\n");
        printf("2) Numero par o impar\n");
        printf("3) Salir\n");
        scanf("%i", &num);

        
        

        if (num == 1)
        {
            printf("Deme 1 numeros para que sean al cubo\n");
            scanf("%f", &num2);

            result = pow(num2, 2);

            printf("El numero que da al cubo es de: %.2f", result);
        }else if (num == 2)
        {
            printf("Deme 2 numeros para sumarlos y se sabra si son par o impar\n");
            scanf("%i %i", &num3, &num4);

            result2 = num3 + num4;

            if (result2%2 == 0)
            {
                printf("Su numero es par\n");

            }else{
                printf("Su numero es impar\n");
            }
            

            
        }
        
        

    } while (num != 3);
    

    return 0;
}