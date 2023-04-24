#include <stdio.h>

int main()
{

    int nota;

    printf("Qual foi a sua nota jovem? \n");
    scanf("%d", &nota);

    switch (nota)
    {
        case 5: case 6:
        printf("Recuperação\n");
        break;

        case 7: case 8: case 9: case 10:
        printf("Aprovado\n");
        break;

        default: printf("Reprovado\n");
    }
}