#ifndef ALUNO_H
#define ALUNO_H

#define MAX 100

typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
} aluno;

typedef aluno *p_aluno;

extern p_aluno v[MAX];

// Protótipos das funções
void inicializa();
void ler_dados(int i);
void imprimir_unico(int i);
void imprimir_tudo();

#endif // ALUNO_H


