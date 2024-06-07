#include <stdio.h>

int main (){

    char letra = 'a';
    char LETRA = 'A';
    int letranum = 97, LETRANUM = 65;
    // 97 - 122 minusculas
    //65 - 90 mayusculas

    do
    {
        printf("Tu letra es %c \n", letra);
        letra++;
    } while (letra <= 'z' );

    do
    {
        printf("%c\n", LETRA);
        LETRA++;
    } while (LETRA <= 'Z');

    do
    {
        printf("%c\n", letranum);
        letranum++;
    } while (letranum <= 122 );
    
    do
    {
        printf("%c\n", LETRANUM);
        LETRANUM++;
    } while (LETRANUM <= 90);
    
    

    return 0;
}