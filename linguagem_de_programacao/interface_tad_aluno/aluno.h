// aluno.h

#ifndef ALUNO_H
#define ALUNO_H

#include <stdio.h> // Necessário para FILE*, sscanf, printf, etc.

// --- Estrutura para armazenar dados de um aluno ---
typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;

// --- Protótipos das funções do TAD Aluno ---

/**
 * Função para processar uma linha do arquivo e preencher a estrutura Aluno.
 * @param linha A string contendo a linha do arquivo a ser processada.
 * @param aluno O ponteiro para a estrutura Aluno a ser preenchida.
 * @return Retorna 1 se a linha foi processada com sucesso, 0 caso contrário.
 */
int processarLinhaAluno(char *linha, Aluno *aluno);

/**
 * Função para exibir o resultado (nome, média e situação) de um aluno.
 * @param aluno O ponteiro constante para a estrutura Aluno a ser exibida.
 */
void exibirResultadoAluno(const Aluno *aluno);

#endif // ALUNO_H