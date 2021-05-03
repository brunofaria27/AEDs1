#include <stdio.h>

int potencia (int x, int y) {
  int resultado;

  if (y == 0) {
    resultado = 1;
  }
  else {
    resultado = x * potencia(x, y - 1);
  }

  return resultado;
}

int main(void) {
  int x = 0;
  int y = 0;
  // Chamar função
  int potenciacao = 0;

  printf("Digite o número: ");
  scanf("%i", &x);

  printf("Digite a potência: ");
  scanf("%i", &y);

  potenciacao = potencia(x, y);
  printf("O valor da potenciação é: %i", potenciacao);

  return 0;
}