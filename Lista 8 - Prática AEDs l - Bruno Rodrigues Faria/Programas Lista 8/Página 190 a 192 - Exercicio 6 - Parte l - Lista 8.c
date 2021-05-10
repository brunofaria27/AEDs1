#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, pos1 = 0, pos2 = 0;
  char vend[10][20]; // Nome dos vendedores (até 20 caracteres)
  float total, perc[10], v[10], maior = 0.0, menor = 999999.9;

    for (i = 0; i < 10; i++) {
      printf("Digite o nome do vendedor número %i : ", i + 1);
      scanf("%s", vend[i]);
      printf("Digite o total das vendas do vendedor número %i: R$ ", i + 1);
      scanf("%f", &v[i]);
      printf("Digite o percentual de comissao do vendedor número %i: ", i + 1);
      scanf("%f", &perc[i]);
      printf("\n"); // Pular linha
    }

    for (i = 0; i < 10; i++) { // Maior dos salarios Total + Percentual
      if (v[i] > maior) {
        maior = v[i] * ((perc[i] / 100) + 1);
        pos1 = i; // Armazenando posição maior salario
      }
    }

    for (i = 0; i < 10; i++) { // Menor dos salarios Total + Percentual
      if (v[i] < menor) {
        menor = v[i] * ((perc[i] / 100) + 1);
        pos2 = i; // Armazenando posição menor salario
      }
    }

    for (i = 0; i < 10; i++) { // vendedores com seu salario com acrecimo do percentual sobre valor vendido
        printf("Vendedor: %s", vend[i]);
        if (v[i] > 0) {
          total = v[i] * ((perc[i] / 100) + 1);
          printf("                     Valor a receber: R$ %.2f.", total);
        }
      printf("\n"); // Pular linha
    }

    for (i = 0; i < 10; i++) {
      if (pos1 == i) {
        printf("\nO maior valor a receber: R$ %.2f quem o receberá é o %s .", maior, vend[i]);
      }
    }

    for (i = 0; i < 10; i++) {
      if (pos2 == i) {
        printf("\nO menor valor a receber: R$ %.2f quem o receberá é o %s .", total, vend[i]);
      }
    }

  return 0;
}
