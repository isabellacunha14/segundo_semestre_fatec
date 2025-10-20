/*
EXERCICIO 1 - PROGRESSOA ARITMETICA

Crie um programa que gere uma progressao aritmetica (pa) com uma razao
especificada pelo usuario.
A serie deve ter 10 termos e começar um o numero 1.

*/

#include <stdio.h>

int main(void) {
    int pa = 1;
    int razao;
    int i = 1;

    printf("Insira a razão da PA: ");
    scanf("%d", &razao);

    do {

        printf("%d\n", pa);
        pa+=razao;
        i++;
    }while(i<=10);
    return 0;
}