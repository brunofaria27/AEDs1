#include <stdio.h>

void calculaPA (int numero, int razao, int n, float* pa) {

  for (int i = 1; i <= n; i++) {
    (*pa) = numero + (i - 1) * razao;
  }
  
}

int main(void) {
  float numero = 0;
  float razao = 0;
  float n = 0;
  float pa = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite a razão: ");
  scanf("%f", &razao);

  printf("Digite a quantidade de termos: ");
  scanf("%f", &n);

  calculaPA(numero, razao, n, &pa);
  printf("O enésimo termo da P.A do número com a razão digitada é: %.2lf", pa);
  
  return 0;
}