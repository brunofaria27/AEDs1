#include <stdio.h>

float calculaSoma (int numero) {
  float soma = 0;
  int numero1 = 0;
  int numero2 = 0;

  numero1 = numero / 10;
  numero2 = numero - (numero1 * 10);

  soma = numero1 + numero2;
  
  return soma;
}

float calculaProduto (int numero) {
  float produto = 0;
  int numero1 = 0;
  int numero2 = 0;

  numero1 = numero / 10;
  numero2 = numero - (numero1 * 10);

  produto = numero1 * numero2;

  return produto;
}

int main(void) {
  float numero = 0;
  float soma = 0;
  float produto = 0;

  printf("Digite um número menor que 100: ");
  scanf("%f", &numero);

  soma = calculaSoma (numero);
  printf("O valor da soma dos digitos é: %.2lf\n", soma);

  produto = calculaProduto (numero);
  printf("O valor do produto dos digitos é: %.2lf\n", produto);

  return 0;
}