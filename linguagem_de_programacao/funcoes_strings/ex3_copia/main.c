/*  COPIA COM LIMITE DE CARACTERES
 *      Crie um programa que leia duas strings.
 *      A primeira é uma frase e a segunda é um numero N.
 *      Use a função strncpy() para copiar os primeiros n caracteres
 *      da frase para uma terceira string e imprima o resultado
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200], copia[200];
    int n;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o '\n' que fgets() adiciona
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // Copiar os primeiros n caracteres
    strncpy(copia, frase, n);

    // Garantir que a string terminada em '\0'
    copia[n] = '\0';

    printf("Resultado da copia: %s\n", copia);

    return 0;
}
