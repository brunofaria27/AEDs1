#include <stdio.h>

int mdc (int num1, int num2) {
  int resultado = 0;

  if (num1 % num2 == 0) {
    return num2;
  }
  else {
    return mdc(num2, num1 % num2);
  }
}


int main(void) {
  int num1 = 0;
  int num2 = 0;
  // Chamar função
  int MDC = 0;

  printf("Digite o primeiro número: ");
  scanf("%i", &num1);

  printf("Digite o segundo número: ");
  scanf("%i", &num2);

  MDC = mdc(num1, num2);
  printf("O MDC é: %i", MDC);
  return 0;
}