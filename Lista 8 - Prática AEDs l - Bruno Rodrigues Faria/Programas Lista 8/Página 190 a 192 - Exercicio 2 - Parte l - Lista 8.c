#include <stdio.h>

int main(void) {
  int vetor[7];

  for(int i = 0; i < 7; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }
  
  printf("\nMúltiplos de 2: ");
  for(int i = 0; i < 7; i++) {
    if (vetor[i] % 2 == 0) {
      printf("%i\t", vetor[i]);
    }
  }

  printf("\nMúltiplos de 3: ");
  for(int i = 0; i < 7; i++) {
    if (vetor[i] % 3 == 0) {
      printf("%i\t", vetor[i]);
    }
  }

  printf("\nMúltiplos de 2 e 3: ");
  for(int i = 0; i < 7; i++) {
    if (vetor[i] % 6 == 0) {
      printf("%i\t", vetor[i]);
    }
  }

  return 0;
}