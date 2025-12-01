#include <stdio.h>
#include <string.h>

void inverte_string(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main(void) {
    char texto[] = "Hello World!";
    inverte_string(texto);
    printf("%s\n", texto);
    return 0;
}