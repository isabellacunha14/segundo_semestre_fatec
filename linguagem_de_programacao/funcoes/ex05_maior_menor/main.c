#include <stdio.h>

// Função que recebe um vetor e seu tamanho
// e devolve o maior e menor número através de variáveis por referência
void maiorMenor(int vetor[], int tamanho, int *maior, int *menor) {

    // Inicializa maior e menor com o primeiro elemento
    *maior = vetor[0];
    *menor = vetor[0];

    // Percorre o vetor comparando os valores
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    int vetor[n];

    // Lê os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior, menor;

    // Chama a função
    maiorMenor(vetor, n, &maior, &menor);

    // Mostra os resultados
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
