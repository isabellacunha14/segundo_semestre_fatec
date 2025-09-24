/*
SOMA DOS ELEMENTOS
    Escreva um programa que leia um vetor de 10 elementos inteiros e calcule e imprima
    a soma de todos os seus elementos
    */

#include <stdio.h>

int main(void) {
    int vetor[10];
    int soma = 0 ;

    //leitura dos numeros para o vetor

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Soma = %d", soma);
    return 0;
}