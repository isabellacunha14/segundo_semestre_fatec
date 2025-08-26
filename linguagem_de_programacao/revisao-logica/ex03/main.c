#include <stdio.h>

int main(void) {
    int med;

    do {
        scanf("%d", &med);

        if (med < 0 || med > 100) {
            printf("Valor invalido. Ignorando \n");
        }

        if (0 <= med && med <= 30) {
            printf("Solo Seco. Regar Imediatamente \n");
        } else if (30 < med && med <= 70) {
            printf("Unidade ideal \n");
        } else if (70 < med && med <= 100) {
            printf("Solo Encharcado. Drenagem Necessaria \n");
        }
    }while (med != 999);

    printf("Analise Finalizada");


    return 0;
}
