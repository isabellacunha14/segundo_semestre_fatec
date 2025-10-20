#include <stdio.h>

int main() {
    int numeros[5];
    int i, maior, menor;
    float soma = 0, media;

    // Leitura dos valores
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Inicializa maior e menor com o primeiro valor
    maior = menor = numeros[0];

    // Encontra maior e menor
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    // Calcula a média
    media = soma / 5;

    // Exibe os resultados
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMédia dos valores: %.2f\n", media);

    return 0;
}
