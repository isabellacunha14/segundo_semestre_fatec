/*EXERCICIO 1
   Implemente uma funcao recursiva que calcule o valor de uma
    base x elevada a um expoente y
 */

#include <stdio.h>

int potencia (int x, int y){
  if (y == 0){
    return 1;
  }
  return x * potencia(x, y-1);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", potencia(a, b));
    return 0;
}