/*SOMA DE MATRIZES
 *Escreva um programa que leia duas matrizes 3x3 e calcule
 *e calcule a soma dessas matrizes.
 *O programa deve imprimir a matriz resultante
 */

#include <stdio.h>

int main(void) {
    int matriz1 [3][3], matriz2 [3][3];
    int matrizRes [3][3];

    printf("Digite os valores da matriz 1:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da matriz 2:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    //soma

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizRes[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //imprimir matriz resultante

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizRes[i][j]);
        }
        printf("\n");
    }

    return 0;
}