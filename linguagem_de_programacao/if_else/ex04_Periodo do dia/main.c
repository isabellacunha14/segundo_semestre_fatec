/* DETERMINANDO O PERIODO DO DIA
 * Escreva um progrma que leia a hora atual (um numero de 0 a 23) e
 * determine se é manha (5 a 11), tarde (12 a 17), noite (18 a 22) ou
 * madrugada (23 a 4)
 * Use o operador ternario ?:.
 *
 */

#include <stdio.h>

int main() {
    int hora;

    printf("Digite a hora atual (0 a 23): ");
    scanf("%d", &hora);

    (hora >= 5 && hora <= 11) ? printf("Manhã\n") :
    (hora >= 12 && hora <= 17) ? printf("Tarde\n") :
    (hora >= 18 && hora <= 22) ? printf("Noite\n") :
    (hora == 23 || (hora >= 0 && hora <= 4)) ? printf("Madrugada\n") :
    printf("Hora inválida!\n");

    return 0;
}
