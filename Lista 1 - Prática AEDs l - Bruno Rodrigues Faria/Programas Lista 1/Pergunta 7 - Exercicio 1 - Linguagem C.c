#include <stdio.h>

int main(void) {
  printf("Programa com intuito de calcular o rendimento e o valor total depois do rendimento, após um deposito com juros!\n");
  
  printf("------------------------------ \n"); // printf apenas com intuito de divisão
  
  // Entrada de dados.
double deposito, taxa_juros;
  printf("Digite o valor do deposito: ");
  scanf("%lf", &deposito);

  printf("Digite a taxa de juros (Exemplo: 1.76): ");
  scanf("%lf", &taxa_juros);

// Saída de dados.
double rendimento, valor_final;
  printf("------------------------------ \n"); // printf apenas com intuito de divisão
  
  rendimento = deposito*taxa_juros;
  printf("O rendimento total foi de %.2lf \n", rendimento);

  valor_final = rendimento + deposito;
  printf("O valor final foi de: %.2lf", valor_final);

  return 0;
}