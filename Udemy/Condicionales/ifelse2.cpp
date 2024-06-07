#include <stdio.h>



int main(){

    float a, b, c, d;

    printf("Cuales son tus calificaciones solo 3? \n");
    scanf("%f %f %f", &a, &b, &c);

    d= (a + b + c)/3;

    if (d<=6)
    {
        printf("Lo siento pero no pasa ya que tu calificacion es de: %f\n", d);
    }else{
        printf("Si pasas ya que tu calificacion es de: %f\n", d);
    }
    


    return 0;
}