/*  EXERCICIO 3
 *
 *  Crie uma funcao recursiva 'caract(char c, char s[])' que conte
 *  e retorne o numeo de ocorrencias de um caracter especifico c
 *  em uma string
 */

#include <stdio.h>

int caract (char c, const char s[]) {
    if (s[0] == '\0') {
        return 0;
    }
    return ((s[0] == c ? 1 : 0) + caract(c, s + 1));
}
int main(void) {
    char frase[] = "Hello World!";
    printf("Total de letras encontradas %d \n", caract('l', frase));
    return 0;
}