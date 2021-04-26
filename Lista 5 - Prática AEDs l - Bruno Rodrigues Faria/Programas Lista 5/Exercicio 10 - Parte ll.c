#include <stdio.h>

void SomaS (double n) {
  double somas = 0.0;
  double i = 1.0;

  while (i <= n) {
    somas = somas + 1/i;
    i++;
  } 

  printf("O valor da soma da sequência S é: %.2lf", somas);
}

int main(void) {
  double n = 0.0;

  printf("Digite o valor N: ");
  scanf("%lf", &n);

    if (n >= 1) {
      SomaS (n);
    }
    else {
      printf("Valor inválido.");
    }

  return 0;
}