#include <stdio.h>

int calcFat(int N);

int main(void) {
  int NumCalc = 0;

  printf("Entre com um valor: ");
  scanf("%d", &NumCalc);
  int resultado = calcFat(NumCalc);
  printf("O fatorial de %d é: %d\n", NumCalc, resultado);

  return 0;
}

int calcFat(int N) {
  if (N == 0 || N == 1) {
    return 1;
  } else {
    return N * calcFat(N - 1);
  }
}
