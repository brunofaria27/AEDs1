#include <stdio.h>

void somaNumInteiros (int num) {
  int soma = 0;
  for (int i = 0; i <= num; i++) {
    soma = soma + i;
  }
  printf("A soma dos números inteiros entre o número 1 e %d é: %d", num, soma);
}

int main(void) {
int soma = 0;
int num = 0;
  
  printf("Digite um número inteiro positivo: ");
  scanf("%i", &num);
  
  somaNumInteiros(num);
  
  return 0;
}