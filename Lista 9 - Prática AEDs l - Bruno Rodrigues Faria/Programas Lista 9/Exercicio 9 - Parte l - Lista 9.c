#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char frase[50];
  char caractere = 0;
  int i = 0;
  int pos = 0;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  for(i = 0; i < tamanho; i++) {
    if(frase[i] == caractere) {
      printf("O caractere apareceu pela primeira vez em %i", i + 1);
      exit(0);  // So irá testar uma vez até dar certo, assim irá sair do programa.
    }
  }         

  return 0;
}