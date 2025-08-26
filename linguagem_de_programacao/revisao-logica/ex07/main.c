#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int escolha, soma = 0;
    int vitoria = 0, derrota = 0;
    int n_comp, n_user;
    int cont = 1;

    srand(time(NULL));

    while (cont = 1) {
        // escolha se é par ou impar
        printf("Escolha (1 - Impar ou 2-Par) \n");
        scanf("%d", &escolha);

        //numeros escolhidos
        n_comp = rand() % 11;
        printf("Digite seu numero\n");

        scanf("%d", &n_user);

        printf("Voce escolheu %d e o computador escolheu %d \n", n_user, n_comp);

        soma = n_comp + n_user;

        printf("A soma eh %d \n", soma);
        // jogo
        if ((soma % 2 == 0 && escolha == 2) || (soma % 2 != 0 && escolha == 1)) {
            printf("Voce VENCEU!!\n");
            vitoria++;
        } else {
            printf("Voce perdeu\n");
            derrota++;
        }

        printf("Placar: %d Vitorias, %d Derrotas \n", vitoria, derrota);

        printf("Jogar novamente (1 - Sim, 0 - Nao) \n");

        scanf("%d", &cont);
    }

    printf("Fim de Jogo\n");

    return 0;
}
