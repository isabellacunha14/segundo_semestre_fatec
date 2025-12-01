#include "livro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

p_livro livros[MAX];

void inicializa() {
    for (int i = 0; i < MAX; i++) {
        livros[i] = NULL;
    }
}

void ler_dados(int posicao) {
    char isbn_temp[14];
    printf("Digite o ISBN: ");
    scanf(" %13s", isbn_temp);

    // Verifica se já existe
    for (int i = 0; i < MAX; i++) {
        if (livros[i] != NULL && strcmp(livros[i]->isbn, isbn_temp) == 0) {
            printf("Livro já cadastrado. Digite quantidade a adicionar: ");
            int qtd;
            scanf("%d", &qtd);
            livros[i]->estoque += qtd;
            return;
        }
    }

    livros[posicao] = (p_livro)malloc(sizeof(livro));
    strcpy(livros[posicao]->isbn, isbn_temp);

    printf("Digite o título: ");
    getchar();
    fgets(livros[posicao]->titulo, 101, stdin);
    livros[posicao]->titulo[strcspn(livros[posicao]->titulo, "\n")] = '\0';

    printf("Digite o autor: ");
    fgets(livros[posicao]->autor, 51, stdin);
    livros[posicao]->autor[strcspn(livros[posicao]->autor, "\n")] = '\0';

    printf("Digite o preço: ");
    scanf("%lf", &livros[posicao]->preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &livros[posicao]->estoque);
}

void imprimir_unico(int posicao) {
    if (livros[posicao] != NULL) {
        printf("Título: %s\n", livros[posicao]->titulo);
        printf("Autor: %s\n", livros[posicao]->autor);
        printf("ISBN: %s\n", livros[posicao]->isbn);
        printf("Preço: %.2lf\n", livros[posicao]->preco);
        printf("Estoque: %d\n\n", livros[posicao]->estoque);
    }
}

void imprimir_tudo() {
    for (int i = 0; i < MAX; i++) {
        imprimir_unico(i);
    }
}

void buscar_por_titulo(char *titulo) {
    for (int i = 0; i < MAX; i++) {
        if (livros[i] != NULL && strstr(livros[i]->titulo, titulo)) {
            imprimir_unico(i);
        }
    }
}

void buscar_por_autor(char *autor) {
    for (int i = 0; i < MAX; i++) {
        if (livros[i] != NULL && strstr(livros[i]->autor, autor)) {
            imprimir_unico(i);
        }
    }
}
