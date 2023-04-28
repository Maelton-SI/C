#include <stdio.h>

int main(int argc, char **argv[])
{
    /*
    Crie um programa para informar quais e quantas notas são necessárias para entregar o
    mínimo de cédulas para um determinado valor informado pelo usuário considerando notas de
    R$ 100, R$ 50, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas.
    Por exemplo, ao solicitar R$18, o programa deve informar apenas a seguinte informação (note
    que não foram exibidas informações sobre as demais cédulas):

    1 nota(s) de R$ 10.
    1 nota(s) de R$ 5.
    3 nota(s) de R$ 1.
    */
    
    float valorUsuario;

    printf("Digite o valor:\n");
    scanf("%f", &valorUsuario);

    int notas100, notas50, notas10, notas5, notas1;
    int auxiliar;

    if(valorUsuario > 0)
    {
        if( (int) valorUsuario / 100)
        {
            notas100 = (int) valorUsuario / 100;
            valorUsuario -= ((int) valorUsuario / 100) * 100;
        }

        if( (int) valorUsuario / 50)
        {
            notas50 = (int) valorUsuario / 50;
            valorUsuario -= ((int) valorUsuario / 50) * 50;
        }

        if( (int) valorUsuario / 10)
        {
            notas10 = (int) valorUsuario / 10;
            valorUsuario -= ((int) valorUsuario / 10) * 10;
        }

        if( (int) valorUsuario / 5)
        {
            notas5 = (int) valorUsuario / 5;
            valorUsuario -= ((int) valorUsuario / 5) * 5;
        }

        if( (int) valorUsuario / 1)
        {
            notas1 = (int) valorUsuario / 1;
            valorUsuario -= ((int) valorUsuario / 1) * 1;
        }

        if (notas100)
        {
            printf("%d cedulas de 100 reais.\n", notas100);
        }

        if (notas50)
        {
            printf("%d cedulas de 50 reais.\n", notas50);
        }

        if (notas10)
        {
            printf("%d cedulas de 10 reais.\n", notas10);
        }

        if (notas5)
        {
            printf("%d cedulas de 5 reais.\n", notas5);
        }

        if (notas1)
        {
            printf("%d cedulas de 1 real.\n", notas1);
        }
        
    }

    return 0;
}