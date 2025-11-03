#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* inverterString(const char* str) {
    int tamanho = strlen(str);
    char* invertida = (char*)malloc((tamanho + 1) * sizeof(char)); // +1 para o '\0'

    for (int i = 0; i < tamanho; i++) {
        invertida[i] = str[tamanho - 1 - i];
    }

    invertida[tamanho] = '\0'; // finaliza a string
    return invertida;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // remove o '\n' do final se houver
    texto[strcspn(texto, "\n")] = '\0';

    char* resultado = inverterString(texto);
    if (resultado != NULL) {
        printf("String invertida: %s\n", resultado);
        free(resultado); // libera memória alocada
    }

    return 0;
}
