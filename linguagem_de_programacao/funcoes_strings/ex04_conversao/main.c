#include <stdio.h>
#include <stdlib.h> // Necessário para atoi() e atof()

int main() {
    char strInt[50], strFloat[50];

    // Solicita ao usuário uma string que contém um número inteiro
    printf("Digite um numero inteiro (string): ");
    fgets(strInt, sizeof(strInt), stdin);

    // Solicita uma string que contém um número de ponto flutuante
    printf("Digite um numero real (string): ");
    fgets(strFloat, sizeof(strFloat), stdin);

    // Converte as strings usando atoi() -> converte string para int
    int numeroInteiro = atoi(strInt);

    // Converte usando atof() -> converte string para double
    double numeroReal = atof(strFloat);

    // Soma dos dois números já convertidos
    double soma = numeroInteiro + numeroReal;

    // Exibe o resultado
    printf("Soma = %.2f\n", soma);

    return 0;
}
