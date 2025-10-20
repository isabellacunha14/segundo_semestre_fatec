/* DESCONTOS BASEADOS NA IDADE
Escreva um porgrama que leia a idade de um cliente e determine o desconto
em uma compra. Se a idade for menor que 18 anos, ele recebe 5% de desconto
Se tiver idade entre 18 e 60 anos, recebe 10% de desconto.
Se for maior que 60 anos, recebe 15% de desconto.
Use a estrutura if-else
 */

#include <stdio.h>

int main(void) {
   int idade;
    float compra, desconto;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua compra: ");
    scanf("%f", &compra);

    if (idade < 18) {
        desconto = compra * 0.95;
    } else if (idade >= 18 && idade <= 60) {
        desconto = compra * 0.90;
    } else if (idade > 60 ) {
        desconto = compra * 0.85;
    }

    printf("Sua desconto: %.2f\n", desconto);
    return 0;
}