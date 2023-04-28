#include <stdio.h>

int main(int argc, char **argv[])
{
    int diaUsuario;

    printf("Digite o dia de hoje:\n");
    scanf("%d", &diaUsuario);

    switch(diaUsuario)
    {
        case 1: case 7: 
            printf("Estamos no final de semana.\n");
            break;
        case 2 ... 6:
            printf("Hoje eh um dia de semana.\n");
            break;
        default:
            printf("Dia invalido.\n");
            break;
    }

    return 0;
}