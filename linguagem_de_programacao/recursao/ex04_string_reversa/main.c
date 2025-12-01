/*EXERCICIO 4
 *
 *Elabore uma funcao recursiva 'reverse(char s[])' que inverta e retorne
 *a ordem dos caracteres de uma string dada
 *
 */

#include <stdio.h>
#include <string.h>

void reverseAux(char s[], int start, int end) {
    if (start >= end){
        return;
    }
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverseAux(s, start + 1, end -1);
}
int main(void) {
    char frase[] = "Hello World!";
    printf("%s\n", frase);
    reverseAux(frase, 0, strlen(frase) - 1);
    printf("Frase reversa: [%s] \n", frase);
    return 0;
}