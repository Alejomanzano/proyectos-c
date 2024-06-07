/*Decirle al alumno algo con base en sus calificaciones 
9-10 = excelente, sigue asi
8-9 = muy bien, puedes mejorar
7-8 = Eres un estudiante regular
0-6.9 = Puedes mejorar*/

#include <stdio.h>

int main(){

    int calificacion;
    
    printf("Cual es tu calificacion?? \n");
    scanf("%i", &calificacion);

    switch (calificacion)
    {
    case 10: printf("Excelente, sigue asi\n");
        break;
    case 9: printf("Muy bien, puedes mejorar\n");
        break;
    case 8: printf("Eres un estudiante regular\n");
        break;
    case 7: printf("Eres un estudiante regular\n");
        break;
    case 6:  printf("Puedes mejorar\n");
        break;
    case 5:  printf("Puedes mejorar\n");
        break;
    case 4:  printf("Puedes mejorar\n");
        break;
    case 3:  printf("Puedes mejorar\n");
        break;
    case 2:  printf("Puedes mejorar\n");
        break;
    case 1:  printf("Puedes mejorar\n");
        break;
    case 0:  printf("Puedes mejorar\n");
        break;
    default: printf("No se puede registrar este numero\n ");
        break;
    }

    return 0;
}