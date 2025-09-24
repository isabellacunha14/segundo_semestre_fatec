/*INVERSÃO DE VETOR
 *Crie um programa que leia um vetor de 15 numeros inteiros e o
 *apresente invertido
 */

#include <stdio.h>

int main(void) {
    int original[15];
    int invertido[15];

    // ler o vetor original
    for (int i = 0; i < 15 ; i++) {
        printf("Digite um numero: ");
        scanf("%d", &original[i]);
        invertido[14-i] = original[i];
    }
   for (int i = 0; i < 15; i++) {
       printf("%d -", invertido[i]);
   }


    return 0;
}