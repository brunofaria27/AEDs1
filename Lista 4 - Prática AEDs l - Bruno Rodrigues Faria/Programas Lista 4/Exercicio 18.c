/* Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda delas. Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. Determine também e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total. */
#include <stdio.h>

int main(void) {
  // variaveis input
  int codigomerc = 1;
  float compra = 0.0;
  float venda = 0.0;
  // variaveis da conta
  float lucro = 0.0;
  // variaveis contadoras
  int qntdmenor10 = 0;
  int qntd10e20 = 0;
  int qntdmaior20 = 0;

  do {
    printf("\nCaso deseje fechar o programa digite o código '0'.\n");
    printf("Digite o código da mercadoria: ");
    scanf("%i", &codigomerc);

    if (codigomerc > 0) {
      printf("Informe o preço da compra: ");
      scanf("%f", &compra);
      printf("Informe o preço de venda: ");
      scanf("%f", &venda);

      lucro = 100 * (venda-compra)/compra;
      
     
      if (lucro < 10 ) {
        qntdmenor10++;
      } // End if dentro while
        
      if (lucro >= 10 && lucro <= 20) {
        qntd10e20++;
      } // End if dentro while
        
      if (lucro > 20) {
        qntdmaior20++;
      } // End if dentro while 
      
    } // End if
    else {
      printf("O programa foi encerrado, pois o número digitado foi 0 e/ou menor que 0.\n\n");
    } // End else 
  } while (codigomerc > 0);

  printf("A quantidade de mercadorias que dão o lucro menor que 10/100 é: %i\n", qntdmenor10);
  printf("A quantidade de mercadorias que dão o lucro entre 10/100 e 20/100 é: %i\n", qntd10e20);
  printf("A quantidade de mercadorias que dão o lucro maior que 20/100 é: %i\n", qntdmaior20);

  return 0;
}