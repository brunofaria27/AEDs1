#include <stdio.h>

int main()
{
    
    // váriaveis do programa 
  double preco = 0.0;
  int categoria = 0;
  int situacao = 0;
  double valoraumento = 0.0;
  double valorimposto = 0.0;
  double novopreco = 0.0;
  
  // tabela visual preco, categoria e percentual de aumento
  printf("  PREÇO      CATEGORIA      PERCENTUAL DE AUMENTO\n\n  <= 25          1                  5\n\n  <= 25          2                  8\n\n  <= 25          3                  10\n");
  printf("-------------------------------------------------------------\n");
  printf("  > 25           4                  12\n\n  > 25           5                  15\n\n  > 25           6                  18\n");
  printf("-------------------------------------------------------------\n");
  printf("  CÓDIGO     SITUAÇÃO\n\n    7        Produtos que necessitam de refrigeração\n\n    8        Produtos que não necessitam de refrigeração\n");
  printf("-------------------------------------------------------------\n\n");

  // Input preço e categoria
  printf("Digite o preço: ");
  scanf("%lf", &preco);
  if (preco <= 25) {
    printf("Digite a categoria, você pode escolher entre as categorias 1, 2 e 3: ");
    scanf("%d", &categoria);
  } // End if escolha categora para valores abaixo ou igual a 25 
  else {
    printf("Digite a categoria, você pode escolher entre as categorias 4, 5 e 6: ");
    scanf("%d", &categoria);
  } // End else if caso o preco seja maior que 25 
    
  // Input situacao
  if ((preco <= 25) && (categoria == 1 || categoria == 2 || categoria == 3)) {
      printf("Digite o código da situação: ");
      scanf("%d", &situacao);
  } // End if se for escolhido um preco menor que 25 e categoria 1, 2 ou 3 
  else if ((preco > 25) && (categoria == 4 || categoria == 5 || categoria == 6)) {
      printf("Digite o código da situação: ");
      scanf("%d", &situacao);
  } // End else if se for escolhido um preco maior que 25 e categoria 4, 5 ou 6
  else {
      printf ("A categoria e o preço não coincidem.\n");
  } // End else caso categoria seja errada
    
    
  printf("-------------------------------------------------------------\n");
if ((categoria <=6) && (situacao == 7 || situacao == 8)) {
  // Output valor do aumento
  if ((preco <= 25) && (categoria == 1 || categoria == 2 || categoria == 3)) {
      
      if (preco <= 25 && categoria == 1) {

        valoraumento = (preco*1.05)-preco;

        printf("O valor do aumento escolhendo a categoria 1 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End if preco menor que 25 e categoria 1 
      else if (preco <= 25 && categoria == 2) {

        valoraumento = (preco*1.08)-preco;

        printf("O valor do aumento escolhendo a categoria 2 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End else if preco menor que 25 e categoria 2 
      else {

        valoraumento = (preco*1.10)-preco;

        printf("O valor do aumento escolhendo a categoria 3 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End else preco menor que 25 e categoria 3
  } // End if (aumento) categorias escolhidas 1, 2 e 3 
  
  else {
      if (preco > 25 && categoria == 4) {

        valoraumento = (preco*1.12)-preco;

        printf("O valor do aumento escolhendo a categoria 1 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End if preco maior que 25 e categoria 4 
      else if (preco > 25 && categoria == 5) {

        valoraumento = (preco*1.15)-preco;

        printf("O valor do aumento escolhendo a categoria 2 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End else if preco maior que 25 e categoria 5 
      else {

        valoraumento = (preco*1.18)-preco;
        
        printf("O valor do aumento escolhendo a categoria 3 no preco R$%.2lf é: R$%.2lf\n", preco, valoraumento);
      } // End else if preco maior que 25 e categoria 6
  } // End else (aumento) caso nao seja escolhido categorias 1, 2 e 3
  
  // Output valor do imposto 
  if (categoria == 2  && situacao == 7) {
    
        valorimposto = (preco*1.05)-preco;
    
        printf("O valor do imposto para aqueles que escolheram categorias 2 ou 5 e situação 7 é de: R$%.2lf\n", valorimposto);  
   } // End if valor imposto caso a escolha seja categoria 2,5 e situacao 7
  else {
        valorimposto = (preco*1.08)-preco;

        printf("O valor do imposto para aqueles que não escolheram categorias 2 ou 5 e situação 7 é de: R$%.2lf\n", valorimposto);
  } // End else valor imposto caso nao seja categoria 2,5 e situacao 7


    // Output Novo preço (preco+aumento+imposto)
        novopreco = preco + valorimposto + valoraumento;

        printf("O novo preço a pagar é: R$%.2lf\n", novopreco);
   
  // Output classificação do valor
  if (novopreco <= 50) {
    printf("Está com o preço BARATO");
  } // End novo preço menor ou igual a 50
  else if (novopreco > 50 && novopreco < 120) {
    printf("Está com o preço NORMAL");
  } // End else if novo preço maoir que 50 e menor que 120
  else {
    printf("Está com o preço CARO");
  } // End else preços maiores ou iguais a 120
} // End if caso a categoria e situacao escolhida esteja certa
  
else {
    printf ("Não foi possível efetuar os cálculos, pois a categoria ou situação escolhida não foi encontrada.");
} // End else caso a categoria e situacao escolhida esteja errada

    return 0;
}
