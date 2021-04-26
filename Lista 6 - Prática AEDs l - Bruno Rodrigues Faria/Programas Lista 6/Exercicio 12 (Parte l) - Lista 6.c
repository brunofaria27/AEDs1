#include <stdio.h>

int calculaPotencia (int numero, int potencia) {
  int resultado = 1;

  for (int i = 1; i <= potencia; i++) {
    resultado = resultado * numero;
  }

  return resultado;
}

int main(void) {
  int numero = 0;
  int potencia = 0;
  int resultado = 0;

  printf("Digite um número: ");
  scanf("%i", &numero);

  printf("Digite a potência: ");
  scanf("%i", &potencia);

  resultado = calculaPotencia (numero, potencia);
  printf("O resultado é: %i", resultado);

  return 0;
}