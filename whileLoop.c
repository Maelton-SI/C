#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int j = 10;

    //testa i e depois decrementa
    while(i--) printf("%d\n", i);

    printf("\n");

    //decrementa e depois testa o valor previamente decrementado
    while(--j) printf("%d\n", j);

    return 0;
}