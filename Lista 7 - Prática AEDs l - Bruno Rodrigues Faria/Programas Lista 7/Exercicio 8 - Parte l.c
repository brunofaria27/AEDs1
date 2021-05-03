#include <stdio.h>

int sequencia (int n) {
  int resultado = 0;

  if (n == 1) {
    return 1;
  }
  else if (n == 2) {
    return 2;
  }
  else if (n > 2 && n % 2 != 0) {
    resultado = 2 * sequencia(n - 1) + 3 * sequencia(n - 2);
    printf("%i\t", n);
    return resultado;
  }
  else {
    return 0;
  }
}

int main(void) {
  int n = 0;
  // Chamar função
  int funcao = 0;

  printf("Digite um número: ");
  scanf("%i", &n);

  funcao = sequencia(n);
  printf("\nSequência: %i", funcao);

  return 0;
}