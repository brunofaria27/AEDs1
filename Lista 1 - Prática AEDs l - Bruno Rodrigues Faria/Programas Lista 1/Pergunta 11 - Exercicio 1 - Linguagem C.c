#include <stdio.h>

int main(void) {
// Entrada de dados.
double quantidade_racao, quantidade_gatos;
  printf("Insira o peso do saco de ração em KG: ");
  scanf("%lf", &quantidade_racao);

  printf("Insira a quantidade de ração oferecida para os gatos em gramas: ");
  scanf("%lf", &quantidade_gatos);

// Saída de dados
double restante_racao;
  restante_racao = quantidade_racao-((quantidade_gatos*2*5)/1000);
  printf("O restante de ração que ficou no saco foi de %.2f KG", restante_racao);
  
  return 0;
}