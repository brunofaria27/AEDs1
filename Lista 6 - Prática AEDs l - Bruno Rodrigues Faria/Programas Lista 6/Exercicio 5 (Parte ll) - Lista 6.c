#include <stdio.h>

float calculaSoma (int numero, int numero2) {
  float soma = 0;

  soma = numero + numero2;

  return soma;
}

float calculaProduto (int numero, int numero2) {
  float produto = 0;

  produto = numero * numero2;

  return produto;
}

int main(void) {
  float numero = 0;
  float numero2 = 0;
  float soma = 0;
  float produto = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  soma = calculaSoma (numero, numero2);
  printf("O valor da soma dos digitos é: %.2lf\n", soma);

  produto = calculaProduto (numero, numero2);
  printf("O valor do produto dos digitos é: %.2lf\n", produto);

  return 0;
}