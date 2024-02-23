#include <stdio.h>

int main()

{
printf("Cuanto es su total en la tienda?");

float pres;
float desc;
float preciofin;

scanf("%f", &pres);
scanf("%f", &desc);
scanf("%f", &preciofin);

desc= (pres)*0.15;

preciofin= (pres - desc);

printf("El precio del descuento es: %f", preciofin);


}