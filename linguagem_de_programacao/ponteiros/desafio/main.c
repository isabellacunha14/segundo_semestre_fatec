/*DESAFIO 1
 * Funcao que determina o tamanho da string utilizando ponteiros
 */

#include <stdio.h>

int str_lens(char *s) {
    char *start = s;
    while (*s != '\0') {
        s++;
    }
    return s-start;
}

int main(void) {
    char str[] = "Hello World!";
    printf("O tamanho da string '%s' e: %d \n", str, str_lens(str));
    return 0;
}