/*
 *EXERCICIO 2 - CONVERSAO DE
 *
 *Escreva uma funcao que converta temperaturas de Celsius para Fahrenheit
 *e outra para converter de Fahrenheit para Celsius
 */

#include <stdio.h>

float celsius(float a) { //CONVERTE DE CELSIUS PARA FAHRENHEIT
     return ((9.0/5.0)*a) + 32;
}

float fahrenheit(float a) { // CONVERTE DE FAHRENHEIT PARA CELSIUS
    return (a-32)*(5.0/9.0);
}

int main(void) {
    float temperatura;
    int escolha;

    do {
        printf("\nEscolha a operacao:\n");
        printf("1 - Converter de Celsius para Fahrenheit\n");
        printf("2 - Converter de Fahrenheit para Celsius\n");
        printf("0 - Sair\n");
        scanf("%d", &escolha);


        switch (escolha) {
            case 1:
                printf("\nDigite a temperatura em graus Celsius: ");
                scanf("%f", &temperatura);
                printf("Resultado: %.2f\n", celsius(temperatura));
            break;
            case 2:
                printf("Digite a temperatura em graus Fahrenheit: ");
                scanf("%f", &temperatura);
                printf("Resultado: %.2f\n", fahrenheit(temperatura));
            break;
            case 0:
                printf("Saindo...\n");
            break;
            default:
                printf("Opção inválida!\n");
        }
    } while (escolha != 0);

    return 0;
}
