#include <stdio.h>

int main(void) {
  int vetor1[10];
  int vetor2[10];
  int resultado[20];
  int auxiliar = 0;
  int i = 0, j = 0, x = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite número (%i) do primeiro vetor de 10 posições: ", i + 1);
    scanf("%i", &vetor1[i]);
  }

  printf("\n");

  for (i = 0; i < 10; i++) {
    printf("Digite número (%i) do segundo vetor de 10 posições: ", i + 1);
    scanf("%i", &vetor2[i]);
  }

  for (i = 0; i < 10; i++) {
    resultado[i] = vetor1[i];
  }

  for (j = 0; j < 10; j++) {
    resultado[j + 10] = vetor2[j]; // Os valores do vetor 2 ocupam a posicao 1 + 10 = 11, etc.
  }

  printf("\n");

  printf("O terceiro vetor sem ordenação:\n");
  for (x = 0; x < 20; x++){
    printf("%d, ", resultado[x]);
  }

  // ordenação vetor 3
  for (x = 0; x < 20; x++) {
    for (j = x + 1; j < 20; j++) {
      if (resultado[x] > resultado[j]) {
        auxiliar = resultado[x];
        resultado[x] = resultado[j];
        resultado[j] = auxiliar;
      }
    }
  }

  printf("\nO terceiro vetor com ordenação:\n");
  for (x = 0; x < 20; x++) {
    printf("%d, ", resultado[x]);
  }

  printf("\nO terceiro vetor ordenado de maneira decrescente:\n");
  for (x = 19; x >= 0; x--) {
    printf("%d, ", resultado[x]);
  }
 
  return 0;
}