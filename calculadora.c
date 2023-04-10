#include <stdio.h>
#include "operacoes.h"

int main(){

    int operacao;

    //Mensagem da calculadora
    printf("----- Calculadora do Arrocha -----\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    
    //Input
    printf("Operacao desejada: ");
    scanf("%d", &operacao);
    printf("\n");

    //Output
    printf("A operacao escolhida foi a %d\n", operacao);

    return 0;
}