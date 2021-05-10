#include <stdio.h>

int main(void) {
  int vetorA[5];
  int vetorB[5];
  int i, soma;

  soma = 0;

  printf("\n\nVetor A: \n");
  for(i = 1; i <= 5; i++) {
    printf("Digite o número: ");
    scanf("%i", &vetorA[i]);
  }

  printf("\n\nVetor B: \n");
  for(i = 1; i <= 5; i++) {
    printf("Digite o número: ");
    scanf("%i", &vetorB[i]);
  }

  for(i = 1; i <= 5; i++) {
    soma = soma + (vetorA[i] - vetorB[6 - i]);
  }

  printf("\nO Resultado é: %i", soma);
  
  return 0;
}