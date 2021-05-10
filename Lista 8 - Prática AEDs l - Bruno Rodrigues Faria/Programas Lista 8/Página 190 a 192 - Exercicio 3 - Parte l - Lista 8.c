#include <stdio.h>

int main(void) {
  // Váriaveis vetores
  int vet_cod_prod[10];
  int vet_qnt_prod[10];
  // Váriaveis
  int i = 0, j = 0;
  int cod_cli, cod_prod = 0, qnt = 0;
  // Váriavel lógica 
  int produto = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite o código do produto %i: ", i + 1);
    scanf("%i", &vet_cod_prod[i]);
    printf("Digite o quantidade do produto %i: ", i + 1);
    scanf("%i", &vet_qnt_prod[i]);
  }

  printf("-------------------------------------------------\n");

  do {
  printf("\nDigite o código do cliente: ");
  scanf("%i", &cod_cli);
  printf("Qual o código do produto desejado: ");
  scanf("%i", &cod_prod);

    for (i = 0; i < 10; i++) {
      if (vet_cod_prod[i] == cod_prod) {
        produto = 1;
        j = i;
      }
      else {
        produto = 0;
      }
    }

    if (produto == 1) {
      printf("Qual a quantidade desejada: ");
      scanf("%i", &qnt);
      if (qnt <= vet_qnt_prod[j]) {
        vet_qnt_prod[j] = vet_qnt_prod[j] - qnt;
        printf("Produto atendido, volte sempre!\n");
      }
      else {
        printf("Infelizmente não podemos atender seu pedido.\n");
        printf("Não temos estoque suficiente desta mercadoria.\n");
      }
    }
    else if (produto == 0) {
      printf("Obrigado por usar o nosso programa.\n");
    }
    else {
      printf("O código do produto não é existente.");
    }
    
  } while (cod_cli != 0);

  for (i = cod_prod; i < 10; i++) {
    printf("O estoque atualizado do produto %i é: %i\n", vet_cod_prod[i], vet_qnt_prod[i]);
  }
  
  return 0;
}