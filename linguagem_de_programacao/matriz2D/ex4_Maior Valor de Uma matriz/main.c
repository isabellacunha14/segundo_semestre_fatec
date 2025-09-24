/*     MAIOR VALOR DE UMA MATRIZ
    Elabore um programa que leia uma matriz 5x5. O programa deve encontrar e
    imprimir o maior valor da matriz e sua respectiva posição (linha e
    coluna
 */

#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int maior = 0;
    int linha = 0, coluna = 0;

    printf("Insira os valores da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior valor: %d. Linha: %d. Coluna: %d", maior,linha, coluna);
    return 0;
}