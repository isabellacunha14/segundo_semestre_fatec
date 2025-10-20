/*
 *EXERCICIO 1 - CALCULADORA
 *
 *Crie funcoes para adicao, subtracao, multiplicacao e divisao
 *O programa deve permitir ao usuario escolher uma operação e fornecer dois numeros
 *a operação correspondente deve ser realizada eo o resultado impresso.
 */

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Divisão impossível!\n");
        return 0;
    }
    return (float)a / b;
}

int main(void) {
    int a, b;
    int escolha;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);
        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        printf("\nEscolha a operação:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Resultado: %d\n", soma(a, b));
            break;
            case 2:
                printf("Resultado: %d\n", subtracao(a, b));
            break;
            case 3:
                printf("Resultado: %d\n", multiplicacao(a, b));
            break;
            case 4:
                printf("Resultado: %.2f\n", divisao(a, b));
            break;
            case 0:
                printf("Saindo da calculadora...\n");
            break;
            default:
                printf("Opção inválida!\n");
        }
    } while (escolha != 0);

    return 0;
}
