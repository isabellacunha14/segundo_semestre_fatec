/*  MAIOR E MENOR VALOR
 * Desenvolva um programa que leia um vetor de 8 posicoes e,em seguida,
 * encontre o maior valor e sua posição do vetor.
 * Faça o mesmo para o menor valor
 */

#include <stdio.h>

int main(void) {
    int vetor [8];
    int maior, menor;
    int posicao_maior = 0, posicao_menor=0;



    for (int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    } // le todos os valores do vetor

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 8; i++) { //compara todos os elementos
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    printf("Maior: %d. Posicao %d \n", maior, posicao_maior);
    printf("Menor: %d. Posicao: %d", menor, posicao_menor);
    return 0;
}