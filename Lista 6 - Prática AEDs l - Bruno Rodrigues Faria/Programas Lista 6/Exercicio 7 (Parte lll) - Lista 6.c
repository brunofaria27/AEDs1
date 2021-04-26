#include <stdio.h>

void euclides (int* num1, int num2) {
  int quci = 0;
  int resto;

  do {
    resto = (*num1) % num2;
    (*num1) = num2;
    num2 = resto;
  } while (resto != 0);

}

int main(void) {
  int num1 = 0;
  int num2 = 0;

  printf("Digite o primeiro número: ");
  scanf("%i", &num1);

  printf("Digite o segundo número: ");
  scanf("%i", &num2);

  euclides (&num1, num2);
  printf("O MDC é: %i", num1);
  return 0;
}