#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int x1, x2, x3, y1, y2, y3;
    int a, b, c, d, e, f, g, h, i, k, l, m, n;
    float j, o, p;

    printf("Dame los primeros puntos, punto (x) \n");
    scanf("%i", &x1);

    printf("Dame los primeros puntos, punto (y)\n");
    scanf("%i", &y1);

    printf("Dame los segundos puntos, punto (x)\n");
    scanf("%i", &x2);

    printf("Dame los segundos puntos, punto (y)\n");
    scanf("%i", &y2);

    printf("Dame los terceros puntos, punto(x)\n");
    scanf("%i", &x3);

    printf("Dame los terceros puntos, punto(y)\n");
    scanf("%i", &y3);


    //Al cuadrado
    a = x1 * x1;
    b = y1 *y1;
    c = x2 * x2;
    d= y2 * y2;
    e = x3 * x3;
    f = y3 * y3;

    //resta

    g = a - c;
    h = b - d;
    i=  e - a;
    j= f - b;
    k= e - c;
    l = f - d;

    //suma   

    m = g + h;
    n = i + j;
    o= k + l;

    //raiz

    float raiz1 = sqrt(m);
    float raiz2 = sqrt(n);
    float raiz3 = sqrt(o);

    printf("La distancia del punto 1 al punto 2 es de: %.2f\n", m);
    printf("La distancia del punto 1 al punto 3 es de: %.2f\n", n);
    printf("La distancia del punto 2 al punto 3 es de: %.2f\n", o);



    return 0;
}