#include <stdio.h>

int main(void) {
  float vet1[15];
  float vet2[15];
  int i;
  float maior = 0;

  for (i = 0; i < 15; i++) {
    printf("Digite um número: ");
    scanf("%f", &vet1[i]);
  }

  maior = vet1[0];
  for (i = 0; i < 15; i++) {
    if (vet1[i] > maior) {
      maior = vet1[i];
    }
  }

  for (i = 0; i < 15; i++) {
    vet2[i] = vet1[i]/maior;
  }

  printf("\nO maior valor encontrado foi: %.2f\n", maior);
  printf("Novo vetor:\n");
  for (i = 0; i < 15; i++) {
    printf("%.2f\t", vet2[i]);
  }

  return 0;
}