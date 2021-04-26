#include <stdio.h>
#include <math.h>

void somaTermos (int numero, int razao, int n, float* st) {

  (*st) = numero * (pow(razao, n) - 1 / razao - 1);
  
}

int main(void) {
  float numero = 0;
  float razao = 0;
  float n = 0;
  float st = 0;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero);

  printf("Digite a razão: ");
  scanf("%f", &razao);

  printf("Digite a quantidade de termos: ");
  scanf("%f", &n);

  somaTermos (numero, razao, n, &st);
  printf("A soma de termos da P.G do número com a razão digitada é: %.2lf", st);
  
  return 0;
}