#include <stdio.h>

void calculaSoma (int numero, float* soma) {
  int numero1 = 0;
  int numero2 = 0;

  numero1 = numero / 10;
  numero2 = numero - (numero1 * 10);

  (*soma) = numero1 + numero2;

}

void calculaProduto (int numero, float* produto) {
  int numero1 = 0;
  int numero2 = 0;

  numero1 = numero / 10;
  numero2 = numero - (numero1 * 10);

  (*produto) = numero1 * numero2;

}

int main(void) {
  float numero = 0;
  float soma = 0;
  float produto = 0;

  printf("Digite um número menor que 100: ");
  scanf("%f", &numero);

  calculaSoma (numero, &soma);
  printf("O valor da soma dos digitos é: %.2lf\n", soma);

  calculaProduto (numero, &produto);
  printf("O valor do produto dos digitos é: %.2lf\n", produto);

  return 0;
}