#include <stdio.h>

int main(void) {
    int num, novo = 0, dig;

    scanf("%d", &num);

    while (num != 0){
        dig = num % 10;
        novo = novo * 10 + dig;
        num /= 10;
    }
    printf("O numero invertido eh: %d", novo);

    return 0;
}
