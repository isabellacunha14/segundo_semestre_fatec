#include <stdio.h>

#define TAM 3

void transporMatriz(int matriz[TAM][TAM], int transposta[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[TAM][TAM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposta[TAM][TAM];

    transporMatriz(matriz, transposta);

    printf("Matriz transposta:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
