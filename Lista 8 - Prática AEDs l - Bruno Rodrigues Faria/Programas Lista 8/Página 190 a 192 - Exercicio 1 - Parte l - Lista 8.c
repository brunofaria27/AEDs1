#include <stdio.h>

int main(void) {
  int par = 0;
  int impar = 0;
  int vetor[6];

  for(int i = 0; i < 6; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
    // Contar quantos números pares e ímpares
    if (vetor[i] % 2 == 0) {
      par++;
    }
    else {
      impar++;
    }
  }
  
  printf("Números pares: ");
  for(int i = 0; i < 6; i++) {
    if (vetor[i] % 2 == 0) {
      printf("%i\t", vetor[i]);
    }
  }
  printf("\nQuantidade de números pares: %i", par);

  printf("\nNúmeros ímpares: ");
  for(int i = 0; i < 6; i++) {
    if (vetor[i] % 2 != 0) {
      printf("%i\t", vetor[i]);
    }
  }
  printf("\nQuantidade de números ímpares: %i", impar);

  return 0;
}