#include <stdio.h>

int main(void) {
  int numero = 0;

  printf("Digite um número (N) para que o programa possa imprimir os (N) primeiros números inteiros: ");
  scanf("%i", &numero);

  if (numero >= 0) {
    for (int i = 0; i <= numero; i++) {
      printf("%i\t", i);
    }
  }
  else {
    printf("O programa não conseguiu imprimir os primeiros %i números inteiros, pois esse valor é inválido! Utilize apenas valores inteiros positivos.", numero);
  }
  return 0;
}