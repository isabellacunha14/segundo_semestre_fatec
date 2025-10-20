/* TIPO DE VEICULO BASEADO EM RODAS
 *  Crie um programa que solicite ao usuario o numero de rodas
 *  de um veiculo, e usando a estrutura switch, determine se é uma
 *  bicicleta (2 rodas), carro (4 rodas), ou "Outro tipo" para qualquer
 *  outro numero de rodas
 */

#include <stdio.h>

int main() {
    int rodas;

    printf("Digite o número de rodas do veículo: ");
    scanf("%d", &rodas);

    switch (rodas) {
        case 2:
            printf("Bicicleta\n");
        break;
        case 4:
            printf("Carro\n");
        break;
        default:
            printf("Outro tipo\n");
        break;
    }

    return 0;
}
