#include <stdio.h>

int main(){
    
    char vocal;

    printf("Selecciona una vocal\n");
    scanf("%c", &vocal);

    switch (vocal)
    {
    case 'a': printf("Selecionaste la a\n");
        break;
    case 'e': printf("Selecionaste la e\n");
        break;
    case 'i': printf("Selecionaste la i\n");
        break;
    case 'o': printf("Selecionaste la o\n");
        break;
    case 'u': printf("Selecionaste la u\n");
        break;            
    default: printf("la opcion no es valida");
        break;
    }

    return 0;
}