/*  VETOR DE NUMEROS NEGATIVOS
 *  Escreva um programa que leia um vetor de 12 posicoes.
 *  Substitua todas as posicoes que contem um valor negativo por zero
 *  No final,  imprima o valor modificado
 */

#include <stdio.h>

int main(void) {
    int vetor[12];
    int novo[12];

    for (int i = 0; i < 12; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0) {
            novo[i] = 0;
        } else {
            novo[i] = vetor[i];
        }
    }

    for (int i = 0; i < 12; i++) {
        printf("%d ", novo[i]);
    }

    return 0;
}