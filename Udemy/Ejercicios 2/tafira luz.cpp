#include <stdio.h>

/*Visualizar la tarifa de la luz segun el gasto de corriente
electrica.
Para un gasto menor de 1.000kwxh
la tarifa es 1.2 entre 1.000 y
1.850Kwxh es 1.0 y 
mayor de 1.850Kwxh 0.9*/

int main (){

    int num, num2; 
    do
    {
        /* code */
    
    
        printf("Cuanto a usado usted de luz?? 1(1.000Kwxh) 2(1.000kwxh) 3(1.850Kwxh) 4(1.850kwxh)\n");
        scanf("%i", &num);

        while (num >4)
        {
            printf("Digito un numero que no es\n");
            printf("Cuanto a usado usted de luz?? 1(1.000Kwxh) 2(1.000kwxh) 3(1.850Kwxh) 4(1.850kwxh)\n");
            scanf("%i", &num);
        }
        

        if (num == 1)
        {
            printf("Su gasto es menor y es de 1.2\n");
        }else if (num == 2 || num == 3)
        {
            printf("Su gasto es de 1.0\n");

        }else if (num == 4)
        {
            printf("Su numero es de 0.9\n");
        }
        printf("Desea continuar ponga 0 sino digite otro numero\n");
        scanf("%i", &num2);
    
    } while (num2 != 0);
    

    return 0;
}