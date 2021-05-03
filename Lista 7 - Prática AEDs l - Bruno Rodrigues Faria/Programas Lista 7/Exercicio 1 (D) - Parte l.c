#include <stdio.h>

int impressao(int vetor[], int n) {
  if (n > 0) {
    return vetor[n] + impressao(vetor, n - 1);
  }
  else if (n == 0) {
    return vetor[0];
  }
}

int main() {
  int n = 0;
  float media = 0;
  // Chamar funcao
  int funcao = 0;

  printf("Digite a quantidade de elementos que deseja colocar: ");
  scanf("%i", &n);
  
  int vetor[n];

  for(int i = 0; i < n; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }

  funcao = impressao(vetor, n);
  media = funcao / n;
  printf("%.2f", media);

  return 0;
}