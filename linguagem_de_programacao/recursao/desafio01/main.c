/*DESAFIO 01
 *
 *Escreva a funcao void down (int n) que escreve na tela os n primeiros
 *numeros de forma descrescente
 */

#include <stdio.h>

void down(int n) {
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }
    printf("\n");
}

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    down(num);
    return 0;
}