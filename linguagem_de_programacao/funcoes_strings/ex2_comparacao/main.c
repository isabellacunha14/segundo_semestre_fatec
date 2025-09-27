/*COMPARAÇÃO DE STRINGS
 *  Desenvolva um programa que leia duas strings e use a funcao
 *  strcmp() para compará-las. Se as strings forem iguais,
 *  imprima "As strings sao iguais", caso contrario, imprima
 *  "As strings são diferentes"

 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove o '\n' que o fgets insere
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Comparação usando strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("As strings sao iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }

    return 0;
}
