#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char frase[50];
  char caractere = 0;
  int i = 0, j = 1;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  // Primeira posição da palavra.
  for(i = 0; i < tamanho; i++) {
    if(frase[i] == caractere) {
      printf("O caractere apareceu pela primeira vez em %i\n", i + 1);
      break;  // So irá testar uma vez até dar certo, assim irá sair do programa.
    }
  }  

  // última posição da palavra
  int pos = 0;

  for(i = 0; i < tamanho; i++) {
    if(frase[i] == caractere) {
      pos = i;
    }
  }              
  printf("O caractere apareceu pela primeira vez em %i\n\n", pos + 1);

  // Todas ocorrencias da letra no vetor
  pos = 0;  // Limpeza de variavel
  for(i = 0; i < tamanho; i++) {
    if(frase[i] == caractere) {
      printf("%i ocorrência - posição %i\n", j++, i + 1);
    }
  }
  
  return 0;
}