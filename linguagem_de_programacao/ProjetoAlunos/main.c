#include <stdio.h>
#include "aluno.h"

p_aluno v[MAX];

int main() {
    int i = 0; // posição a ser cadastrada
    int opcao = 0;
    do {
        int p = 0; // variável para a posição de procura única
        printf("Menu Principal \n");
        printf("================ \n");
        printf("1. Cadastrar novo aluno \n");
        printf("2. Imprimir dados de único aluno \n");
        printf("3. Imprimir dados de todos os alunos \n");
        printf("9. Sair do programa \n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ler_dados(i);
            printf("Tecle algo para continuar \n");
            i++; // passa para a próxima posição
            getchar();
            break;
            case 2:
                printf("Digite a posição a imprimir ?\n");
            scanf("%d", &p);
            imprimir_unico(p);
            getchar();
            break;
            case 3:
                imprimir_tudo();
            getchar();
            break;
            case 9:
                printf("Fim \n");
            break;
            default:
                printf("Opção inválida \n");
        }
    } while(opcao != 9);
}
