/*
 *EXERCICIO 2 - SOMA DE NUMEROS
 *
 *Desenvolva um programa que leia uma serie de numeros inteiros N
 onde (0<=N<=20).
 O programa deve calcular e apresentar a soma desses numeros. A entrada de
 um valor 0 deve encerrae a leitura e exibir o calculo da soma

*/

#include <stdio.h>

int main(void) {
    int soma=0;
    int numero;

    for (int i=1; i<=20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Soma: %d\n", soma);
            return 0;
        }
        soma += numero;
    }
    printf("Soma: %d\n", soma);
    return 0;
}