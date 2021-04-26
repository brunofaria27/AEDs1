#include <stdio.h>

int main(void) {
  int i, j;
  int num = 0; // 1100
  int flag = 0;
  /* 
    Exemplo: num = 12
    12 % 2 = 0
    6 % 2 = 0
    3 % 2 = 1
    1 % 2 = 1
  */

  // 00000000000000000000000000000000 -> 32 Byts

  printf("Digite um número para transformá-lo em binário: ");
  scanf("%d", &num);

  for (i = 31; i >= 0; i--) {
    j = num >> i;  // Deslocamento de 31 Byts para direita
    /* printf("%d\t", j); */

      if (j & 1) {  // & comparação em BINÁRIO
        printf("1");
        flag = 1; // Quando aparecer um número binário 1, flag pega o valor 1 (Verdadeiro)
      } // End if
      else if (flag) { // após flag pegar o valor 1, você pode imprimir 0, senao nao imprime o 0.
        printf("0");
      } // End else if

  } // End for


  return 0;
} // End int main