#include <stdio.h>

void processar_opcoes(char o1, char o2, char o3, char o4, char o5, char o6, char o7, char o8,) {

    if(o1) { printf("opcao 1 estah ativa\n"); }
    if(o2) { printf("opcao 2 estah ativa\n"); }
    if(o3) { printf("opcao 3 estah ativa\n"); }
    if(o4) { printf("opcao 4 estah ativa\n"); }
    if(o5) { printf("opcao 5 estah ativa\n"); }
    if(o6) { printf("opcao 6 estah ativa\n"); }
    if(o7) { printf("opcao 7 estah ativa\n"); }
    if(o8) { printf("opcao 8 estah ativa\n"); }
}

int main() {
    char o1 = 1;
    char o2 = 0;
    char o3 = 1;
    char o4 = 0;
    char o5 = 1;
    char o6 = 0;
    char o7 = 0;
    char o8 = 0;
    
    processar_opcoes(o1, o2, o3,o4, o5, o6, o7, o8);
    return 0;
}