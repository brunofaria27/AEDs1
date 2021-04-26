#include <stdio.h>

int main(void) {
  int idade = 0;

  printf("Digite a idade do nadador para saber a categoria na qual se encaixa: "); //  Entrada de dados idade nadador
  scanf("%d", &idade);

  if (idade > 30){
    printf("A categoria na qual se encaixa é SÊNIOR\n");
  } // End if nadador idade superior a 30 anos
  else if (idade <= 30 && idade >= 16){
    printf("A categoria na qual se encaixa é ADULTO\n");
  } // End else if  nadador idade entre 16 e 30
  else if (idade >= 11 && idade <= 15){
    printf("A categoria na qual se encaixa é ADOLESCENTE\n");
  } // End else if nadador idade entre 11 e 15
  else if (idade >= 8 && idade <= 10){
    printf("A categoria na qual se encaixa é JUVENIL\n");
  } // End else if nadador idade entre 8 e 10
  else if (idade >= 5 && idade <= 7){
    printf("A categoria na qual se encaixa é INFANTIL\n");
  } // End else if nadador idade entre 5 e 7
  else {
    printf("O nadador tem menos de 5 anos e não se encaixa em nenhuma categoria.");
  } // End else nadador idade inferior a 5 anos


  return 0;
}