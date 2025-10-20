/* AVALIANDO DESEMPENHO ACADEMICO
 * Desenvolva um programa que leia a nota final de um aluno
 * (de 0 a 100) e determine sua classificação
 *
 * Abaixo de 40 - reprovado
 * 40 a 59 - Suficiente
 * 60 a 79 - Bom
 * 80 a 89 - Muito Bom
 * 90 a 100 - Excelente
 *
 * Use a estrutura if-else para determinar a classificação
 */

#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota <40 ) {
        printf("REPROVADO");
     } else if (nota >=40 && nota<=59) {
         printf("SUFICIENTE");
     } else if (nota>=60 && nota<=79) {
         printf("BOM");
     } else if (nota>=80 && nota<=89) {
         printf("MUITO BOM");
     } else if (nota>=90 && nota<=100) {
         printf("EXCELENTE");
     }
    return 0;
}