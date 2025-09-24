/*DIAGONAL PRINCIPAL
 *  Desenvolva um programa que leia uma matriz 4x4 e
 *  imprima sua diagonal principal
*/

#include <stdio.h>

int main(void) {
    int matriz[4][4];
    int diagonal[4];

    printf("Insira os valores de uma Matriz 4x4\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                diagonal[i] = matriz[i][j];
            }
        }
    }

    //IMPRIMIR A DIAGONAL PRINCIPAL
     printf("Matriz da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", diagonal[i]);
    }
    return 0;
}