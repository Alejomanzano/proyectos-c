#include <stdio.h>

/*Numeros romanos*/

int main(){

    int num;

    printf("Cual numero romano quieres poner?\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1: printf("I");
        break;
    case 2: printf("II");
        break;
    case 3: printf("III");
        break;
    case 4: printf("IV");
        break;
    case 5: printf("V");
        break;
    case 6: printf("VI");
        break;
    case 7: printf("VII");
        break;
    case 8: printf("IIX");
        break;
    case 9: printf("IX");
        break;
    case 10: printf("X");
        break;
    default: printf("Ese numero no se puede");
        break;
    }
    return 0;
}