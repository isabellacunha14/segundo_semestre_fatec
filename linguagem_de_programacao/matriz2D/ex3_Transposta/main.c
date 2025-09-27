/*  TRANSPOSTA DE UMA MATRIZ
 *  Crie um programa que leia uma matriz 3x3 e imprima a sua matriz transposta
 *  A matriz transposta é obtida trocando linhas por colunas
 */

#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int trans[3][3];

    //leitura

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            trans[j][i] = matriz[i][j];
        }
    }
    //imprimir transposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}