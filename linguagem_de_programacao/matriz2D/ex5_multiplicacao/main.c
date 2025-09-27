/*MULTIPLICAÇÃO POR ESCALAR
 *Escreva um programa que leia uma matriz 2x2 e um numero inteiro (escalar)
 *O programa deve multiplicar cada elemento da matriz pelo escalar
 *e imprimir a matriz resultante
 */

#include <stdio.h>

int main(void) {
    int matriz[2][2];
    int escalar;

    printf("Insira o valor de um escalar (inteiro): ");
    scanf("%d", &escalar);

    printf("Insira os valores da matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= escalar;
        }
    }

    //imprimir matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}