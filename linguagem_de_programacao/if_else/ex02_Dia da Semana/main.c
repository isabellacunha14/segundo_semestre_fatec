/* DETERMINADO DIA DA SEMANA
 *  Crie um programa que solicite ao usuario que insira um numero de 1 a 7 e
 *  exiba o dia da semana correspondente
 *  1- Domingo, 2- Segunda, etc
 *  Se o usuario insetir um numero fora desse intervalo, exiba uma mensagem de erro
 *  Use a estrutura switch
 */

#include <stdio.h>

int main(void) {
    int dia_semana;

    printf("Digite um numero de 1 a 7 para verificar o dia da semana: ");
    scanf("%d", &dia_semana);

    switch (dia_semana) {
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda - Feira \n");
            break;
        case 3:
            printf("Terca - Feira \n");
            break;
        case 4:
            printf("Quarta - Feira \n");
            break;
        case 5:
            printf("Quinta - Feira \n");
            break;
        case 6:
            printf("Sexta - Feira \n");
            break;
        case 7:
            printf("Sabado \n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
    return 0;
}