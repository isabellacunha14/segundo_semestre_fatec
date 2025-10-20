/*
 *EXERCICIO 3 - CONTAGEM DE NUMEROS PARES
 *
 *Escreva um programa que receba 10 numeros inteiros do usuario e
 *conte quantos desses numeros sao pares
*/

#include <stdio.h>

int main(void) {
   int numero;
   int par = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            par ++;
        }
    }
    printf("Par: %d\n", par);
    return 0;
}