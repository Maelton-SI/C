#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //int argc -> número de argumentos utilizados
    //O próprio nome do programa é um argumento
    //ls -la a.txt -> esse programa tem valor da variável 3
    //O sistema operacional atribui à argc a quantidade de argumentos inseridos na chamada
    //do programa
    //O nome do programa é sempre o primeiro argumento

    //char** argv -> armazena um vetor com todas as posições
    //["ls", "-la", "a.txt"]

    //com essa estrutura é possível realizar a validação de erros
    //levando em consideração a quantidade de argumentos recebidos ou não recebidos

    printf("Entendendo os parâmetros da função main.\n\n");

    if (argc != 3){
        printf("Para somar dois numeros voce precisa de ao menos 2 numeros animal!\n");
        return 1;
    }

    double n1 = atof(argv[1]);
    double n2 = atof(argv[2]);
    
    double soma = n1 + n2;

    printf("%s + %s = %f\n", argv[1], argv[2], soma);
    return 0;
}