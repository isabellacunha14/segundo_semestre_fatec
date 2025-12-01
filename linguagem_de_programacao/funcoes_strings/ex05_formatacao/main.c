#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    // Lê o nome
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o \n deixado pelo fgets
    nome[strcspn(nome, "\n")] = '\0';

    // Lê idade e altura
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    char buffer[200];

    // Cria a string formatada corretamente
    sprintf(buffer, "Nome: %s, Idade: %d, Altura: %.2f", nome, idade, altura);

    printf("\nString formatada:\n%s\n", buffer);

    // Variáveis para extrair
    char nomeExtract[50];
    int idadeExtract;
    float alturaExtract;

    // Extrai valores corretamente
    sscanf(buffer, "Nome: %[^,], Idade: %d, Altura: %f",
           nomeExtract, &idadeExtract, &alturaExtract);

    // Mostra os valores extraídos
    printf("\nValores extraidos:\n");
    printf("Nome: %s\n", nomeExtract);
    printf("Idade: %d\n", idadeExtract);
    printf("Altura: %.2f\n", alturaExtract);

    return 0;
}
