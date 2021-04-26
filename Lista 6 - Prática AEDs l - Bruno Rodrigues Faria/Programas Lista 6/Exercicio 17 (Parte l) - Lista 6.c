#include <stdio.h>

int mdc (int numero1, int numero2) {
  int resto;

  do {
    resto = numero1 % numero2;
    numero1 = numero2;
    numero2 = resto;
  } while (resto != 0);

  return numero1;
}

int main(void) {
  int numero1 = 0;
  int numero2 = 0;

  printf("Digite o primeiro número: ");
  scanf("%i", &numero1);

  printf("Digite o segundo número: ");
  scanf("%i", &numero2);

  numero1 = mdc(numero1, numero2);
  printf("O MDC é: %i", numero1);

  return 0;
}