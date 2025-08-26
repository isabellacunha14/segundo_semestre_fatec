#include <stdio.h>

int main(void) {
    int pri = 0,seg = 1,ter = 1, soma = 0, nesimo;

    scanf("%d", &nesimo);

    for(int i = 4; i <= nesimo; i++){
        soma = pri + seg + ter;

        pri = seg;
        seg = ter;
        ter = soma;

    }

    printf("O %d termo de Tribonacci  eh: %d", nesimo, soma);
    return 0;
}
