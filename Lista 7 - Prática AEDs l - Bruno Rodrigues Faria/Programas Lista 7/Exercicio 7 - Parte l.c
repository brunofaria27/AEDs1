#include <stdio.h>

float sequencia (float n) {
  float resultado = 0;

  if (n == 1) {
    printf("1");
    return 1;
  }
  else {
    resultado = (1 / n) + sequencia(n - 1);
    printf(" + 1/%.0f", n);
    return resultado;
  }
}

int main(void) {
  float n = 0;
  // Chamar função
  float Sequencia = 0;

  printf("Digite um número n: ");
  scanf("%f", &n);

  Sequencia = sequencia(n);
  printf("\nResultado: %.2f", Sequencia);

  return 0;
}