#include <stdio.h>

int fatorial (int numero) {
  int resultado = 0;

  if (numero == 0) {
    resultado = 1;
  }
  else {
    resultado = numero * fatorial(numero - 1);
  }

  return resultado;
}

int main(void) {
  int numero = 0;
  // Chamar a função
  int Fatorial = 0;

  printf("Digite um número: ");
  scanf("%i", &numero);

  Fatorial = fatorial(numero);
  printf("O fatorial do número é: %i", Fatorial);

  return 0;
}