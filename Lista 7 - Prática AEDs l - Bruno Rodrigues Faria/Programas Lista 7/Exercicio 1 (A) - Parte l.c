#include <stdio.h>

void impressao(int vetor[], int n, int i) {
  if (i < n) {
    printf("%d\t", vetor[i]);
    impressao(vetor, n, i + 1);
  }
}

int main() {
  int n = 0;
  
  printf("Digite a quantidade de elementos que deseja colocar: ");
  scanf("%i", &n);
  
  int vetor[n];

  for(int i = 0; i < n; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }

  impressao(vetor, n, 0);

  return 0;
}