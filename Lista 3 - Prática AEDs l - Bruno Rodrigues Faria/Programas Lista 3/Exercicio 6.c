/* Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba 
o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista; 
■ o valor total das compras a prazo; 
■ o valor total das compras efetuadas; 
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */
#include <stdio.h>

int main(void) {
  double vista = 0.0;
  double prazo = 0.0;
  double total = 0.0;
  int tipo;
  double valor;
  
  for (int i = 0; i < 15; i++) { // Start for tipo transação
    printf("Digite o tipo da transação %d (1 ou 2) -> 1 (Á VISTA) - 2 (A PRAZO): ", i + 1);
    scanf("%d", &tipo); // Leitura do tipo de transação
    if (tipo == 2) { // Start if a prazo
      prazo += valor;
    } // End if a prazo
    else if (tipo == 1) { // Start if à vista
      vista += valor;
    } // End if à vista
    else { // Start else dados errados
      printf("Você escolheu o tipo de transação inválida, não vamos trazer resultado correto.");
    } // End else dados errados
   } // End for tipo transação

  for (int i = 0; i < 15; i++) { // Start for valor 
    printf("Digite o valor da transação %d: ", i + 1);
    scanf("%lf", &valor); // Leitura do valor da transação
  } // End for valor 
    
    printf ("\n");
    
    total += valor; //Incrementa o total


  printf("O valor à vista: R$%.2lf\n", vista);
  printf("O valor a prazo: R$%.2lf\n", prazo);
  printf("O valor total: R$%.2lf\n", total);
  printf("O valor da primeira prestação: R$%.2lf\n", 1.0*prazo/3);

  return 0;
} // End int main