#include <stdio.h>

int main(void) {
  printf("Programa desenvolvido para descobrir a parte inteira de um número Real. \n");

  printf("----------------------------- \n"); // printf com intuito de divisão no terminal 
  
// Entrada de dados.
double numero;
  printf("Introduza um número Real: ");
  scanf("%lf", &numero);

// Saída de dados.
  printf("A parte inteira do número Real escolhido é: %d", (int) numero);

  return 0;
}