#include <stdio.h>

void calculateFactorial (double numero) {
  double factorial = 1;

  for (factorial = 1; numero > 1; numero--) {
    factorial = factorial * numero;
  } // End for to calculate the factorial
  printf("O fatorial do número é: %.2lf\n", factorial);
} // End void calculate factorial

int main(void) {
  double numero = 0;

  printf("Digite um número para calcular o Fatorial: ");
  scanf("%lf", &numero);

  calculateFactorial (numero);

  return 0;
}