#include <stdio.h>

/*pedir 2 numeros al usuario, sumarlo, restarlo, multiplicarlo y dividirlo*/

int main(){

    float num1, num2, res1, res2, res3, res4;

    printf("Dame 2 numeros\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    res1 = num1 + num2;
    res2 = num1 - num2;
    res3 = num1 * num2;
    res4 = num1 / num2;

    printf("%.1f + %.1f = %.2f\n",num1, num2, res1);
    printf("%.1f - %.1f = %.2f\n",num1, num2, res2);
    printf("%.1f * %.1f = %.2f\n",num1, num2, res3);   
    printf("%.1f / %.1f = %.2f\n",num1, num2, res4);


    return 0;
}