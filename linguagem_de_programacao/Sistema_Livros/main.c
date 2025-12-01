#include <stdio.h>
#include <string.h>
#include "livro.h"

int main() {
    int opcao = 0, i = 0;

    inicializa();

    do {
        printf("\nMenu Principal\n");
        printf("1. Cadastrar novo livro\n");
        printf("2. Imprimir livro específico\n");
        printf("3. Imprimir todos os livros\n");
        printf("4. Buscar por título\n");
        printf("5. Buscar por autor\n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (i < MAX) {
                    ler_dados(i++);
                } else {
                    printf("Estoque cheio!\n");
                }
            break;
            case 2: {
                int pos;
                printf("Digite a posição: ");
                scanf("%d", &pos);
                imprimir_unico(pos);
                break;
            }
            case 3:
                imprimir_tudo();
            break;
            case 4: {
                char titulo[101];
                printf("Digite o título: ");
                getchar();
                fgets(titulo, 101, stdin);
                titulo[strcspn(titulo, "\n")] = '\0';
                buscar_por_titulo(titulo);
                break;
            }
            case 5: {
                char autor[51];
                printf("Digite o autor: ");
                getchar();
                fgets(autor, 51, stdin);
                autor[strcspn(autor, "\n")] = '\0';
                buscar_por_autor(autor);
                break;
            }
            case 9:
                printf("Saindo...\n");
            break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 9);

    return 0;
}
