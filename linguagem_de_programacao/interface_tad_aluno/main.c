// main.c

#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

// --- Função para abrir o arquivo de entrada ---
FILE *abrirArquivo(const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (fp == NULL) {
        printf("Erro: Impossível abrir o arquivo '%s'\n", nomeArquivo);
        exit(2); 
    }
    return fp;
}

// --- Função principal (main) ---
int main() {
    FILE *fp;
    char linha[256];
    Aluno alunoAtual;

    // Caminho relativo: O arquivo NOTAS.TXT deve estar dentro da pasta cmake-build-debug
    const char *caminhoArquivo = "NOTAS.TXT"; 
    
    // Se preferir o caminho absoluto que você forneceu (escapando as barras):
    // const char *caminhoArquivo = "C:\\Users\\user\\segundo_semestre_fatec\\linguagem_de_programacao\\interface_tad_aluno\\cmake-build-debug\\NOTAS.TXT";

    // 2. Abertura do arquivo
    fp = abrirArquivo(caminhoArquivo);
    
    printf("--- Processando alunos do arquivo '%s' ---\n", caminhoArquivo);

    // 3. Leitura e processamento linha por linha
    while (fgets(linha, sizeof(linha), fp) != NULL) {
        if (processarLinhaAluno(linha, &alunoAtual)) {
            exibirResultadoAluno(&alunoAtual);
        } else {
            printf("AVISO: Linha com formato inválido ignorada: '%s'\n", linha);
        }
    }

    // 4. Fechamento do arquivo
    printf("----------------------------------------\n");
    fclose(fp);
    
    printf("Processamento concluído.\n");
    return 0;
}