#include <stdio.h>

int main(void) {
  int vetor[10];
  int vetor2[10];
  int i = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite número (%i) do vetor de 10 posições: ", i + 1);
    scanf("%i", &vetor[i]);
  }
  
  printf("\n");
  printf("Vetor digitado pelo usuário:\n");
  for (i = 0; i < 10; i++) {
  printf("%d ", vetor[i]);
  }

  for (i = 0; i < 10; i++) {
    if (vetor[i] == 0) {
      vetor[i] = 1;
    }
    vetor2[i] = vetor[i];
  }

  printf("\n");
  printf("Vetor digitado pelo usuário, modificando 0 para 1:\n");
  for (i = 0; i < 10; i++) {
  printf("%d ", vetor2[i]);
  }
  
  return 0;
}