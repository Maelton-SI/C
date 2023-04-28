#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numeroUsuario;

    printf("Digite seu numero: \n");
    scanf("%d", &numeroUsuario);

    if(numeroUsuario % 3 == 0) printf("O numero %d eh divisivel por 3.\n", numeroUsuario);
    else printf("O numero %d nao eh divisivel por 3.\n", numeroUsuario);
    return 0;  
}