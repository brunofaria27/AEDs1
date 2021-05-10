#include <stdio.h>

int main(void) {
  int vetor[10];
  int i = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite número (%i) do vetor de 10 posições: ", i + 1);
    scanf("%i", &vetor[i]);
  }

  for (i = 0; i < 10; i++) {
    if (vetor[i] > 0) {
      printf("%i ", vetor[i]);
    }
  }
  
  return 0;
}