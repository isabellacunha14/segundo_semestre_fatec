#include <stdio.h>

int main(void) {
    int comp, peso, maior=0;

    scanf("%d", &comp);

    for (int i = 1; i <= comp; i++){
        scanf("%d", &peso);

        if (peso > maior){
            maior = peso;
        }
    }

    printf("O maior peso levantado na competicao foi: %d kg", maior);
    return 0;
}
