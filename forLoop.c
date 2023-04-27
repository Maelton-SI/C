#include <stdio.h>

int main(int argc, char const *argv[])
{
    //for (;;){} é equivalente a:
    //for (;1==1;){}, que sempre é verdade, ou seja, é um loop infinito

    for (int qtdCarneiros = 1; qtdCarneiros>-1; qtdCarneiros--)
    {
        printf("%d caneirinhos\n", qtdCarneiros);
    }

    return 0;
}