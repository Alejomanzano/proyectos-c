//El usuario tiene que dar 3 numeros y eso que salga el orden correcto

#include <stdio.h>

void Menu(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Escribe 3 numeros \n");
    scanf("%d %d %d", &a, &b, &c);

    Menu(a,b,c);
    return 0;
}

void Menu(int a, int b, int c){
    

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d %d %d", c, b, a);
        }else {
            printf("%d %d %d ", b, c, a);
        }
        
    }
    
    if ( b>= a && b>= c)
    {
        if (a >= c)
        {
            printf("%d %d %d", c, a, b);
        }else {
            printf("%d %d %d ", a, b, c);
        }
        
    }
    
    if (c >= a && c>=b)
    {
        if (b>= a)
        {
            printf("%d %d %d", a, b, c);
        }else{
            printf("%d %d %d", b, a, c);
        }
        
    }
    
}


