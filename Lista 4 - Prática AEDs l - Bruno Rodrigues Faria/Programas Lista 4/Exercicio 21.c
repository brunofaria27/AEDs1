/* Faça um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da senha incorreta informada escrever a mensagem "SENHA INVÂLIDA". Quando a senha for informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo deve ser encerrado. Considere que a senha correta é o valor 1234. */

#include <stdio.h>

int main(void) {
  int senha = 1234;

  do {
    printf("\nDigite a senha: ");
    scanf("%i", &senha);
    if (senha == 1234) {
      printf("ACESSO PERMITIDO.\n");
    }
    else {
      printf("ACESSO NEGADO.\n");
    }
  } while (senha != 1234);


  return 0;
}