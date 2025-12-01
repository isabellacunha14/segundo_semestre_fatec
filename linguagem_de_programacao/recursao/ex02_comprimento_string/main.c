/*EXERCICIO 2
 *Desenvolva uma funcao recursiva 'tamstring (char s[])' que
 *determine e retorne o comprimento da string
 */

#include <stdio.h>

int tamstring(const char s[]) {
    if (s[0] == '\0') {
        return 0;
    }
    return 1 + tamstring(s + 1);
};

int main(void) {
    char frase[] = "Hello World!";
    printf("Total de letras %d \n", tamstring(frase));
    return 0;
}