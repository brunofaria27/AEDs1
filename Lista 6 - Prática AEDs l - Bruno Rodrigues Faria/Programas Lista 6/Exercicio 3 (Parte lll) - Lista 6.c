#include <stdio.h>
#include <math.h>

void calculaPG (int numero, int razao, int n, float* pg) {

  for (int i = 1; i <= n; i++) {
    (*pg) = numero * pow(razao, n - 1);
  }
  
}

int main(void) {
  float numero = 0;
  float razao = 0;
  float n = 0;
  float pg = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite a razão: ");
  scanf("%f", &razao);

  printf("Digite a quantidade de termos: ");
  scanf("%f", &n);

  calculaPG (numero, razao, n, &pg);
  printf("O enésimo termo da P.G do número com a razão digitada é: %.2lf", pg);
  
  return 0;
}