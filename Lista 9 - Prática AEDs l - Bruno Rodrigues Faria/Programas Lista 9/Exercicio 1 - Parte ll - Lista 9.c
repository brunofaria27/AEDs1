#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[50];
  int espacos = 0;
  int palavras = 0;
  int i;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase); // Contar o numero de caracteres da string

  for(i = 0; i < tamanho; i++) {
    if(frase[i] == ' ') {
      espacos++;
    }
  }

  palavras = espacos + 1;

  printf("Há %i palavras na frase.", palavras);

  return 0;
}