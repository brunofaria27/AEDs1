#include <stdio.h>

float calculaPA (int numero, int razao, int n) {
  float pa = 0;

  for (int i = 1; i <= n; i++) {
    pa = numero + (i - 1) * razao;
  }
  
  return pa;
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

  pa = calculaPA(numero, razao, n);
  printf("O enésimo termo da P.A do número com a razão digitada é: %.2lf", pa);
  
  return 0;
}