#include <stdio.h>

//Sumar Restar Multiplicar Dividir

void Suma();
void Resta();
void Multiplicar();
void Dividir();
void menu();



int main(int argc, char const *argv[])
{
    menu();
    return 0;
}

void menu(){
    int opcion;

    do
    {
        printf("Que desea \n1) sumar \n2) restar \n3) multiplicar \n4) dividir \n5) Salir \n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            Suma();
            break;
        case 2: 
            Resta();
            break;
        case 3:
            Multiplicar();
            break;
        case 4:
            Dividir();
            break;
        }
        
    } while (opcion != 5);
    

}

void Suma(){
    int a, b;
    int sumar = 0;
    printf("Digite 2 numeros para sumar \n");
    scanf("%i %i", &a, &b);

    sumar = a+b;
    printf("Tu resultado sumando es: %i\n", sumar);
    
}

void Resta(){
    int a, b;
    int restar = 0;
    printf("Digite 2 numeros para restar \n");
    scanf("%i %i", &a, &b);

    restar = a-b;
    printf("Tu resultado sumando es: %i\n", restar);
}

void Multiplicar(){
    int a, b;
    int multiplicar = 0;
    printf("Digite 2 numeros para multiplicar \n");
    scanf("%i %i", &a, &b);

    multiplicar = a*b;
    printf("Tu resultado sumando es: %i\n", multiplicar);
}

void Dividir(){
    int a, b;
    int dividir = 0;
    printf("Digite 2 numeros para dividir \n");
    scanf("%i %i", &a, &b);

    dividir = a/b;
    printf("Tu resultado sumando es: %i\n", dividir);
}

