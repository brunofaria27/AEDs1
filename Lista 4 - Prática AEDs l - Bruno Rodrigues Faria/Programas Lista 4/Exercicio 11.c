#include <stdio.h>

int main(void) {
  int valorx = 0;
  int tabuada = 0;

  printf("Digite o valor (1 <= valor <= 10), para realizarmos a tabuada: ");
  scanf("%i", &valorx);

  if (valorx >= 1 && valorx <= 10) {
    for (int i = 0; i <= 10; i++) {
      tabuada = valorx * i;
      printf("%i x %i = %i\n", valorx, i, tabuada);
    }
  }
  else {
    printf("O valor digitado não está entre 1 e 10, com isso não foi possivel efetuar a tabuada desejada.");
  }
  return 0;
}