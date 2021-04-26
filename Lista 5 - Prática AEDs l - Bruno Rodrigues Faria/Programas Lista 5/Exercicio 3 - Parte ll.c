#include <stdio.h>

void divisivel (int num1, int num2) {
  if (num1 % num2 == 0) {
    printf("0");
  }
  else {
    printf("Próximo divisor.");
  }
}

int main(void) {
  int num1 = 0;
  int num2 = 0;

  printf("Digite o primeiro número: ");
  scanf("%i", &num1);
  printf("Digite o segundo número: ");
  scanf("%i", &num2);

  divisivel(num1, num2);

  return 0;
}