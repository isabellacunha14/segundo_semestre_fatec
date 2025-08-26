#include <stdio.h>

int main(void) {
    int bau, soma = 0;

            do{
                scanf ("%d", &bau);
                if (bau < 0){
                    printf("Valor Invalido. Digite Novamente \n");
                } else {
                    soma += bau;
                }

            }while (bau !=0);

            printf("Total de Moedas encontradas: %d", soma);
}
