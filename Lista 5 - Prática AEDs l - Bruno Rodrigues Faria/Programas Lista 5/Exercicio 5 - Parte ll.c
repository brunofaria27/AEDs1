#include <stdio.h>

void positivoOUnegativo (int numero) {
  if (numero > 0) {
    printf("O número é POSITIVO.");
  }
  else {
    printf("O número é NEGATIVO.");
  }
}

int main(void) {
  int numero = 0; 
  
  printf("Digite o número: ");
  scanf("%i", &numero);

  positivoOUnegativo (numero);
  
  return 0;
}