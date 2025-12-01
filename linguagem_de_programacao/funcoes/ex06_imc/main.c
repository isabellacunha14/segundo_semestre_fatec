#include <stdio.h>

// Função para ler peso e altura
void lerDados(float *peso, float *altura) {
    printf("Digite o peso (kg): ");
    scanf("%f", peso);

    printf("Digite a altura (m): ");
    scanf("%f", altura);
}

// Função que calcula o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para imprimir o resultado do IMC
void imprimirResultado(float imc) {
    printf("IMC = %.2f -> ", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Peso normal\n");
    else if (imc < 30)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");
}

int main() {
    int quantidade;

    // Lê quantas pessoas serão avaliadas
    printf("Quantas pessoas deseja calcular o IMC? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);

        float peso, altura;

        // Ler dados
        lerDados(&peso, &altura);

        // Calcular IMC
        float imc = calcularIMC(peso, altura);

        // Exibir resultado
        imprimirResultado(imc);
    }

    return 0;
}
