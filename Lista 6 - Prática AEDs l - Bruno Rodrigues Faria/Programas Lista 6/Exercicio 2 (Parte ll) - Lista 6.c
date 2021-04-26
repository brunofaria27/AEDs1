#include <stdio.h>

float calculaSomaTermos (int numero, int razao, int n) {
  float sn = 0;
  float ultimotermo = 0;

  for (int i = 1; i <= n; i++) {
    ultimotermo = numero + (i - 1) * razao;
    sn = (numero + ultimotermo) * n / 2.0;
  }
  
  return sn;
}

int main(void) {
  float numero = 0;
  float razao = 0;
  float n = 0;
  float sn = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite a razão: ");
  scanf("%f", &razao);

  printf("Digite a quantidade de termos: ");
  scanf("%f", &n);

  sn = calculaSomaTermos (numero, razao, n);
  printf("A soma dos termos da P.A feita é: %.2lf", sn);
  
  return 0;
}
