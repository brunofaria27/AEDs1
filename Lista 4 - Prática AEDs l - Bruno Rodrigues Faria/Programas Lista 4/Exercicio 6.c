#include <stdio.h>

int main(void) {
  // variaveis do programa
  int numero = 0;

  printf("Digite um número inteiro para escrevê-lo na tela 10 vezes: ");
  scanf("%i", &numero);

  for (int i = 0; i < 10; i++) {
    printf("%i\t", numero);
  }

  return 0;
}