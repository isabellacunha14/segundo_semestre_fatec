#include <stdio.h>

double media (int *arr, int tamanho) {
        int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return (double) soma / tamanho;
}

int main(void) {
    int valores[] = {1,2,3,4,5};
    printf("Media: %.2f\n", media(valores, 5));
    return 0;
}