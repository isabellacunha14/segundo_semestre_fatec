// aluno.c

#include "aluno.h" // Inclui a interface do próprio TAD
#include <string.h> // Necessário para strcspn

// --- Função para processar uma linha do arquivo e preencher a estrutura Aluno ---
int processarLinhaAluno(char *linha, Aluno *aluno) {
    // Remove a quebra de linha ('\n') se presente
    linha[strcspn(linha, "\n")] = 0;

    // Tenta parsear a linha no formato "Nome;Nota1;Nota2"
    // O %49[^;] lê até 49 caracteres que não são ponto e vírgula (;)
    if (sscanf(linha, "%49[^;];%f;%f", aluno->nome, &aluno->nota1, &aluno->nota2) == 3) {
        aluno->media = (aluno->nota1 + aluno->nota2) / 2;
        return 1; // Sucesso
    }

    return 0; // Falha (formato inválido)
}

// --- Função para exibir o resultado de um aluno ---
void exibirResultadoAluno(const Aluno *aluno) {
    // Critério: aprovado se média >= 7
    if (aluno->media >= 7) {
        printf("%s (Média: %.2f) - Situação: **APROVADO**\n", aluno->nome, aluno->media);
    } else {
        printf("%s (Média: %.2f) - Situação: REPROVADO\n", aluno->nome, aluno->media);
    }
}