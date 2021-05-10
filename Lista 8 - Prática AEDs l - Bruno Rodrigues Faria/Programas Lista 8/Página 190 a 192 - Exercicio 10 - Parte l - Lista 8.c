#include <stdio.h>

int main(void) {
  int vetor1[10];
  int vetor2[5];
  int pvetor[10];
  int svetor[10];
  int cont = 0;
  int i = 0, j = 0, auxiliar = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite número (%i) do vetor de 10 posições: ", i + 1);
    scanf("%i", &vetor1[i]);
  }

  printf("\n");

  for (i = 0; i < 5; i++) {
    printf("Digite número (%i) do vetor de 5 posições: ", i + 1);
    scanf("%i", &vetor2[i]);
  }

  // Atribuição de valores para o primeiro vetor resultante
  for (i = 0; i < 5; i++) {
    auxiliar += vetor2[i];
  }
  
  for (i = 0; i < 10; i++) {
    if (vetor1[i] %2 == 0) {
      pvetor[i] = vetor1[i] + auxiliar;
    }
  }

  // Atribuição de valores para o segundo vetor resultante
  for (i = 0; i < 10; i++) {
    if (vetor1[i] % 2 == 1) {
      for (j = 0; i < 5; i++) {
        if (vetor1[i] % vetor2[j] == 0) {
          svetor[i] = svetor[i] + 1;
        }
      }
    }
  }

  // Exibição do resultado
  printf("\nPrimeiro vetor resultante:\n");
  printf("Soma de cada número par do primeiro vetor com todos do segundo.\n");
  for (i = 0; i < 10; i++) {
    if (pvetor[i] > 0) {
      printf("%i ", pvetor[i]);
    }
  }

  printf("\n\nSegundo vetor resultante:\n");
  printf("Quantidade de divisores que cada número ímpar no primeiro vetor tem no segundo vetor.\n");
  for (i = 0; i < 10; i++) {
    if (vetor1[i] % 2 == 1) {
      printf("%i ", svetor[i]);
    }
  }

  return 0;
}