/*  CONTAGEM DE PARES E IMPARES
 *  Desenvolva um programa que leia um vetor com 20 numeros.
 *  Em seguida, determine e imprima quantos valores pares e
 *  impares ele possui
 */

#include <stdio.h>

int main(void) {
    int vetor[20];
    int par = 0, impar = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("Par = %d\n", par);
    printf("Impar = %d\n", impar);

    return 0;
}