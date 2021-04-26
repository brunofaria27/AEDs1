#include <stdio.h>

int main(void) {
  printf("Programa desenvolvido para calcular a idade do um indivíduo em 2050. \n");

  printf("----------------------------- \n"); // printf com intuito de divisão no terminal 
  
// Entrada de dados.
int ano_nascimento, ano_atual;
  printf("O ano de nascimento é: ");
  scanf("%d", &ano_nascimento);

  printf("O ano no qual está é: ");
  scanf("%d", &ano_atual);

// Saída de dados.
int anos_vividos, idade_2050;
  printf("----------------------------- \n"); // printf com intuito de divisão no terminal

  anos_vividos = (ano_atual-ano_nascimento);
  idade_2050 = (2050-ano_atual)+anos_vividos;
  printf("A sua idade em 2050 é: %d", idade_2050);

  return 0;
}