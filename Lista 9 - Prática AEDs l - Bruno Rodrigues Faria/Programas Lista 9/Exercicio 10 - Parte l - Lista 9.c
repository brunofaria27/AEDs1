#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char frase[50];
  char caractere = 0;
  int pos = 0;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  for(int i = 0; i < tamanho; i++) {
    if(frase[i] == caractere) {
      pos = i;
    }
  }              

  printf("O caractere apareceu pela última vez em %i", pos);
  
  return 0;
}