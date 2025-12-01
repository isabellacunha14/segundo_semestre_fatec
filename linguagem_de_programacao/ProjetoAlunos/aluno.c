#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

void inicializa(){
    int i;
    for(i = 0; i < MAX; i++){
        v[i] = NULL;
    }
}

void ler_dados(int i){
    if(v[i] == NULL){
        v[i] = (p_aluno)malloc(sizeof(aluno));
        fflush(stdin);
        printf("Digite o nome: \n");
        gets(v[i]->nome);
        printf("Digite a matricula: \n");
        scanf("%d", &v[i]->matricula);
        fflush(stdin);
        printf("Digite o endereco: \n");
        gets(v[i]->endereco);
        fflush(stdin);
        printf("Digite o telefone: \n");
        gets(v[i]->telefone);
        fflush(stdin);
        printf("Digite a nota: \n");
        scanf("%lf", &v[i]->nota);
    }
}
void imprimir_unico(int i){
    if(v[i] != NULL){
        printf("Nome:        %s \n", v[i]->nome);
        printf("Matricula: %8d \n", v[i]->matricula);
        printf("Endereco:    %s \n", v[i]->endereco);
        printf("Telefone:    %s \n", v[i]->telefone);
        printf("Nota:        %lf \n", v[i]->nota);
        printf("\n");
    }
}

void imprimir_tudo(){
    int i;
    for(i = 0; i < MAX; i++){
        imprimir_unico(i);
    }
}
