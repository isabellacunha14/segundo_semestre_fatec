#ifndef LIVRO_H
#define LIVRO_H

#define MAX 100

typedef struct Livro {
    char titulo[101];
    char autor[51];
    char isbn[14];
    double preco;
    int estoque;
} livro;

typedef livro *p_livro;

extern p_livro livros[MAX];

// Funções
void inicializa();
void ler_dados(int posicao);
void imprimir_unico(int posicao);
void imprimir_tudo();
void buscar_por_titulo(char *titulo);
void buscar_por_autor(char *autor);

#endif // LIVRO_H
