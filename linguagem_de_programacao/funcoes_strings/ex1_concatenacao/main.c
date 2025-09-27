/*CONCATENAÇÃO DE STRINGS
 *Escreva um programa que leia duas strings do usuario e, usando
 *a funcao strcat(), concatene a segunda string ao final da primeira.
 *Imprima a string resultante
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; // tamanho definido para evitar estouro

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove o \n que o fgets adiciona, se existir
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatena str2 no final de str1
    strcat(str1, str2);

    printf("String resultante: %s\n", str1);

    return 0;
}
