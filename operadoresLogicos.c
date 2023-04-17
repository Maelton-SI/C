#include <stdio.h>

int main() {

    int a = 0;
    int b = 1;

    //&& (and), || (or), ! (not)
    if (!a) {
        printf("a é igual a 0, pois not 'a' é diferente de 0 e consequentemente verdadeiro. Por isso o escopo do if funcionou.\n");
    };

    return 0;
}