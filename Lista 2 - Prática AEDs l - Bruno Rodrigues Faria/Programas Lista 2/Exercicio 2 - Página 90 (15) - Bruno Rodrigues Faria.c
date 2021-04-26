#include <stdio.h>

int main(void) {

  int investimentocod = 0;
  double valor_final = 0.0;
  double valor_investido = 0.0;
    
    printf("ESCOLHA A OPERAÇÃO DESEJADA!\n\n");
    printf("CÓDIGO   DESCRIÇÃO             RENDIMENTO MENSAL\n\n 1       Poupança                  3/100\n\n 2       Fundos de renda fixa      4/100\n\n"); // Tabela visual
    printf("Digite o CÓDIGO do investimento: "); // Input Cod investimento 
    scanf("%d", &investimentocod);
    printf("Digite o valor a ser investido: "); // Input valor a ser investido  
    scanf("%lf", &valor_investido);

    if (investimentocod == 1) {

        valor_final = (valor_investido*1.03);

        printf("O valor a receber após um mês com o investimento na Poupança é de: R$%.2lf", valor_final);
      }
      else {

        valor_final = (valor_investido*1.04) ;

        printf("O valor a receber após um mês com o investimento nos Fundos de Renda Fixa é de: R$%.2lf", valor_final);
      }
   
  return 0;
}