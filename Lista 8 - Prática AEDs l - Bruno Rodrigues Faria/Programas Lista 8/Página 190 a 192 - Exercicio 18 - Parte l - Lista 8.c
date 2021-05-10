#include <stdio.h>

int main(void) {
  int vetor[15];
  int i = 0, j = 0;
  int maior = 0, posicaomaior = 0;;
  int menor = 0, posicaomenor = 0;
  
  for (i = 0; i < 15; i++) {
    printf("Digite o número da posição %i no vetor: ", i);
    scanf("%i", &vetor[i]);
  }

  maior = vetor[0];
  menor = vetor[0];

  // Verifica o maior elemento e sua posição no vetor
  for (i = 0; i < 15; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
      posicaomaior = i;
    }
  }
  
  // Verifica o menor elemento e sua posicao no vetor
  for (i = 0; i < 15; i++) {
    if (vetor[i] < menor) {
      menor = vetor[i];
      posicaomenor = i;
    }
  }

  printf("O menor número é %i na posição %i\n", menor, posicaomenor);
  printf("O maior número é %i na posição %i\n", maior, posicaomaior);

  return 0;
}