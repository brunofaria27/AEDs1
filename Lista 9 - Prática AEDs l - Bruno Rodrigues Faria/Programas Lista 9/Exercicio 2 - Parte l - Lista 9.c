#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[101]; // Um espaço está reservado para o fechamento da string
  int i = 0;

  printf("Digite uma frase: ");
  fgets(frase, 101, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase); // Contar o numero de caracteres da string

  for(i = 0; i < tamanho; i++) {
    if(frase[i] == ' ') {
      printf("\n");
    }
    else {
      printf("%c", frase[i]);
    }
  }
 
  return 0;
}