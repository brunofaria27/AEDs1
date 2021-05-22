#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char frase[50];

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin); // Pegar a frase da string 
  int tamanho = strlen(frase) - 1; // Contar o numero de caracteres da string

  char invertida[tamanho];
 
  for(i = tamanho; i >= 0; i--) {
    printf("%c", frase[i]);
  }

  return 0;
}