#include <stdio.h>

int main(void) {

  int codproduto = 0;
  int qntcomprada = 0;
  double valorpagar = 0.0;
  double valordesconto = 0.0;
    
    printf("ESCOLHA O PRODUTO DESEJADO!\n\n");
    printf(" CÓDIGO      PREÇO \n\n 1 a 10      R$10,00\n\n 11 a 20     R$15,00\n\n 21 a 30     R$20,00\n\n 31 a 40     R$30,00\n\n"); // Tabela visual
    printf("Digite o CÓDIGO do produto: "); // Input Cod produto
    scanf("%d", &codproduto);
    printf("Digite a quantidade que deseja comprar: "); // Input qntd comprada  
    scanf("%d", &qntcomprada);
    
        
        // Contas valor do produto e circunstancias
        if (codproduto >= 1 && codproduto <= 10) {

          valorpagar = (qntcomprada*10);

          printf("O valor dos produtos é: R$%.2lf\n", valorpagar);
        } // End if codigo entre 1 e 10

        else if (codproduto >= 11 && codproduto <= 20) { 
          
          valorpagar = (qntcomprada*15);

          printf("O valor dos produtos é: R$%.2lf\n", valorpagar);
        } // End else if cod entre 11 e 20
        else if (codproduto >= 21 && codproduto <= 30) { 
          
          valorpagar = (qntcomprada*20);

          printf("O valor dos produtos é: R$%.2lf\n", valorpagar);
        } // End else if cod entre 21 e 30
        else if (codproduto >= 31 && codproduto <= 40) {
          
          valorpagar = (qntcomprada*30);

          printf("O valor dos produtos é: R$%.2lf\n", valorpagar);
        } // End else if cod entre 31 e 40
         else {
          printf("Esse código não consta no nosso sistema, confira novamente.\n");
        } // End else cod invalido
   
        
       
        // Contas para desconto e circunstancias
        if (valorpagar <= 250) {

          valordesconto = (valorpagar*0.95);

          printf("Com o desconto o valor a ser pago é: %.2lf\n", valordesconto);
        } // End if desconto para valor até 250
        else if (valorpagar > 250 && valorpagar <= 500) {

          valordesconto = (valorpagar*0.90);

          printf("Com o desconto o valor a ser pago é: %.2lf\n", valordesconto);
        } // End else if desconto para valor entre 250 e 500
        else {

          valordesconto = (valorpagar*0.85);

          printf("Com o desconto o valor a ser pago é: %.2lf\n", valordesconto);
        } // End else desconmto para valores acima de 500 
   

  return 0;
}