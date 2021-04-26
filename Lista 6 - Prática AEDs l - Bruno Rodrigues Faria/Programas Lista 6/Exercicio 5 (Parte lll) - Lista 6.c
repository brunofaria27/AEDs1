#include <stdio.h>

void calculaSoma (int numero, int numero2, int* soma) {

  (*soma) = numero + numero2;

}

void calculaProduto (int numero, int numero2, float* produto) {

  (*produto) = numero * numero2;

}

int main(void) {
  float numero = 0;
  float numero2 = 0;
  int soma = 0;
  float produto = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  calculaSoma (numero, numero2, &soma);
  printf("O valor da soma dos digitos é: %i\n", soma);

  calculaProduto (numero, numero2, &produto);
  printf("O valor do produto dos digitos é: %.2lf\n", produto);

  return 0;
}