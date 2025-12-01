/*DESAFIO 2
 *Implemente uma funcao de forma recursiva que calcule
 *a soma dos N primeiros numeros recebido como
 *argumento o teto N
 */

#include <stdio.h>

int soma(int n) {
    if (n == 1)
        return 1;
    return n + soma(n - 1);
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Soma = %d\n", soma(n));
    return 0;
}
